/*
 * XREFs of ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8
 * Callers:
 *     GetPathsModality @ 0x14002D62C (GetPathsModality.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x14002D748 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14002D7BC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401BE804 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1401F6320 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401F8180 (DrvSetActualPathModalityToDisplayJournal.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall FreePathsModality(PVOID Buffer, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  if ( Buffer )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(Buffer, a2);
    (*(void (__fastcall **)(PVOID))(DxgkWin32kInterface + 184))(Buffer);
    GreDeleteFastMutex(Buffer);
  }
}
