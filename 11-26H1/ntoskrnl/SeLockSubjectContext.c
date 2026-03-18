/*
 * XREFs of SeLockSubjectContext @ 0x1408EE720
 * Callers:
 *     SepTrustLevelCheck @ 0x1402AC1C0 (SepTrustLevelCheck.c)
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     IopCreateSecurityCheck @ 0x1404A387C (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x140842C28 (CMFCheckAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1408EE440 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1408EE834 (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     ObpCheckTraverseAccess @ 0x14093C7C8 (ObpCheckTraverseAccess.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     CmpCheckCreateAccess @ 0x14098391C (CmpCheckCreateAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A967F0 (ObpVerifyCreatorAccessCheck.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 */

void __stdcall SeLockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6), 1u);
  if ( SubjectContext->ClientToken )
  {
    v3 = KeGetCurrentThread();
    --v3->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext->ClientToken + 6), 1u);
  }
}
