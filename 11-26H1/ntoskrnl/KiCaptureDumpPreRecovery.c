/*
 * XREFs of KiCaptureDumpPreRecovery @ 0x1405FC928
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoCapturePristineTriageDump @ 0x1405C8AB8 (IoCapturePristineTriageDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v2 = *(_QWORD *)&KsepShimDbLock.SuspendEvent.Header.Lock == 0LL;
  *a2 = 0;
  if ( !v2 && (KsepShimDbLock.SchedulerApcFill5[76] & 0xF) != 1 )
    return IoCapturePristineTriageDump(
             KiBugCheckData,
             qword_140F4B108,
             xmmword_140F4B110,
             *((__int64 *)&xmmword_140F4B110 + 1),
             qword_140F4B120,
             KiDpcWatchdogConfigurationLock.CycleTime,
             *(__int64 *)&KiDpcWatchdogConfigurationLock.CurrentRunTime,
             KiDpcWatchdogConfigurationLock.KernelStack == 0LL);
  LODWORD(v5) = 0;
  if ( CrashdmpDumpBlock )
  {
    if ( qword_140E66020 )
    {
      guard_dispatch_icall_no_overrides(6LL, &v5);
      if ( (int)v5 >= 0 )
      {
        *a2 = 1;
        return IoCapturePristineTriageDump(
                 KiBugCheckData,
                 qword_140F4B108,
                 xmmword_140F4B110,
                 *((__int64 *)&xmmword_140F4B110 + 1),
                 qword_140F4B120,
                 KiDpcWatchdogConfigurationLock.CycleTime,
                 *(__int64 *)&KiDpcWatchdogConfigurationLock.CurrentRunTime,
                 KiDpcWatchdogConfigurationLock.KernelStack == 0LL);
      }
    }
  }
  return 3221225473LL;
}
