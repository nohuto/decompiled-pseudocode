/*
 * XREFs of SepAdtRegNotificationCallback @ 0x140817FB0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtInitializeBounds @ 0x140817DC8 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140817E4C (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140817EAC (SepAdtInitializePrivilegeAuditing.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 */

__int64 SepAdtRegNotificationCallback()
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  LODWORD(Length) = 0;
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
