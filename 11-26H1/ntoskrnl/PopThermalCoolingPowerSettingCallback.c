/*
 * XREFs of PopThermalCoolingPowerSettingCallback @ 0x140424F90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140B418F8 (PopThermalZoneUpdateCoolingPolicy.c)
 */

__int64 __fastcall PopThermalCoolingPowerSettingCallback(_QWORD *a1, unsigned int *a2, int a3)
{
  __int64 v6; // r9
  unsigned int ForegroundLossTime; // eax

  PopAcquireRwLockExclusive(&PopThermalLock);
  v6 = *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_SYSTEM_COOLING_POLICY.Data4 - a1[1];
  if ( !v6 && a3 == 4 )
    PpmIdlePolicyLock.ForegroundLossTime = *a2;
  if ( !*(_DWORD *)&stru_140E67200.WaitBlockFill11[88]
    || !stru_140E67200.WaitBlockFill6[80]
    || (ForegroundLossTime = 1, PopConsoleDisplayState) )
  {
    ForegroundLossTime = PpmIdlePolicyLock.ForegroundLossTime;
  }
  if ( ForegroundLossTime != PopCoolingMode )
  {
    PopCoolingMode = ForegroundLossTime;
    PopThermalZoneUpdateCoolingPolicy();
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopThermalLock);
  return 0LL;
}
