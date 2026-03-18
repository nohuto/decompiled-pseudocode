/*
 * XREFs of PopFxRequestWorkerInternal @ 0x1403B1FE4
 * Callers:
 *     PopFxRequestWorker @ 0x140605A30 (PopFxRequestWorker.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140382070 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 */

char __fastcall PopFxRequestWorkerInternal(__int64 a1, char a2)
{
  struct _KSEMAPHORE *p_Process; // rbx
  signed __int32 v4; // eax
  __int64 v5; // rsi

  if ( a1 )
  {
    p_Process = (struct _KSEMAPHORE *)(a1 + 120);
  }
  else
  {
    p_Process = (struct _KSEMAPHORE *)&unk_140F12260;
    if ( (a2 & 1) != 0 )
      p_Process = (struct _KSEMAPHORE *)&stru_140F12420.Process;
  }
  LOBYTE(v4) = KeReleaseSemaphore(p_Process + 2, 0, 1, 0);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v5 = 0LL;
    do
    {
      _m_prefetchw(&p_Process[3]);
      v4 = _InterlockedOr(&p_Process[3].Header.Lock, 1 << v5);
      if ( ((1 << v5) & v4) == 0 )
      {
        LOBYTE(v4) = ExTryQueueWorkItem((_QWORD *)&p_Process[v5 + 3].Header.WaitListHead.Blink + (unsigned int)v5, 48LL);
        if ( (_BYTE)v4 )
          return v4;
        _InterlockedAnd(&p_Process[3].Header.Lock, ~(1 << v5));
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 4 );
  }
  return v4;
}
