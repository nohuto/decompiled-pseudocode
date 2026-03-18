/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x1400E2B00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1400E2678 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadDefaultAccelerationCurves(int a1, struct _UNICODE_STRING *a2, int a3)
{
  __int64 v4; // rbx
  __int64 UserSessionState; // rax
  int v6; // r8d

  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(
    *(CDeviceAcceleration **)(UserSessionState + 24 * v4 + 16360),
    a2,
    v6);
}
