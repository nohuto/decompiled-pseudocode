/*
 * XREFs of MiNotifyMemoryChange @ 0x14086D084
 * Callers:
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

LONG __fastcall MiNotifyMemoryChange(__int64 a1)
{
  LONG result; // eax

  result = *(_DWORD *)(a1 + 40);
  if ( (result & 2) == 0 )
  {
    if ( stru_140E2EC68.Header.SignalState
      && ((unsigned __int8)MiFlags & 0x30u) >= 0x20
      && (*(_DWORD *)(a1 + 40) & 0x10) == 0 )
    {
      ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    return KePulseEvent((PRKEVENT)stru_140E37F48.FirstArgument, 0, 0);
  }
  return result;
}
