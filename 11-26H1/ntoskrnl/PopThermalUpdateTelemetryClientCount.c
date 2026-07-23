/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x14060A834
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407CD8A0 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x1407CDE7C (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x1407CE0C0 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x1407CE88C (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1407CEB98 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CEE54 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneAdd @ 0x1407D4EA0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x1407D5000 (PopThermalZoneRemove.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalUpdateTelemetryClientCount(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalTelemetryLock, a2, a3, a4);
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v6[0] = 0LL;
      v6[1] = -1LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v6);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopThermalTelemetryLock);
}
