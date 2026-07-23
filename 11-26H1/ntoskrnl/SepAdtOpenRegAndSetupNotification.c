/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x14081E11C
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140CE4BC0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     SepRegOpenKey @ 0x140AB4194 (SepRegOpenKey.c)
 */

NTSTATUS SepAdtOpenRegAndSetupNotification()
{
  NTSTATUS result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140E68230 = (__int64)SepAdtRegNotificationCallback;
    qword_140E68238 = 0LL;
    *(_QWORD *)SepAdtLsaRegWatchWorkItem = 0LL;
    return NtNotifyChangeMultipleKeys(
             SepAdtRegNotifyHandle,
             0,
             0LL,
             0LL,
             SepAdtLsaRegWatchWorkItem,
             (PVOID)1,
             &SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1u);
  }
  return result;
}
