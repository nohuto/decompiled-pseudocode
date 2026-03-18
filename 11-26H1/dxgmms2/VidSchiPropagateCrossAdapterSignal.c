/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x14003D1DC
 * Callers:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiPropagateCrossAdapterSignal(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD **v7; // rsi
  _QWORD *j; // rdi
  __int64 ***v9; // r14
  __int64 **k; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-40h] BYREF

  if ( a2 )
  {
    v4 = a2[43];
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 8), &LockHandle);
    v5 = (_QWORD **)(a2[43] + 16LL);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( i - 35 != a2 )
        ((void (__fastcall *)(_QWORD, _QWORD *))i[9])(*(i - 34), i - 35);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v12, (unsigned __int64 *)(a1 + 3432), 1, 0);
    v7 = (_QWORD **)(a1 + 1992);
    for ( j = *v7; j != v7; j = (_QWORD *)*j )
    {
      AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)&LockHandle, (unsigned __int64 *)(j[2] + 8LL), 1, 0);
      v9 = (__int64 ***)(j[2] + 16LL);
      for ( k = *v9; k != (__int64 **)v9; k = (__int64 **)*k )
      {
        if ( j - 41 != k - 35 )
          ((void (__fastcall *)(_QWORD, _QWORD))k[9])(*(k - 34), 0LL);
      }
      AcquireSpinLock::Release((AcquireSpinLock *)&LockHandle);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v12);
  }
}
