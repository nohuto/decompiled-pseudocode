/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x1402C5B28
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1402C5A70 (SepExamineGlobalSaclEx.c)
 *     SepRmGlobalSaclFind @ 0x140A906C0 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB6258 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN SepRmAcquireGlobalSaclReadLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
}
