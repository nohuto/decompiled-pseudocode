/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140932EA0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215140 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140451070 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1404AA390 (SeAuditingFileEventsWithContextEx.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1408134E0 (SeAuditingFileOrGlobalEvents.c)
 *     ObpCheckObjectReference @ 0x1408EE834 (ObpCheckObjectReference.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140932DB0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1409F8EF4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x140AF7650 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140B09DB0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1404703B0 (SepAuditingEnabledForSubcategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140813628 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A651E0 (SepAdtAuditThisEventByCategoryWithContext.c)
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
    if ( *((_DWORD *)&SepRmCapTableLock.RelativeTimerBias + v9) )
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
