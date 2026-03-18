/*
 * XREFs of ResetAccelerationCurves @ 0x14012B760
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0 (_SetPrecisionTouchPadConfiguration.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     UnpackMouseSettings @ 0x140217504 (UnpackMouseSettings.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x14012B798 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax

  v2 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CDeviceAcceleration::ResetAccelerationCurves(*(CDeviceAcceleration **)(UserSessionState + 24 * (v2 + 682)));
}
