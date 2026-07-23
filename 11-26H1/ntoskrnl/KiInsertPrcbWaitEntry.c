/*
 * XREFs of KiInsertPrcbWaitEntry @ 0x14040C950
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiInsertPrcbWaitEntry(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 result; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9

  v4 = 0;
LABEL_2:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 33744), 0LL) )
  {
    while ( 1 )
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_18:
          HvlNotifyLongSpinWait(v4);
          goto LABEL_5;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v9 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v9 + 35) & 1) != 0 )
          {
            v10 = *(_QWORD *)(v9 + 36600);
            if ( !v10 || !*(_BYTE *)(v10 + 65) || !*(_BYTE *)(v10 + 64) )
              goto LABEL_18;
          }
        }
      }
      _mm_pause();
LABEL_5:
      if ( !*(_QWORD *)(a2 + 33744) )
        goto LABEL_2;
    }
  }
  result = a2 + 33728;
  v6 = *(_QWORD **)(a2 + 33736);
  v7 = a1 + 27;
  if ( *v6 != a2 + 33728 )
    __fastfail(3u);
  *v7 = result;
  a1[28] = v6;
  *v6 = v7;
  *(_QWORD *)(a2 + 33736) = v7;
  a1[89] = a2;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 33744), 0LL);
  return result;
}
