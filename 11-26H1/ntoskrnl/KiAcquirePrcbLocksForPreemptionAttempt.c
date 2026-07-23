/*
 * XREFs of KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402309E0
 * Callers:
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x140236B50 (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

_BYTE *__fastcall KiAcquirePrcbLocksForPreemptionAttempt(__int64 a1, int a2, unsigned __int64 *a3)
{
  unsigned int v5; // r8d
  unsigned int v7; // ebx
  __int64 *v8; // r14
  unsigned int v9; // edx
  unsigned __int8 *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned int v13; // esi
  _BYTE *result; // rax
  __int64 i; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = a1;
  v5 = a2;
  v7 = **(unsigned __int8 **)(a1 + 56);
  if ( a2 < (int)(v7 >> 7) )
    v5 = v7 >> 7;
  v8 = 0LL;
  v9 = 0;
  *a3 = (int)v5 ^ (a1 ^ (int)v5) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v5 )
  {
    v8 = &v18;
    v9 = 1;
    goto LABEL_7;
  }
  if ( v5 == 1 )
  {
    v10 = *(unsigned __int8 **)(a1 + 36504);
    v9 = *v10;
    v8 = (__int64 *)(v10 + 8);
  }
  if ( v9 )
  {
LABEL_7:
    v11 = v9;
    while ( 1 )
    {
      v12 = *v8;
      v13 = 0;
LABEL_9:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
        break;
      ++v8;
      if ( !--v11 )
        goto LABEL_11;
    }
    while ( 1 )
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_26:
          HvlNotifyLongSpinWait(v13);
          goto LABEL_15;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v16 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v16 + 35) & 1) != 0 )
          {
            v17 = *(_QWORD *)(v16 + 36600);
            if ( !v17 || !*(_BYTE *)(v17 + 65) || !*(_BYTE *)(v17 + 64) )
              goto LABEL_26;
          }
        }
      }
      _mm_pause();
LABEL_15:
      if ( !*(_QWORD *)(v12 + 48) )
        goto LABEL_9;
    }
  }
LABEL_11:
  result = *(_BYTE **)(a1 + 56);
  if ( ((*result ^ v7) & 0x80u) != 0 )
    return (_BYTE *)KiAcquirePrcbLocksForPreemptionAttemptSlowPath(a1, (unsigned int)a2, a3);
  return result;
}
