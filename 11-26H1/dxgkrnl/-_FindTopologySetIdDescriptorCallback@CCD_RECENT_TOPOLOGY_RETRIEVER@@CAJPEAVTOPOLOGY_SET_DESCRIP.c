/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14033B030
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x14033AC14 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x140192E2C (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140337F0C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x140339480 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x14033973C (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x140339928 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1403399A0 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?GetSetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14033ABA4 (-GetSetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x14033B3AC (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14033B490 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14033BAC4 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14033DF54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x140405088 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a2)
{
  const union _LARGE_INTEGER *Timestamp; // r15
  const struct CCD_SET_STRING_ID *SetId; // rax
  CCD_SET_STRING_ID *v6; // rdi
  int v7; // eax
  __int64 result; // rax
  unsigned __int16 v9; // si
  const struct CCD_SET_STRING_ID *v10; // rax
  void **OverflowTopology; // rax
  struct CCD_TOPOLOGY *v12; // rbp
  int v13; // eax
  CCD_SET_STRING_ID *v14; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rax
  unsigned int v16; // esi
  char IsSimilarTopology; // al
  int TopologyClass; // eax
  __int64 v19; // rsi
  int v20; // [rsp+68h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v6 = SetId;
  if ( !SetId )
  {
    v7 = -1073741823;
LABEL_4:
    WdLogSingleEntry2(2LL, v6, v7);
    WdLogGlobalForLineNumber = 899;
    return 0LL;
  }
  v7 = *(_DWORD *)SetId;
  if ( v7 < 0 )
    goto LABEL_4;
  v9 = *((_WORD *)v6 + 16);
  if ( !v9 )
  {
    WdLogSingleEntry4(2LL, this, v6, *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL));
    WdLogGlobalForLineNumber = 911;
    return 0LL;
  }
  v10 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetSetId(*((CCD_STORE::CONNECTED_SET_DESCRIPTOR **)a2 + 23));
  if ( v10 )
  {
    if ( !CCD_SET_STRING_ID::IsSubsetOf(v6, v10) )
      return 0LL;
    OverflowTopology = (void **)CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v9);
    v12 = (struct CCD_TOPOLOGY *)OverflowTopology;
    if ( !OverflowTopology )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 938;
      return 3221225495LL;
    }
    CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v6);
    v13 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(v12, 0);
    if ( v13 < 0 )
    {
      WdLogSingleEntry5(3LL, v13, v12, *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL), *((unsigned int *)a2 + 2));
      WdLogGlobalForLineNumber = 952;
      return 0LL;
    }
    v14 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 24);
    if ( v14 )
    {
      IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v14, v6);
LABEL_19:
      if ( IsSimilarTopology )
      {
        *((union _LARGE_INTEGER *)a2 + 9) = *Timestamp;
        CCD_SET_STRING_ID::operator=((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)a2 + 16));
      }
      return 0LL;
    }
    if ( (*((_BYTE *)a2 + 8) & 0xF) == 0xF )
    {
      RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                   *((_QWORD *)a2 + 23),
                                                   0xFu);
      if ( !RecentTopologySetId )
      {
        WdLogSingleEntry4(2LL, this, *((_QWORD *)a2 + 23), *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL));
        WdLogGlobalForLineNumber = 977;
        return 3221225495LL;
      }
    }
    else
    {
      v20 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v12, (enum CCD_TOPOLOGY_CLASS *)&v20);
      v16 = TopologyClass;
      if ( TopologyClass < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          TopologyClass,
          v12,
          *((_QWORD *)a2 + 23),
          *(_QWORD *)a2,
          *(_QWORD *)(*(_QWORD *)a2 + 64LL));
        WdLogGlobalForLineNumber = 993;
        return v16;
      }
      v19 = v20;
      if ( !v20 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 998;
      }
      if ( ((unsigned int)v19 & *((_DWORD *)a2 + 2)) == 0 )
        return 0LL;
      RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                   *((_QWORD *)a2 + 23),
                                                   v19);
      if ( !RecentTopologySetId )
      {
        WdLogSingleEntry5(2LL, v19, this, *((_QWORD *)a2 + 23), *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL));
        WdLogGlobalForLineNumber = 1014;
        return 3221225495LL;
      }
    }
    v16 = *(_DWORD *)RecentTopologySetId;
    if ( *(int *)RecentTopologySetId >= 0 )
    {
      IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v6);
      goto LABEL_19;
    }
    WdLogSingleEntry4(3LL, *(int *)RecentTopologySetId, RecentTopologySetId, *(_QWORD *)a2, *((unsigned int *)a2 + 2));
    WdLogGlobalForLineNumber = 1028;
    return v16;
  }
  WdLogSingleEntry5(1LL, this, v6, *(_QWORD *)a2, *(_QWORD *)(*(_QWORD *)a2 + 64LL), *((_QWORD *)a2 + 23));
  result = 3221225473LL;
  WdLogGlobalForLineNumber = 924;
  return result;
}
