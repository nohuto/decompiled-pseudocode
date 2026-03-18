/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x1404DD6E0
 * Callers:
 *     CcUnregisterExternalCache @ 0x1405B1470 (CcUnregisterExternalCache.c)
 *     CcUnregisterExternalCacheEx @ 0x1405B14B0 (CcUnregisterExternalCacheEx.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x14039B61C (CcPostDeferredWrites.c)
 */

void __fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  _QWORD *v4; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  v4 = (_QWORD *)(v2 + 1104);
  v6 = *((_QWORD *)PspSystemPartition + 1);
  if ( !CcEnablePerVolumeLazyWriter )
    v4 = (_QWORD *)(v6 + 1168);
  if ( a2 )
  {
    do
    {
      v7 = v3;
      if ( v3 > 0xFFFFFFFF )
        v7 = -1;
      v3 -= v7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 < v7 )
        v7 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v8 - v7;
      *(_QWORD *)(v6 + 1056) -= v7;
      if ( v2 )
        *(_QWORD *)(v2 + 992) -= v7;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    while ( v3 );
  }
  if ( (_QWORD *)*v4 != v4 )
    CcPostDeferredWrites(v6, v2);
}
