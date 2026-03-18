/*
 * XREFs of KiCaptureDumpPreRecovery @ 0x1405F9F08
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoCapturePristineTriageDump @ 0x1405C61E8 (IoCapturePristineTriageDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v2 = KsepShimDbLock.WaitBlock[2].Object == 0LL;
  *a2 = 0;
  if ( !v2 && (KsepShimDbLock.WaitBlockFill7[136] & 0xF) != 1 )
    return IoCapturePristineTriageDump(
             (int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink,
             (int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink,
             (__int64)KiDpcWatchdogConfigurationLock.SListFaultAddress,
             KiDpcWatchdogConfigurationLock.QuantumTarget,
             (__int64)KiDpcWatchdogConfigurationLock.InitialStack,
             KiCrashDumpContext,
             qword_140F4ADE8,
             qword_140F4ADF0 == 0);
  LODWORD(v5) = 0;
  if ( CrashdmpDumpBlock )
  {
    if ( qword_140E65E80 )
    {
      guard_dispatch_icall_no_overrides(6LL, &v5);
      if ( (int)v5 >= 0 )
      {
        *a2 = 1;
        return IoCapturePristineTriageDump(
                 (int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink,
                 (int)KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink,
                 (__int64)KiDpcWatchdogConfigurationLock.SListFaultAddress,
                 KiDpcWatchdogConfigurationLock.QuantumTarget,
                 (__int64)KiDpcWatchdogConfigurationLock.InitialStack,
                 KiCrashDumpContext,
                 qword_140F4ADE8,
                 qword_140F4ADF0 == 0);
      }
    }
  }
  return 3221225473LL;
}
