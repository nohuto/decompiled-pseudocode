/*
 * XREFs of ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800612C8
 * Callers:
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800289EC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180061344 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B602C (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800CDC60 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 * Callees:
 *     ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800615BC (-Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall GetScaleFactorForMonitorImp(HMONITOR a1, enum DEVICE_SCALE_FACTOR *a2)
{
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+40h] [rbp-18h]

  v4[0] = 100LL;
  v4[1] = 0x6000000064LL;
  v6 = 0;
  v5 = 0LL;
  result = CImmersiveOrPrimaryMonitor::Init((CImmersiveOrPrimaryMonitor *)v4, a1);
  *a2 = v4[0];
  return result;
}
