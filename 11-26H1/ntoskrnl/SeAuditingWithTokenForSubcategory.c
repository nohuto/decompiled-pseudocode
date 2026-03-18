/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x140A435C0
 * Callers:
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     ObCompleteObjectDuplication @ 0x1409714E0 (ObCompleteObjectDuplication.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14098D0F4 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     SepAdtTokenRightAdjusted @ 0x140A4325C (SepAdtTokenRightAdjusted.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1404C210C (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140813628 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
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
  if ( *((_DWORD *)&SepRmCapTableLock.RelativeTimerBias + v3) )
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
