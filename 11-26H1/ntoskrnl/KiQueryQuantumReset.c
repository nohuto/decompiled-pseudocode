/*
 * XREFs of KiQueryQuantumReset @ 0x140239A30
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KeRemovePriQueue @ 0x1403F5D50 (KeRemovePriQueue.c)
 *     KeSetBasePriorityThread @ 0x140528B30 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052C560 (KeBoostPriorityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiQueryQuantumReset(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = *(unsigned __int8 *)(a1 + 651);
  if ( (KiVelocityFlags & 0x40000) != 0 && KiVariableQuantumEnabled )
  {
    v2 = *(unsigned __int8 *)(a1 + 516);
    if ( v2 == 4 )
    {
      return 36LL;
    }
    else if ( v2 == 7 )
    {
      return 2LL;
    }
    else
    {
      switch ( *(_BYTE *)(a1 + 516) )
      {
        case 0:
        case 3:
          return 36LL;
        case 1:
          result = 18LL;
          break;
        case 2:
        case 5:
        case 6:
          return 2LL;
        default:
          return result;
      }
    }
  }
  return result;
}
