/*
 * XREFs of GetCurrentWin32kLogonUIProcessId @ 0x1401AC760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCurrentWin32kLogonUIProcessId(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63552);
}
