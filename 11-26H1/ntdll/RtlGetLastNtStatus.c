/*
 * XREFs of RtlGetLastNtStatus @ 0x1800ECEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
