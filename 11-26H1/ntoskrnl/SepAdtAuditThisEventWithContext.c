/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x14090EA50
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215470 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x1404491A0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1404A3A20 (SeAuditingFileEventsWithContextEx.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140819340 (SeAuditingFileOrGlobalEvents.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14090E960 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140AF9CF0 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140B0BB70 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140469B30 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140819488 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A721B0 (SepAdtAuditThisEventByCategoryWithContext.c)
 */

char __fastcall SepAdtAuditThisEventWithContext(__int64 a1, char a2, char a3, struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v7; // ebx
  char result; // al
  __int64 v9; // rbx
  char v10; // di
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  __int64 ClientToken; // r9
  BOOL v13; // eax
  __int64 v14; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (unsigned int)a1 <= 8 )
  {
    v13 = a2 != 0;
    v14 = v13 | 0x10u;
    if ( !a3 )
      v14 = v13;
    return SepAdtAuditThisEventByCategoryWithContext(a1, v14, a4);
  }
  else
  {
    result = SepAuditingEnabledForSubcategory(a1, a2, a3);
    v9 = (unsigned int)(v7 - 100);
    v16 = result;
    v10 = result;
    if ( *(&SepRmCapTableLock.Timer.DueTime.LowPart + v9) )
    {
      if ( a4 )
      {
        p_SubjectContext = a4;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = (__int64)p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = (__int64)p_SubjectContext->PrimaryToken) != 0 )
      {
        SepAdtIncorporatePerUserPolicy(v9, a2, a3, ClientToken, &v16);
        v10 = v16;
      }
      else
      {
        SepAuditFailed(-1073741700);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
      return v10;
    }
  }
  return result;
}
