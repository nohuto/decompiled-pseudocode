/*
 * XREFs of GetCurrentWin32kLogonUIProcessId @ 0x1401CEBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCurrentWin32kLogonUIProcessId(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 63544);
}
