/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402A9F68
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140259188 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402A90C0 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402AB7A4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        char a5)
{
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v5; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 Container; // r13
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+20h] [rbp-78h]
  _BYTE v23[88]; // [rsp+40h] [rbp-58h] BYREF
  DXGK_ENUM_PIVOT v25; // [rsp+A8h] [rbp+10h] BYREF
  struct DMMVIDPNPRESENTPATH *v26; // [rsp+B0h] [rbp+18h] BYREF

  v5 = (int)a4;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2530;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2531;
  }
  v8 = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
  v9 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2541;
  }
  v10 = ((unsigned __int64)a2 + 56) & -(__int64)(a2 != 0LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v23, v10, 1u, a4, v21, 1LL);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, a3, v5);
  v14 = v11;
  if ( v11 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v15[3] = v8;
    v15[4] = v9;
    v15[5] = a2;
    v15[6] = v14;
    WdLogGlobalForLineNumber = 2552;
LABEL_9:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v23, v16);
    return (unsigned int)v14;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v23, v12);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v25.VidPnSourceId = -1;
  v25.VidPnTargetId = -1;
  v19 = VIDPN_MGR::FormalizeVidPnChange(
          this,
          (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
          1,
          a5,
          &v25);
  LODWORD(v14) = v19;
  if ( v19 < 0 )
  {
    if ( v19 == -1071774975 )
    {
      WdLogSingleEntry2(7LL, v8, v9);
      WdLogGlobalForLineNumber = 2577;
    }
    else
    {
      WdLogSingleEntry4(2LL, v8, v9, Container & -(__int64)(Container != -88), v19);
      WdLogGlobalForLineNumber = 2582;
    }
    if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2592;
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v23, v10, 2u, v20, v22, 1LL);
    v26 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v8, v9, &v26) < 0 || v26 != a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2601;
    }
    goto LABEL_9;
  }
  return 0LL;
}
