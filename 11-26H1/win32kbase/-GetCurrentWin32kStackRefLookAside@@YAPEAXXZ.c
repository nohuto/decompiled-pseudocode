/*
 * XREFs of ?GetCurrentWin32kStackRefLookAside@@YAPEAXXZ @ 0x14014A910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall GetCurrentWin32kStackRefLookAside(int a1, int a2, int a3)
{
  return *(void **)(W32GetUserSessionState(a1, a2, a3) + 42608);
}
