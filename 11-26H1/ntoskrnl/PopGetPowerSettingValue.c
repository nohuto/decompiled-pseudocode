/*
 * XREFs of PopGetPowerSettingValue @ 0x1404CF78C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopScanIdleList @ 0x1404C65A0 (PopScanIdleList.c)
 *     PopBatteryUpdateAlarms @ 0x140943228 (PopBatteryUpdateAlarms.c)
 *     PopEsInStandbyEvaluate @ 0x14094683C (PopEsInStandbyEvaluate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetPowerSettingValue(
        __int64 a1,
        __int64 a2,
        signed int a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 PowerSettingConfiguration; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // edx

  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  if ( (unsigned int)a3 > 1 )
    a3 = dword_140F106CC;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, 0xFFFFFFFFLL);
  v10 = 0;
  if ( PowerSettingConfiguration && (v11 = *(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 4);
    *a6 = v12;
    if ( a5 < v12 )
      v10 = -1073741306;
    else
      memmove(a4, (const void *)(*(_QWORD *)(PowerSettingConfiguration + 8LL * a3 + 64) + 12LL), v12);
  }
  else
  {
    v10 = -1073741811;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  return v10;
}
