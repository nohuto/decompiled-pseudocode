/*
 * XREFs of ?GetCurrentWin32kStackRefLookAside@@YAPEAXXZ @ 0x14010BBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall GetCurrentWin32kStackRefLookAside(__int64 a1, __int64 a2)
{
  return *(void **)(W32GetUserSessionState(a1, a2) + 42584);
}
