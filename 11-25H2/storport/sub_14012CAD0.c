/*
 * XREFs of sub_14012CAD0 @ 0x14012CAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_14012BFD4 @ 0x14012BFD4 (sub_14012BFD4.c)
 */

void __fastcall sub_14012CAD0(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // ebp
  __int64 v7; // rsi
  char *v8; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  v7 = *(_QWORD *)(Context[2] + 128LL);
  if ( sub_1400F7308((__int64)Context) )
  {
    v8 = (char *)(Context + 16);
    if ( Status < 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)v8 + 88LL), &LockHandle);
      sub_14012BFD4((__int64)Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    sub_1400F7368((__int64)Context);
    if ( **(_BYTE **)(v7 + 160) == 1
      && _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)v8 + 96LL), 0, 1) == 1 )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v7 + 160) + 8LL), 0LL, 0LL);
    }
    *(_DWORD *)(*(_QWORD *)v8 + 80LL) &= ~4u;
  }
}
