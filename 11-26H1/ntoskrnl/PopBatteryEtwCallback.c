/*
 * XREFs of PopBatteryEtwCallback @ 0x140B524E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1404E9624 (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        struct _KLOCK_ENTRIES *MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode == 2 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, ControlCode, Level, MatchAnyKeyword);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
  }
}
