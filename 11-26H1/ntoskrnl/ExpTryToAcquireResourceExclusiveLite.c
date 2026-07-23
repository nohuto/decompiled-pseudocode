/*
 * XREFs of ExpTryToAcquireResourceExclusiveLite @ 0x1406D2A04
 * Callers:
 *     ExTryToAcquireResourceExclusiveLite @ 0x1406D28E0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExpTryAcquireResourceExclusive @ 0x140205020 (ExpTryAcquireResourceExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14048FAF8 (PerfLogExecutiveResourceAcquire.c)
 */

char __fastcall ExpTryToAcquireResourceExclusiveLite(__int64 a1)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // r12
  int v4; // r15d
  int v5; // ebp
  int v6; // r14d
  char v7; // si
  unsigned int v8; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  v6 = 65537;
  __incgsdword(0x9120u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  v7 = ExpTryAcquireResourceExclusive(a1);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 7 | 8;
    if ( v5 )
      v4 = *(_DWORD *)(a1 + 68);
    LOBYTE(v2) = v5 != 0;
    v6 = 32 * v2 + 65537;
  }
  else if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v8 = *(_DWORD *)(a1 + 56) & 7 | ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
    *(_DWORD *)(a1 + 56) = v8;
    if ( v5 )
    {
      v4 = *(_DWORD *)(a1 + 68);
      v2 = v8 >> 3;
      v6 = 65585;
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
  {
    __incgsdword(0x9124u);
    __incgsdword(0x90A4u);
  }
  if ( v5 )
    PerfLogExecutiveResourceAcquire(v6, a1, v2, v4);
  return v7;
}
