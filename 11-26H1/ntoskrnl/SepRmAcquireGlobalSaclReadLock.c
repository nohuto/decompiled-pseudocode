/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x1403107C4
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14031070C (SepExamineGlobalSaclEx.c)
 *     SepRmGlobalSaclFind @ 0x140A95210 (SepRmGlobalSaclFind.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB75F8 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN SepRmAcquireGlobalSaclReadLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite((PERESOURCE)&RtlpBootStatHandleLock.KernelWaitTime, 1u);
}
