/*
 * XREFs of KiAcquirePrcbLock @ 0x14041C280
 * Callers:
 *     KiIdleLoop @ 0x14072D980 (KiIdleLoop.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquirePrcbLock(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 i; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9

  v2 = 0;
LABEL_2:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    while ( 1 )
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_17:
          HvlNotifyLongSpinWait(v2);
          goto LABEL_5;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v5 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v5 + 35) & 1) != 0 )
          {
            v6 = *(_QWORD *)(v5 + 36600);
            if ( !v6 || !*(_BYTE *)(v6 + 65) || !*(_BYTE *)(v6 + 64) )
              goto LABEL_17;
          }
        }
      }
      _mm_pause();
LABEL_5:
      result = *(_QWORD *)(a1 + 48);
      if ( !result )
        goto LABEL_2;
    }
  }
  return result;
}
