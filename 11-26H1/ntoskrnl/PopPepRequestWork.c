/*
 * XREFs of PopPepRequestWork @ 0x1403B14B8
 * Callers:
 *     PopPepProcessEvent @ 0x1403AFCF0 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1403B37EC (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x1403B755C (PopPepSurprisePowerOn.c)
 *     PopPepIdleTimeoutRoutine @ 0x140483A70 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetWakeHint @ 0x1404F524C (PopPepComponentSetWakeHint.c)
 *     PopPepCompleteComponentIdleState @ 0x140506C08 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x140611524 (PopPepComponentSetResidency.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140382070 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 */

void __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rbp
  struct _KSEMAPHORE *p_Process; // rbx
  __int64 v6; // rsi

  if ( a3 > a2 )
  {
    v3 = a3 - a2;
    if ( v3 )
    {
      v4 = v3;
      p_Process = (struct _KSEMAPHORE *)&unk_140F12260;
      if ( (*(_QWORD *)(a1 + 24) & 0x20LL) != 0 )
        p_Process = (struct _KSEMAPHORE *)&stru_140F12420.Process;
      do
      {
        KeReleaseSemaphore(p_Process + 2, 0, 1, 0);
        v6 = 0LL;
        do
        {
          _m_prefetchw(&p_Process[3]);
          if ( ((1 << v6) & _InterlockedOr(&p_Process[3].Header.Lock, 1 << v6)) == 0 )
          {
            if ( ExTryQueueWorkItem((_QWORD *)&p_Process[v6 + 3].Header.WaitListHead.Blink + (unsigned int)v6, 48LL) )
              break;
            _InterlockedAnd(&p_Process[3].Header.Lock, ~(1 << v6));
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < 4 );
        --v4;
      }
      while ( v4 );
    }
  }
}
