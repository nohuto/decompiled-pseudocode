/*
 * XREFs of SeUnlockSubjectContext @ 0x1408EE780
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
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

void __stdcall SeUnlockSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8

  ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->PrimaryToken + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3);
  if ( SubjectContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectContext->ClientToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5);
  }
}
