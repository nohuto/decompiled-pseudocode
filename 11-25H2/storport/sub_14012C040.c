/*
 * XREFs of sub_14012C040 @ 0x14012C040
 * Callers:
 *     sub_1401085A8 @ 0x1401085A8 (sub_1401085A8.c)
 *     sub_140108958 @ 0x140108958 (sub_140108958.c)
 *     sub_1401A6E7C @ 0x1401A6E7C (sub_1401A6E7C.c)
 * Callees:
 *     sub_14012BFD4 @ 0x14012BFD4 (sub_14012BFD4.c)
 */

void __fastcall sub_14012C040(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rax
  _QWORD *v4; // rbx
  void *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(v1 + 1) == 1 )
  {
    if ( **(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 160LL) == 1
      && _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 96), 0, 1) == 1 )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 160LL) + 8LL), 0LL, 0LL);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 128) + 88LL), &LockHandle);
    sub_14012BFD4(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) = 0;
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 128) + 40LL));
    v3 = *(_QWORD *)(a1 + 128);
    v4 = *(_QWORD **)(v3 + 8);
    *(_QWORD *)(v3 + 8) = 0LL;
    v5 = (void *)v4[7];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x4F506152u);
      v4[7] = 0LL;
      *((_DWORD *)v4 + 12) = 0;
    }
    PoFxUnregisterDevice(*v4);
    ExFreePoolWithTag(v4, 0x4F506152u);
  }
}
