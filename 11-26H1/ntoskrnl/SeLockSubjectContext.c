/*
 * XREFs of SeLockSubjectContext @ 0x1408F4CE0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1403AB8E0 (SepTrustLevelCheck.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     IopCreateSecurityCheck @ 0x14049D38C (IopCreateSecurityCheck.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     CMFCheckAccess @ 0x1408480B8 (CMFCheckAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1408F4A00 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     ObpCheckTraverseAccess @ 0x140918368 (ObpCheckTraverseAccess.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     CmpCheckCreateAccess @ 0x14094592C (CmpCheckCreateAccess.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A9A970 (ObpVerifyCreatorAccessCheck.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
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
