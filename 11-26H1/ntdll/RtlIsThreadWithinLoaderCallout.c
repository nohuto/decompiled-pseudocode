/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x1800ED2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_1801C58B8 == NtCurrentTeb()->ClientId.UniqueThread;
}
