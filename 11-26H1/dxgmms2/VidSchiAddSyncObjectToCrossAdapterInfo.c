/*
 * XREFs of VidSchiAddSyncObjectToCrossAdapterInfo @ 0x140045FE8
 * Callers:
 *     VidSchCreateSyncObject @ 0x1400CA670 (VidSchCreateSyncObject.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAddSyncObjectToCrossAdapterInfo(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 344) + 8LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 344));
  v3 = (_QWORD *)(a1 + 280);
  v4 = *(_QWORD *)(a1 + 344) + 16LL;
  v5 = *(_QWORD *)v4;
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  *v3 = v5;
  *(_QWORD *)(a1 + 288) = v4;
  *(_QWORD *)(v5 + 8) = v3;
  *(_QWORD *)v4 = v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
