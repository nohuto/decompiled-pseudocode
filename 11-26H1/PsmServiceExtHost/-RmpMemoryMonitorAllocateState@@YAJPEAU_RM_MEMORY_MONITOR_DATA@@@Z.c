/*
 * XREFs of ?RmpMemoryMonitorAllocateState@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x18006CD34
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18007FEE4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpSystemGetHighCommitEvent@@YAJPEAPEAX@Z @ 0x18006CDFC (-RmpSystemGetHighCommitEvent@@YAJPEAPEAX@Z.c)
 */

signed int __fastcall RmpMemoryMonitorAllocateState(void **a1)
{
  signed int result; // eax
  unsigned int i; // ebx
  HANDLE EventW; // rax

  result = RmpSystemGetHighCommitEvent(a1 + 1);
  if ( result >= 0 )
  {
    for ( i = 1; i < 6; ++i )
    {
      EventW = CreateEventW(0LL, 0, 0, 0LL);
      a1[i + 1] = EventW;
      if ( !EventW )
      {
        if ( (int)GetLastError() > 0 )
          return (unsigned __int16)GetLastError() | 0xC0070000;
        else
          return GetLastError();
      }
    }
    result = TpAllocTimer(a1 + 8, RmpMemoryMonitorTimerCallback, a1, 0LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
