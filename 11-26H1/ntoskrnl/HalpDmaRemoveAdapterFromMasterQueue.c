/*
 * XREFs of HalpDmaRemoveAdapterFromMasterQueue @ 0x14057B3B4
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelDmaThin @ 0x1404D8330 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14050C960 (HalCancelAdapterChannelDmarThin.c)
 *     HalCancelAdapterChannel @ 0x14058AF80 (HalCancelAdapterChannel.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

char __fastcall HalpDmaRemoveAdapterFromMasterQueue(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // r8
  char v4; // bl
  _QWORD *i; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 128), &LockHandle);
  v3 = (_QWORD *)(v1 + (*(_BYTE *)(a1 + 442) != 0 ? 176LL : 160LL));
  v4 = 0;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (_QWORD *)*i;
    if ( i == (_QWORD *)(a1 + 168) )
    {
      if ( (_QWORD *)v6[1] != i || (v7 = (_QWORD *)i[1], (_QWORD *)*v7 != i) )
        __fastfail(3u);
      *v7 = v6;
      v4 = 1;
      v6[1] = v7;
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
