/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140607C84
 * Callers:
 *     PopAssociatePowerLimitRequest @ 0x1407CA800 (PopAssociatePowerLimitRequest.c)
 *     PopFreePowerLimitRequest @ 0x1407CADDC (PopFreePowerLimitRequest.c)
 *     PopOrphanPowerLimitExtension @ 0x1407CB020 (PopOrphanPowerLimitExtension.c)
 *     PopAssociateThermalRequest @ 0x1407CB7EC (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CBDB4 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneAdd @ 0x1407D1E00 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopThermalUpdateTelemetryClientCount(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  PopAcquireRwLockExclusive((unsigned __int64 *)&unk_140F10E50, a2, a3, a4);
  if ( a1 )
  {
    if ( ++HIDWORD(stru_140F0F620.NpxState) == 1 )
    {
      v6[0] = 0LL;
      v6[1] = -1LL;
      KeSetTimer2((__int64)&stru_140F0F620.PriorityFloorCounts[8], -864000000000LL, 0LL, (__int64)v6);
    }
  }
  else if ( !--HIDWORD(stru_140F0F620.NpxState) )
  {
    KeCancelTimer2((__int64)&stru_140F0F620.PriorityFloorCounts[8]);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&unk_140F10E50);
}
