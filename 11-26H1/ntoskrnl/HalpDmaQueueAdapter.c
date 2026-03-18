/*
 * XREFs of HalpDmaQueueAdapter @ 0x140589508
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x140359B80 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalAllocateAdapterChannelV2 @ 0x140359DA0 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035A080 (HalBuildScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x14035AD80 (IoFreeAdapterChannelV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14043E70C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall HalpDmaQueueAdapter(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 128), &LockHandle);
  v3 = (_QWORD *)(a1 + 168);
  if ( *(_BYTE *)(a1 + 442) )
    v4 = v1 + 176;
  else
    v4 = v1 + 160;
  v5 = *(_QWORD **)(v4 + 8);
  if ( *v5 != v4 )
    __fastfail(3u);
  *v3 = v4;
  *(_QWORD *)(a1 + 176) = v5;
  *v5 = v3;
  *(_QWORD *)(v4 + 8) = v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
