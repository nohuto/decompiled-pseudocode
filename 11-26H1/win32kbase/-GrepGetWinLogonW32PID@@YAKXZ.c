/*
 * XREFs of ?GrepGetWinLogonW32PID@@YAKXZ @ 0x14013F950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepGetWinLogonW32PID(int a1, int a2, int a3)
{
  return *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 63536) & 0xFFFFFFFC;
}
