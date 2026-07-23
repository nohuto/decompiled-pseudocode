/*
 * XREFs of KiQueryQuantumReset @ 0x14023B390
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
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
