/*
 * XREFs of ?DxgkEngIsWinLogonProcess@@YAHXZ @ 0x1401F9AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DxgkEngIsWinLogonProcess(int a1, int a2, int a3)
{
  HANDLE v3; // rbx

  v3 = *(HANDLE *)(W32GetUserSessionState(a1, a2, a3) + 63536);
  return PsGetCurrentProcessId() == v3;
}
