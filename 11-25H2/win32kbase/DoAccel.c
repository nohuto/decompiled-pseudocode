/*
 * XREFs of DoAccel @ 0x1400BC900
 * Callers:
 *     <none>
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400BCBF8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 */

void __fastcall DoAccel(__int64 a1, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  __int64 v5; // rbx
  __int64 UserSessionState; // rax

  v5 = (int)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  CDeviceAcceleration::Accelerate(*(CDeviceAcceleration **)(UserSessionState + 24 * (v5 + 682)), a2, a3, a4);
}
