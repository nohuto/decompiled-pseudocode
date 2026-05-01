/*
 * XREFs of ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18005BAF8
 * Callers:
 *     ?RmpMemoryMonitorOnSystemStateChanged@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_STATE_CHANGE@@@Z @ 0x18006DD1C (-RmpMemoryMonitorOnSystemStateChanged@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_STATE_CHANGE@@.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18008A7BC (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpMemoryMonitorGetIdealTimerState(char a1)
{
  if ( (a1 & 1) != 0 )
    return 0LL;
  else
    return (unsigned int)((a1 & 2) != 0) + 1;
}
