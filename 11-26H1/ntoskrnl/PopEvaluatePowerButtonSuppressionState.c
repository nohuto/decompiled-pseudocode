/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x140B31ED4
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x1407CC9E0 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopWnfInSupCallback @ 0x1407D72D0 (PopWnfInSupCallback.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD317C (PopPowerButtonSuppressionInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopRecordSuppressionStates @ 0x14077C208 (PopRecordSuppressionStates.c)
 *     PopTracePowerButtonSuppressionActionUpdate @ 0x140B31FBC (PopTracePowerButtonSuppressionActionUpdate.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  unsigned __int8 Flink; // di
  unsigned int v1; // ebp
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9

  Flink = (unsigned __int8)PopWeakChargerLock.QueueListEntry.Flink;
  v1 = 0;
  v2 = (unsigned __int8)PopWeakChargerLock.QueueListEntry.Flink;
  if ( !BYTE1(PopWeakChargerLock.Spare18) && LOBYTE(PopWeakChargerLock.QueueListEntry.Flink) == 1 )
    v2 = 2;
  if ( LODWORD(PopWeakChargerLock.LastXStateSaveDebugInfo) != v2 )
  {
    LODWORD(PopWeakChargerLock.LastXStateSaveDebugInfo) = v2;
    PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.Process);
    v1 = -1073741822;
    if ( qword_140E675E0 )
      v1 = guard_dispatch_icall_no_overrides(v2, v3);
    _InterlockedIncrement((volatile signed __int32 *)&PopWeakChargerLock.QueueListEntry.Blink);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.Process, v3, v4, v5);
  }
  PopTracePowerButtonSuppressionActionUpdate(
    BYTE1(PopWeakChargerLock.Spare18),
    HIDWORD(PopWeakChargerLock.Spare18),
    PopWeakChargerLock.LastXStateSaveDebugInfo,
    PopWeakChargerLock.QueueListEntry.Flink,
    PopWeakChargerLock.QueueListEntry.Blink);
  PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.Process);
  LOBYTE(v6) = v2;
  PopRecordSuppressionStates(Flink, v6, v7, v8);
  return v1;
}
