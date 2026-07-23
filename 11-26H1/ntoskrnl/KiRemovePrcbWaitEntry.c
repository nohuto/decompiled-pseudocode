/*
 * XREFs of KiRemovePrcbWaitEntry @ 0x140382CD0
 * Callers:
 *     KiWakePriQueueWaiter @ 0x1403826C0 (KiWakePriQueueWaiter.c)
 *     KiAlertSingleThreadByThreadId @ 0x140382DF0 (KiAlertSingleThreadByThreadId.c)
 *     KeAlertThreadByThreadIdEx @ 0x140383010 (KeAlertThreadByThreadIdEx.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall KiRemovePrcbWaitEntry(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 i; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9

  v1 = a1[89];
  if ( !v1 )
    return;
  v3 = 0;
LABEL_3:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 33744), 0LL) )
  {
    while ( 1 )
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_24:
          HvlNotifyLongSpinWait(v3);
          goto LABEL_12;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v7 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v7 + 35) & 1) != 0 )
          {
            v8 = *(_QWORD *)(v7 + 36600);
            if ( !v8 || !*(_BYTE *)(v8 + 65) || !*(_BYTE *)(v8 + 64) )
              goto LABEL_24;
          }
        }
      }
      _mm_pause();
LABEL_12:
      if ( !*(_QWORD *)(v1 + 33744) )
        goto LABEL_3;
    }
  }
  if ( a1[89] )
  {
    v4 = a1[27];
    v5 = (_QWORD *)a1[28];
    if ( *(_QWORD **)(v4 + 8) != a1 + 27 || (_QWORD *)*v5 != a1 + 27 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    a1[89] = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 33744), 0LL);
}
