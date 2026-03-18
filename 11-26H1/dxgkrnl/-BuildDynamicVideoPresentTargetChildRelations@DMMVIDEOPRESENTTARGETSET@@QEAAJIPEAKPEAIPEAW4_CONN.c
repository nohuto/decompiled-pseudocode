/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025FB54
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025E6A0 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _lambda_27000cc3b46378c0660433eb13a9f162_::_lambda_27000cc3b46378c0660433eb13a9f162_ @ 0x1401CC2A4 (_lambda_27000cc3b46378c0660433eb13a9f162_--_lambda_27000cc3b46378c0660433eb13a9f162_.c)
 *     _lambda_241a002bf4a16d008fe0cc3d844db0ca_::operator() @ 0x14025F918 (_lambda_241a002bf4a16d008fe0cc3d844db0ca_--operator().c)
 *     _lambda_27000cc3b46378c0660433eb13a9f162_::operator() @ 0x14025F9AC (_lambda_27000cc3b46378c0660433eb13a9f162_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x14025FA08 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        VIDPN_MGR **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v11; // rax
  int v12; // r12d
  struct DMMVIDEOPRESENTTARGET *v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  _QWORD *v16; // rdi
  _QWORD *v17; // rbx
  int v18; // esi
  unsigned int v19; // esi
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  unsigned int *v23; // r9
  int v24; // r8d
  __int64 v25; // rax
  unsigned int v26; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-3Dh] BYREF
  unsigned int v28; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v29[5]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v30[3]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v31[4]; // [rsp+88h] [rbp+Fh] BYREF
  char v32; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int *v33; // [rsp+F0h] [rbp+77h] BYREF

  v33 = a4;
  v6 = a2;
  v28 = *a3;
  v26 = 0;
  v27 = v28;
  if ( v28 < 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1689;
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v6);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v6, ContainingAdapter, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 1700;
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a5 = 5;
    v11 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v6, v11, -1073741811LL, 2LL);
    WdLogGlobalForLineNumber = 1713;
    return 3221225485LL;
  }
  v32 = 0;
  v29[0] = &v26;
  v29[1] = &v32;
  v29[2] = &v33;
  v29[3] = &v27;
  v29[4] = &v28;
  lambda_27000cc3b46378c0660433eb13a9f162_::_lambda_27000cc3b46378c0660433eb13a9f162_(
    v30,
    (__int64)&v27,
    (__int64)&v26,
    (__int64)&v33);
  lambda_27000cc3b46378c0660433eb13a9f162_::_lambda_27000cc3b46378c0660433eb13a9f162_(
    v31,
    (__int64)&v27,
    (__int64)&v28,
    (__int64)&v33);
  lambda_27000cc3b46378c0660433eb13a9f162_::operator()((__int64)v30, v6 | 0x80000000);
  if ( v27 >= v28 )
  {
    v21 = v26;
  }
  else
  {
    do
    {
      v12 = lambda_241a002bf4a16d008fe0cc3d844db0ca_::operator()((__int64)v31);
      v13 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v12 & 0x7FFFFFFF);
      if ( !v13 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1794;
      }
      if ( !*((_QWORD *)v13 + 59) && v12 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1798;
      }
      v14 = *((_QWORD *)v13 + 66);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v29, v15) )
          lambda_27000cc3b46378c0660433eb13a9f162_::operator()((__int64)v30, v15);
      }
      v16 = (_QWORD *)((char *)v13 + 440);
      v17 = (_QWORD *)*((_QWORD *)v13 + 55);
      while ( v17 != v16 )
      {
        v18 = *((_DWORD *)v17 - 108);
        v17 = (_QWORD *)*v17;
        v19 = v18 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v29, v19) )
          lambda_27000cc3b46378c0660433eb13a9f162_::operator()((__int64)v30, v19);
      }
      v20 = v26;
      if ( v26 >= v27 )
      {
        WdLogSingleEntry0(1LL);
        v20 = v26;
        WdLogGlobalForLineNumber = 1834;
      }
      v33[v20] = v12;
      v21 = ++v26;
    }
    while ( v27 < v28 );
  }
  v22 = 0LL;
  *a3 = 0;
  if ( v21 )
  {
    v23 = v33;
    do
    {
      v24 = v23[v22];
      if ( v24 < 0 )
      {
        v25 = *a3;
        v23[v25] = v24 & 0x7FFFFFFF;
        v23 = v33;
        v21 = v26;
        *a3 = v25 + 1;
      }
      v22 = (unsigned int)(v22 + 1);
    }
    while ( (unsigned int)v22 < v21 );
  }
  return 0LL;
}
