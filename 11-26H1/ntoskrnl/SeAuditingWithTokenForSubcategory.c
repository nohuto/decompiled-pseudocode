/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1409FE320
 * Callers:
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     SepAdtTokenRightAdjusted @ 0x1409FDFBC (SepAdtTokenRightAdjusted.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1404BB95C (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140819488 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, void *a2)
{
  __int64 v3; // rdi
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v3 = (unsigned int)(a1 - 100);
  v7 = SepAuditingForSubCategory(a1, 1);
  if ( *(&SepRmCapTableLock.Timer.DueTime.LowPart + v3) )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
    }
    SepAdtIncorporatePerUserPolicy(v3, 1, 0, (__int64)PrimaryToken, &v7);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v7;
}
