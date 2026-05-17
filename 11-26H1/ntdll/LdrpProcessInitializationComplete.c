/*
 * XREFs of LdrpProcessInitializationComplete @ 0x1800CEC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LdrpProcessInitializationComplete()
{
  return LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252LL);
}
