/*
 * XREFs of MiNotifyMemoryChange @ 0x140866CA4
 * Callers:
 *     MiCompleteMemoryAddition @ 0x140865B8C (MiCompleteMemoryAddition.c)
 *     MiRemovePhysicalMemory @ 0x140866D5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

LONG __fastcall MiNotifyMemoryChange(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 40);
  if ( (result & 2) == 0 )
  {
    if ( stru_140E2EAE8.Header.SignalState
      && ((unsigned __int8)MiFlags & 0x30u) >= 0x20
      && (*(_DWORD *)(a1 + 40) & 0x10) == 0 )
    {
      ZwUpdateWnfStateData((__int64)&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL);
    }
    return KePulseEvent((PRKEVENT)stru_140E37DC8.FirstArgument, 0, 0);
  }
  return result;
}
