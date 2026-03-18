/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x14043BA94
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     ExpFindCurrentThread @ 0x14043B900 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x14043BA34 (ExpFindEmptyEntry.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  _DWORD *v2; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  _DWORD *Pool2; // rsi

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v6 = v5 + 4;
    if ( v5 + 4 < v5 || 16 * (unsigned __int64)v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    v6 = 3;
  }
  KeReleaseInStackQueuedSpinLock(a2);
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(Pool2, v2, 16LL * v5);
      Pool2[2] = v6;
      *(_QWORD *)(a1 + 16) = Pool2;
      KeReleaseInStackQueuedSpinLock(a2);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( !v5 )
        LOBYTE(v5) = 1;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(a2);
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
  }
  KeGetCurrentThread()->ResourceIndex = v5;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), a2);
}
