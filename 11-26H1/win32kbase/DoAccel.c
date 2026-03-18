/*
 * XREFs of DoAccel @ 0x140085D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400860B0 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 */

void __fastcall DoAccel(int a1, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  __int64 v5; // rbx
  __int64 UserSessionState; // rax

  v5 = a1;
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, (_DWORD)a3);
  CDeviceAcceleration::Accelerate(*(CDeviceAcceleration **)(UserSessionState + 24 * v5 + 16360), a2, a3, a4);
}
