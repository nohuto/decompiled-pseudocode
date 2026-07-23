/*
 * XREFs of HalpTimerNotifyProcessorFreeze @ 0x14057A050
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1403128B0 (HalpTimerResetProfileAdjustment.c)
 */

char __fastcall HalpTimerNotifyProcessorFreeze(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = a2;
  if ( (_BYTE)a1 )
  {
    _InterlockedIncrement(&HalpTimerProcessorsFrozen);
    return HalpTimerResetProfileAdjustment(a1, a2, a3);
  }
  else
  {
    _InterlockedAdd(&HalpTimerProcessorsFrozen, 0xFFFFFFFF);
    if ( (_BYTE)a2 )
    {
      result = HalpSystemHardwareLock;
      if ( HalpSystemHardwareLock == KeGetPcr()->Prcb.Number )
        _InterlockedExchange(&HalpSystemHardwareLock, -1);
    }
  }
  return result;
}
