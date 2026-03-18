/*
 * XREFs of ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x14003BD40
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1402A1330 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 16);
  v6 = 4024LL * a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + v4 + 936), &LockHandle);
  KeResetEvent(*(PRKEVENT *)(v6 + v4 + 912));
  *(_DWORD *)(v6 + v4 + 920) = a3;
  if ( a3 <= *(_DWORD *)(v6 + v4 + 924) && a3 )
  {
    KeSetEvent(*(PRKEVENT *)(v6 + v4 + 912), 0, 0);
  }
  else if ( !*(_BYTE *)(v6 + v4 + 928) )
  {
    *(_BYTE *)(v6 + v4 + 928) = 1;
    *a4 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
