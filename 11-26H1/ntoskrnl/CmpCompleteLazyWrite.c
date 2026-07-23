/*
 * XREFs of CmpCompleteLazyWrite @ 0x1404CE15C
 * Callers:
 *     CmpLazyWriteWorker @ 0x1406E6AF0 (CmpLazyWriteWorker.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 */

void __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r14
  KIRQL v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rdi
  ULONG v8; // ebp
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r11

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  if ( !a2 && ((__int64)Timer[2].TimerListEntry.Blink & 7) != 3 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = 1LL;
  if ( a2 )
  {
    v7 = *a2;
  }
  else
  {
    v7 = 20000000LL;
    v8 = 1000;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime >= v10 )
      goto LABEL_5;
    v11 = v10 - UnbiasedInterruptTime;
    if ( v11 <= 0x1312D00 )
      goto LABEL_5;
    v7 = v11;
  }
  v8 = *(_DWORD *)&Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v7, 0, v8, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v6;
  KeReleaseSpinLock(p_QuadPart, v5);
}
