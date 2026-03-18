/*
 * XREFs of ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1403418DC
 * Callers:
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140317F38 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140340D3C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140366154 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _BmlGetPathModalityForAdapter @ 0x1403427E0 (_BmlGetPathModalityForAdapter.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapterWithCoreAccessHeld(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned __int16 *v6; // rsi
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int PathModalityForAdapter; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-68h]
  char v21[16]; // [rsp+50h] [rbp-38h] BYREF

  v6 = (unsigned __int16 *)&unk_140167330;
  v11 = 0;
  do
  {
    v12 = v6[1];
    v13 = *v6;
    LOBYTE(v20) = a3;
    v21[0] = 1;
    PathModalityForAdapter = BmlGetPathModalityForAdapter(v13, v12, a1, a2, v20, a4, a5, a6, v21);
    v17 = PathModalityForAdapter;
    if ( PathModalityForAdapter != -1071774970 )
      break;
    if ( !v21[0] )
      return (unsigned int)v17;
    DxgkLogCodePointPacket(0x17u, v11++, *v6, 0xC01E0306, *(_QWORD *)(a2 + 412));
    v6 += 2;
  }
  while ( v11 < 5 );
  if ( (int)v17 >= 0 )
  {
    v19 = WdLogNewEntry5_WdTrace(v16, v15);
    *(_QWORD *)(v19 + 24) = v17;
    *(_QWORD *)(v19 + 32) = v11;
    WdLogGlobalForLineNumber = 6404;
  }
  return (unsigned int)v17;
}
