/*
 * XREFs of Get96DpiServerInfo @ 0x140107360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Get96DpiServerInfo(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 5200LL;
}
