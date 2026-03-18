/*
 * XREFs of ?DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE_DPC@@SAXPEAX@Z @ 0x140054540
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE_DPC::DeferredWorkQueueCallback(PKSPIN_LOCK SpinLock)
{
  PKSPIN_LOCK v2; // rsi
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK v4; // rax
  void (__fastcall *v6)(KSPIN_LOCK *); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *((_BYTE *)SpinLock + 113) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  SpinLock[1] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( *((_DWORD *)SpinLock + 8) )
  {
    v2 = SpinLock + 2;
    do
    {
      v3 = (KSPIN_LOCK *)*v2;
      if ( *(PKSPIN_LOCK *)(*v2 + 8) != v2 || (v4 = *v3, *(KSPIN_LOCK **)(*v3 + 8) != v3) )
        __fastfail(3u);
      *v2 = v4;
      *(_QWORD *)(v4 + 8) = v2;
      SpinLock[1] = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ((void (__fastcall *)(KSPIN_LOCK))v3[2])(v3[3]);
      if ( *((_BYTE *)SpinLock + 112) )
      {
        v6 = (void (__fastcall *)(KSPIN_LOCK *))SpinLock[13];
        if ( v6 )
          v6(v3);
        else
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
      }
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      SpinLock[1] = (KSPIN_LOCK)KeGetCurrentThread();
    }
    while ( (*((_DWORD *)SpinLock + 8))-- != 1 );
  }
  KeSetEvent((PRKEVENT)(SpinLock + 5), 0, 0);
  *((_BYTE *)SpinLock + 113) = 0;
  SpinLock[1] = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
