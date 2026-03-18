/*
 * XREFs of PopGetCurrentWakeInfos @ 0x1404F237C
 * Callers:
 *     PopGetWakeSource @ 0x140B322A4 (PopGetWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rsi
  unsigned int Queue; // edi
  __int64 result; // rax
  unsigned __int64 RelativeTimerBias; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  Pool2 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F11D08.Teb, &LockHandle);
  Queue = (unsigned int)stru_140F11D08.Queue;
  if ( LODWORD(stru_140F11D08.Queue) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      RelativeTimerBias = stru_140F11D08.RelativeTimerBias;
      while ( (unsigned __int64 *)RelativeTimerBias != &stru_140F11D08.RelativeTimerBias && v2 < Queue )
      {
        *(_QWORD *)(Pool2 + 8LL * v2) = RelativeTimerBias;
        _InterlockedIncrement((volatile signed __int32 *)(RelativeTimerBias + 16));
        RelativeTimerBias = *(_QWORD *)RelativeTimerBias;
        ++v2;
      }
    }
    else
    {
      Queue = 0;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = Queue;
  *a1 = Pool2;
  return result;
}
