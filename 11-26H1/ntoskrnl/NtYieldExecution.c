/*
 * XREFs of NtYieldExecution @ 0x14023A0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0LL);
}
