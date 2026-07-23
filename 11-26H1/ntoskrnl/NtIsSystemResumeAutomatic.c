/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140B47F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return ((__int64)PpmIdlePolicyLock.Teb & 3) == 0;
}
