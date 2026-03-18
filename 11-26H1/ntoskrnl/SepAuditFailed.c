/*
 * XREFs of SepAuditFailed @ 0x14092FD10
 * Callers:
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1404DDA94 (SepRmDispatchDataToLsa.c)
 *     SepAuditFailedRaisedIrql @ 0x140533030 (SepAuditFailedRaisedIrql.c)
 *     SepInitProcessAuditSd @ 0x14063AA70 (SepInitProcessAuditSd.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408127E0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1408129B0 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140812B38 (SeAuditSystemTimeChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140813228 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140813DA0 (NtDeleteObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     SeAuditProcessCreation @ 0x140983DEC (SeAuditProcessCreation.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409F51E0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1409F7550 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1409F8190 (NtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409F8930 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1409F8EF4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409F9DCC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409FA180 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A651E0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     NtCloseObjectAuditAlarm @ 0x140A97170 (NtCloseObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140B4FC88 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x140725230 (ZwFlushKey.c)
 *     SepAdtLogAuditFailureEvent @ 0x140812DF4 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  DestinationString = 0LL;
  v1 = a1;
  if ( BYTE4(RtlpBootStatHandleLock.QueuedScb) )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      Data = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &Data, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    BYTE4(RtlpBootStatHandleLock.QueuedScb) = 0;
  }
}
