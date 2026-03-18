/*
 * XREFs of GreUpdateSharedDevCaps @ 0x1401C06BC
 * Callers:
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 *     _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401F4764 (_DrvUpdateDisplayModeInMdev_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x140137258 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

void __fastcall GreUpdateSharedDevCaps(ULONG_PTR P4)
{
  __int64 SessionState; // rax
  ULONG_PTR v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = P4;
  if ( !P4 )
    EngBugCheckEx(0x164u, 0x4CuLL, 0LL, 0LL, 0LL);
  SessionState = W32GetSessionState(P4);
  vGetDeviceCaps((struct PDEVOBJ *)&v2, *(struct _DEVCAPS **)(*(_QWORD *)(SessionState + 88) + 1848LL));
}
