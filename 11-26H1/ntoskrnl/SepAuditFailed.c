/*
 * XREFs of SepAuditFailed @ 0x14090B840
 * Callers:
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1404D7174 (SepRmDispatchDataToLsa.c)
 *     SepAuditFailedRaisedIrql @ 0x1405354B0 (SepAuditFailedRaisedIrql.c)
 *     SepInitProcessAuditSd @ 0x14063DADC (SepInitProcessAuditSd.c)
 *     SeAuditFipsCryptoSelftests @ 0x140818640 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x140818810 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140818998 (SeAuditSystemTimeChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140819088 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140819C00 (NtDeleteObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED80 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140A5DD30 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140A60CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140A61470 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A721B0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     NtCloseObjectAuditAlarm @ 0x140A9B2F0 (NtCloseObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140B52518 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x140729E00 (ZwFlushKey.c)
 *     SepAdtLogAuditFailureEvent @ 0x140818C54 (SepAdtLogAuditFailureEvent.c)
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
  if ( *((_BYTE *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 5) )
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
    *((_BYTE *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 5) = 0;
  }
}
