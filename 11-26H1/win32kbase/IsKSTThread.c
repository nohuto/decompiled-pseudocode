/*
 * XREFs of IsKSTThread @ 0x1400659B0
 * Callers:
 *     InvokeMouseCursorPositionCallout @ 0x140064640 (InvokeMouseCursorPositionCallout.c)
 *     NtKSTWait @ 0x140065900 (NtKSTWait.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x140065A50 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     NtKSTInitialize @ 0x14018CFE0 (NtKSTInitialize.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1400659D8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 */

bool __fastcall IsKSTThread(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return CInputThreadBase::IsInputThread(*(CInputThreadBase **)(UserSessionState + 3104));
}
