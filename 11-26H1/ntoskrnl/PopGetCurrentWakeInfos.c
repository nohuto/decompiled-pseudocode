/*
 * XREFs of PopGetCurrentWakeInfos @ 0x1404EB95C
 * Callers:
 *     PopGetWakeSource @ 0x140B346F8 (PopGetWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rsi
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  Pool2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  v4 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v6 = PopWakeInfoList;
      while ( (__int64 *)v6 != &PopWakeInfoList && v2 < v4 )
      {
        *(_QWORD *)(Pool2 + 8LL * v2) = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 16));
        v6 = *(_QWORD *)v6;
        ++v2;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v4;
  *a1 = Pool2;
  return result;
}
