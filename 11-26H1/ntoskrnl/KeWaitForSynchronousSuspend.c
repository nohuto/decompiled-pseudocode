/*
 * XREFs of KeWaitForSynchronousSuspend @ 0x1405EC37C
 * Callers:
 *     PspSuspendThread @ 0x140AD5030 (PspSuspendThread.c)
 * Callees:
 *     <none>
 */

__int64 KeWaitForSynchronousSuspend()
{
  KeGetCurrentIrql();
  return 0LL;
}
