/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x1400AAA10
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400AA4BC (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadDefaultAccelerationCurves(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax

  v3 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(*(CDeviceAcceleration **)(UserSessionState + 24 * (v3 + 682)), a2);
}
