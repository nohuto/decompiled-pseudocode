/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x1800EC740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return LdrpLoaderLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
