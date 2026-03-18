/*
 * XREFs of VidSchiUnlinkCrossAdapterSyncObjects @ 0x1400557C0
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUnlinkCrossAdapterSyncObjects(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi
  KSPIN_LOCK *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v8; // [rsp+38h] [rbp-20h] BYREF

  v1 = (_QWORD *)(a1 + 1992);
  memset(&v8, 0, sizeof(v8));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3432), &v8);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v3 = i - 6;
    if ( *(i - 6) )
    {
      v4 = (KSPIN_LOCK *)(i[2] + 8LL);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v4, &LockHandle);
      v5 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)*(i - 5), (_QWORD *)*v6 != v3) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *v3 = 0LL;
      *(i - 5) = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&v8);
}
