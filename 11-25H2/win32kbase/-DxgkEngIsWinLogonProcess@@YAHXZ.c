/*
 * XREFs of ?DxgkEngIsWinLogonProcess@@YAHXZ @ 0x1401D03E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DxgkEngIsWinLogonProcess(__int64 a1, __int64 a2)
{
  HANDLE v2; // rbx

  v2 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63544);
  return PsGetCurrentProcessId() == v2;
}
