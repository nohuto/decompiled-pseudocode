/*
 * XREFs of NtYieldExecution @ 0x140238790
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0LL);
}
