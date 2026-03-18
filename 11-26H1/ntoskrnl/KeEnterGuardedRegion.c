/*
 * XREFs of KeEnterGuardedRegion @ 0x14044C000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeEnterGuardedRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
}
