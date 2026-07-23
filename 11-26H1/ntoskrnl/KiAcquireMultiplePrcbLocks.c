/*
 * XREFs of KiAcquireMultiplePrcbLocks @ 0x140331520
 * Callers:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireMultiplePrcbLocks(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9

  if ( a2 )
  {
    v3 = a2;
    while ( 1 )
    {
      v4 = *a1;
      v5 = 0;
LABEL_4:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
        break;
      ++a1;
      if ( !--v3 )
        return result;
    }
    while ( 1 )
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_20:
          HvlNotifyLongSpinWait(v5);
          goto LABEL_9;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v8 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v8 + 35) & 1) != 0 )
          {
            v9 = *(_QWORD *)(v8 + 36600);
            if ( !v9 || !*(_BYTE *)(v9 + 65) || !*(_BYTE *)(v9 + 64) )
              goto LABEL_20;
          }
        }
      }
      _mm_pause();
LABEL_9:
      result = *(_QWORD *)(v4 + 48);
      if ( !result )
        goto LABEL_4;
    }
  }
  return result;
}
