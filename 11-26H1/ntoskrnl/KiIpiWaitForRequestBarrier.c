/*
 * XREFs of KiIpiWaitForRequestBarrier @ 0x140252F00
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140252950 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiWaitForRequestBarrier(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // ebx
  __int64 j; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  result = *(unsigned int *)(a1 + 11648);
  for ( i = 0; (_DWORD)result; result = *(unsigned int *)(a1 + 11648) )
  {
    if ( (++i & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
    {
      if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
      {
LABEL_15:
        HvlNotifyLongSpinWait(i);
        continue;
      }
      for ( j = 0LL; (unsigned int)j < (unsigned int)KeNumberProcessors_0; j = (unsigned int)(j + 1) )
      {
        v5 = KiProcessorBlock[j];
        if ( (*(_BYTE *)(v5 + 35) & 1) != 0 )
        {
          v6 = *(_QWORD *)(v5 + 36600);
          if ( !v6 || !*(_BYTE *)(v6 + 65) || !*(_BYTE *)(v6 + 64) )
            goto LABEL_15;
        }
      }
    }
    _mm_pause();
  }
  return result;
}
