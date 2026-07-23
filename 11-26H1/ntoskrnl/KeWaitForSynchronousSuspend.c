/*
 * XREFs of KeWaitForSynchronousSuspend @ 0x1405EECEC
 * Callers:
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 * Callees:
 *     <none>
 */

__int64 KeWaitForSynchronousSuspend()
{
  KeGetCurrentIrql();
  return 0LL;
}
