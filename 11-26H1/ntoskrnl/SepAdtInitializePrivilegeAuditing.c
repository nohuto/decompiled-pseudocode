/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x140817EAC
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x140817FB0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140AB2E7C (SepRegQueryValue.c)
 */

char SepAdtInitializePrivilegeAuditing()
{
  struct _LIST_ENTRY *v0; // rax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !SepAdtRegNotifyHandle
    || (SepRegQueryValue(SepAdtRegNotifyHandle, &v2), v0 = (struct _LIST_ENTRY *)&SepFilterPrivilegesShort, !v2) )
  {
    v0 = (struct _LIST_ENTRY *)&SepFilterPrivilegesLong;
  }
  ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink = v0;
  return 1;
}
