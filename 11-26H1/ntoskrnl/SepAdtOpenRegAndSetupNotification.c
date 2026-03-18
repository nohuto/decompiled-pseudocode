/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140817F0C
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     SepRegOpenKey @ 0x140AB2DF4 (SepRegOpenKey.c)
 */

__int64 SepAdtOpenRegAndSetupNotification()
{
  __int64 result; // rax
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( (int)result >= 0 )
  {
    LODWORD(Length) = 0;
    qword_140E67F78 = (__int64)SepAdtRegNotificationCallback;
    qword_140E67F80 = 0LL;
    SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeMultipleKeys(
             (int)SepAdtRegNotifyHandle,
             0,
             0,
             0,
             (__int64)&SepAdtLsaRegWatchWorkItem,
             1LL,
             &SepAdtIoStatusBlock,
             5,
             0,
             0LL,
             Length,
             1);
  }
  return result;
}
