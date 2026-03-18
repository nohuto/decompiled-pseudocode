/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402A90C0
 * Callers:
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140265CE0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402A9F68 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14002A3F8 (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x14004A9E8 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY *this,
        struct DMMVIDPNPRESENTPATH *a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3)
{
  __int64 v3; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // r15
  DMMVIDPNTOPOLOGY *v8; // r14
  DMMVIDPNTOPOLOGY *v9; // r9
  _QWORD *v10; // rcx
  int v11; // edx
  char *v12; // r8
  __int64 v13; // r10
  __int64 v14; // rcx
  char v15; // r12
  __int64 result; // rax
  __int64 v17; // rbx
  DMMVIDPNTOPOLOGY *v18; // rax
  DMMVIDPNTOPOLOGY *v19; // rax
  DMMVIDPNTOPOLOGY *v20; // rax
  __int64 v21; // rdx

  v3 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 546;
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v6[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v6[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v6[5] = *((int *)a2 + 26);
  v6[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v6[7] = v3;
  WdLogGlobalForLineNumber = 550;
  if ( *((_BYTE *)this + 76) <= 1u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 243;
  }
  if ( (*((_BYTE *)this + 78) & 2) == 0 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225506LL;
    WdLogGlobalForLineNumber = 555;
    return result;
  }
  v7 = *((_QWORD *)a2 + 12);
  v8 = (DMMVIDPNTOPOLOGY *)((char *)this + 24);
  v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v10 = 0LL;
  v11 = *(_DWORD *)(v7 + 24);
  v12 = (char *)v9 - 8;
  v13 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  if ( v9 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    v10 = (_QWORD *)((char *)v9 - 8);
  if ( v10 )
  {
    do
    {
      if ( *(_DWORD *)(v10[11] + 24LL) == (_DWORD)v13 && *(_DWORD *)(v10[12] + 24LL) == v11 )
        break;
      v18 = (DMMVIDPNTOPOLOGY *)v10[1];
      v10 = (_QWORD *)((char *)v18 - 8);
      if ( v18 == v8 )
        v10 = 0LL;
    }
    while ( v10 );
    if ( v10 )
    {
      WdLogSingleEntry2(3LL, a2, this);
      result = 3223192339LL;
      WdLogGlobalForLineNumber = 565;
      return result;
    }
  }
  v14 = *(_QWORD *)(v7 + 96);
  v15 = *(_BYTE *)(v14 + 406);
  if ( v9 != v8 )
  {
    while ( v12 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v12 + 12) + 24LL) == v11 )
      {
        WdLogSingleEntry3(7LL, a2, this, *(unsigned int *)(v7 + 24));
        result = 3223192320LL;
        WdLogGlobalForLineNumber = 585;
        return result;
      }
      v19 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v12 + 1);
      v12 = (char *)v19 - 8;
      if ( v19 == v8 )
        v12 = 0LL;
    }
  }
  if ( !*(_QWORD *)(v14 + 112) )
  {
    if ( (_DWORD)v3 == 1 )
    {
      WdLogSingleEntry2(7LL, v13, *(unsigned int *)(v7 + 24));
      WdLogGlobalForLineNumber = 610;
    }
    else
    {
      if ( (_DWORD)v3 == 2 )
      {
        WdLogSingleEntry3(7LL, a2, this, *(unsigned int *)(v7 + 24));
        result = 3223192376LL;
        WdLogGlobalForLineNumber = 602;
        return result;
      }
      if ( (unsigned int)(v3 - 1) > 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 619;
      }
    }
  }
  v17 = 0LL;
  if ( *(DMMVIDPNTOPOLOGY **)v8 != v8 )
    v17 = *(_QWORD *)v8 - 8LL;
  while ( v17 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v17 + 88) + 24LL) == *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL) )
    {
      if ( v15 )
      {
        WdLogSingleEntry2(3LL, v7, -1071774975LL);
        WdLogGlobalForLineNumber = 636;
        return 3223192321LL;
      }
      v21 = *(_QWORD *)(v17 + 96);
      if ( *(_BYTE *)(*(_QWORD *)(v21 + 96) + 406LL) )
      {
        WdLogSingleEntry2(3LL, v21, -1071774975LL);
        WdLogGlobalForLineNumber = 646;
        return 3223192321LL;
      }
    }
    if ( *(_DWORD *)(v17 + 104) == *((_DWORD *)a2 + 26) )
    {
      WdLogSingleEntry4(3LL, a2, *((int *)a2 + 26), v7, this);
      WdLogGlobalForLineNumber = 657;
    }
    v20 = *(DMMVIDPNTOPOLOGY **)(v17 + 8);
    v17 = (__int64)v20 - 8;
    if ( v20 == v8 )
      v17 = 0LL;
  }
  if ( Set<DMMVIDPNPRESENTPATH>::Add(this, a2) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 702;
  }
  if ( this )
  {
    if ( *((_QWORD *)a2 + 6) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *((_QWORD *)a2 + 6) = this;
  }
  else
  {
    WdLogSingleEntry2(2LL, (char *)a2 + 40, *((_QWORD *)a2 + 6));
    WdLogGlobalForLineNumber = 79;
  }
  *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
  ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 1u);
  return 0LL;
}
