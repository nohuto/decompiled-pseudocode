/*
 * XREFs of ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     BmlPinNextBestTargetMode @ 0x1402D9F44 (BmlPinNextBestTargetMode.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1402DAE80 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402E029C (_BmlGetPathModeListForPathTargetModes.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140383C90 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x140053E18 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1402DB4C0 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnTargetMode(
        VIDPN_MGR *this,
        struct DMMVIDPNTARGETMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 Container; // r13
  int v13; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v16; // rax
  __int64 v17; // rdx
  DXGK_ENUM_PIVOT v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3445;
  }
  if ( (_DWORD)v4 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3446;
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
  v10 = v9;
  if ( v9 < 0 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry4(2LL, v4, a2, ContainingAdapter, v10);
    WdLogGlobalForLineNumber = 3459;
  }
  else
  {
    v11 = *((_QWORD *)a2 + 14);
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3474;
    }
    if ( !*(_QWORD *)(v11 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL);
    v18.VidPnTargetId = *(_DWORD *)(v11 + 24);
    v18.VidPnSourceId = -1;
    v13 = VIDPN_MGR::FormalizeVidPnChange(
            this,
            (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
            5,
            a4,
            &v18);
    LODWORD(v10) = v13;
    if ( v13 >= 0 )
      return 0LL;
    if ( v13 == -1071774970 )
    {
      WdLogSingleEntry2(3LL, v4, a2);
      WdLogGlobalForLineNumber = 3497;
    }
    else
    {
      WdLogSingleEntry3(2LL, v4, a2, v13);
      WdLogGlobalForLineNumber = 3502;
    }
    v16 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry4(7LL, v4, *(unsigned int *)(v11 + 24), Container, v16);
    WdLogGlobalForLineNumber = 3508;
    if ( v8 )
    {
      if ( (int)DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24)) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3517;
      }
    }
    else if ( (int)DMMVIDPNTARGETMODESET::UnpinMode(a2, v17) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3524;
    }
  }
  return (unsigned int)v10;
}
