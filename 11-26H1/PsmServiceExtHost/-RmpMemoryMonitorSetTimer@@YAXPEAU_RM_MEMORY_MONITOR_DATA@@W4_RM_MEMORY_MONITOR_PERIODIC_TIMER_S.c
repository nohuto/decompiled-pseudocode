/*
 * XREFs of ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18008A75C
 * Callers:
 *     ?RmpMemoryMonitorOnSystemStateChanged@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_STATE_CHANGE@@@Z @ 0x18006DD1C (-RmpMemoryMonitorOnSystemStateChanged@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_STATE_CHANGE@@.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18008A7BC (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorSetTimer(__int64 *a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  if ( (*(_BYTE *)(*a1 + 3224) & 1) == 0 )
  {
    if ( a2 == 1 )
      v4 = 0xFFFFFFFFLL;
    else
      v4 = 1000LL;
    v5 = a1[8];
    v6 = -50000000LL;
    if ( a3 )
      v6 = -10000000LL;
    v7 = v6;
    return TpSetTimer(v5, &v7, 0LL, v4);
  }
  return result;
}
