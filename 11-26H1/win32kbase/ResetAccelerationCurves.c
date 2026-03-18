/*
 * XREFs of ResetAccelerationCurves @ 0x14008E3D0
 * Callers:
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401BA808 (_SetPrecisionTouchPadConfiguration.c)
 *     UnpackMouseSettings @ 0x14021C740 (UnpackMouseSettings.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x14008E404 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  CDeviceAcceleration::ResetAccelerationCurves(*(CDeviceAcceleration **)(UserSessionState + 24 * v3 + 16360));
}
