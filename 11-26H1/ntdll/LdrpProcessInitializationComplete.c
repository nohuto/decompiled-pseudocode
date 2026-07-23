/*
 * XREFs of LdrpProcessInitializationComplete @ 0x1800CC3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LdrpProcessInitializationComplete()
{
  return LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252LL);
}
