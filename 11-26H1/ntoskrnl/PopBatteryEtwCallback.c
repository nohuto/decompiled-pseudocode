/*
 * XREFs of PopBatteryEtwCallback @ 0x140B4FC50
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1404F0044 (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        struct _KLOCK_ENTRIES *MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode == 2 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, ControlCode, Level, MatchAnyKeyword);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock(&stru_140F10070);
  }
}
