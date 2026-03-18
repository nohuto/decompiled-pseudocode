/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140337F0C
 * Callers:
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x140337710 (DxgkConvertPathsModalityToDisplayConfig.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x140337980 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1403381E0 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14033B030 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x140337A6C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x140338058 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(CCD_TOPOLOGY *this, enum CCD_TOPOLOGY_CLASS *a2)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // r9
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // esi
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 result; // rax
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF
  struct _LUID v16; // [rsp+70h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  v16 = 0LL;
  v15 = 0;
  CCD_BTL::Global();
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v16, &v15, v4, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry4(2LL, v6, this, *((_QWORD *)this + 8), this);
    result = v7;
    WdLogGlobalForLineNumber = 3373;
    return result;
  }
  v8 = *((_QWORD *)this + 8);
  v9 = 0;
  v10 = 0;
  v11 = *(unsigned __int16 *)(v8 + 20);
  while ( 1 )
  {
    if ( v10 >= v11 )
      goto LABEL_8;
    v12 = 296LL * v10;
    if ( *(_DWORD *)(v12 + v8 + 72) == v16.LowPart
      && *(_DWORD *)(v12 + v8 + 76) == v16.HighPart
      && *(_DWORD *)(v12 + v8 + 84) == v15 )
    {
      break;
    }
    ++v10;
  }
  v13 = 0;
  if ( !*(_WORD *)(v8 + 20) )
    goto LABEL_8;
  do
  {
    if ( v13 == v10 || CCD_TOPOLOGY::IsSameCloneGroup(this, v13, v10, 0) )
      ++v9;
    ++v13;
  }
  while ( v13 < v11 );
  if ( !v9 )
  {
LABEL_8:
    *(_DWORD *)a2 = 8;
    return 0LL;
  }
  if ( v9 != 1 )
  {
    if ( v11 <= 1 )
      return 3221225473LL;
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  result = 0LL;
  if ( v11 > 1 )
    *(_DWORD *)a2 = 4;
  else
    *(_DWORD *)a2 = 1;
  return result;
}
