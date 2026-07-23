/*
 * XREFs of SepAdtInitializePrivilegeAuditing @ 0x14081E0BC
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x14081E1C0 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CE4BC0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegQueryValue @ 0x140AB421C (SepRegQueryValue.c)
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
