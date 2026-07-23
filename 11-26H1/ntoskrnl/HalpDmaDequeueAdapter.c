/*
 * XREFs of HalpDmaDequeueAdapter @ 0x14058BA08
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1404374EC (HalpDmaProcessMapRegisterQueueV3.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall HalpDmaDequeueAdapter(__int64 a1, char a2)
{
  _QWORD **v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  if ( a2 )
    v4 = (_QWORD **)(a1 + 176);
  else
    v4 = (_QWORD **)(a1 + 160);
  v5 = *v4;
  if ( *v4 == v4 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v5 - 21;
  }
}
