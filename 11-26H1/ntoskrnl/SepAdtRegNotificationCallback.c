/*
 * XREFs of SepAdtRegNotificationCallback @ 0x14081E1C0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtInitializeBounds @ 0x14081DFD8 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x14081E05C (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14081E0BC (SepAdtInitializePrivilegeAuditing.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
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
