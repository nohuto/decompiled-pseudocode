/*
 * XREFs of IsKSTThread @ 0x1400BD2E0
 * Callers:
 *     NtKSTWait @ 0x1400BD1B0 (NtKSTWait.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BD1F0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     InvokeMouseCursorPositionCallout @ 0x14018CA50 (InvokeMouseCursorPositionCallout.c)
 *     NtKSTInitialize @ 0x1401BA280 (NtKSTInitialize.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1400BD308 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 */

bool __fastcall IsKSTThread(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CInputThreadBase::IsInputThread(*(CInputThreadBase **)(UserSessionState + 3104));
}
