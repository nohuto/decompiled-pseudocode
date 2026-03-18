/*
 * XREFs of PopNewWakeInfo @ 0x140C09008
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1404F94F8 (PopAcquireWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x1404FE7D4 (PopWakeInfoDereference.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404FF4EC (PopReleaseWakeSourceSpinLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

LONG PopNewWakeInfo()
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v1; // rbx
  LONG result; // eax
  _QWORD *v3; // rcx
  unsigned __int64 **v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = (struct _LIST_ENTRY *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1;
    *(_BYTE *)(Pool2 + 80) = 1;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
    PopAcquireWakeSourceSpinLock(&LockHandle);
    stru_140F11D08.Timer.Header.WaitListHead.Flink = v1;
    if ( LODWORD(stru_140F11D08.Queue) == 1 )
    {
      v3 = *(_QWORD **)&stru_140F11D08.Timer.Header.Lock;
      if ( **(struct _KTHREAD ***)&stru_140F11D08.Timer.Header.Lock != (struct _KTHREAD *)&stru_140F11D08.RelativeTimerBias
        || (v4 = *(unsigned __int64 ***)(*(_QWORD *)&stru_140F11D08.Timer.Header.Lock + 8LL),
            *v4 != *(unsigned __int64 **)&stru_140F11D08.Timer.Header.Lock) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)&stru_140F11D08.Timer.Header.Lock = *(_QWORD *)(*(_QWORD *)&stru_140F11D08.Timer.Header.Lock + 8LL);
      *v4 = &stru_140F11D08.RelativeTimerBias;
      v3[1] = v3;
      *v3 = v3;
      PopWakeInfoDereference((__int64)v3);
      --LODWORD(stru_140F11D08.Queue);
    }
    *(_DWORD *)&stru_140F11D08.WaitBlockFill11[16] = 0;
    PopReleaseWakeSourceSpinLock(&LockHandle);
  }
  result = KeResetEvent((PRKEVENT)&stru_140F11D08.Timer.Processor);
  LODWORD(stru_140F11D08.Timer.TimerListEntry.Blink) = 0;
  return result;
}
