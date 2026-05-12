/*
 * XREFs of sub_14012C230 @ 0x14012C230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_14012BFD4 @ 0x14012BFD4 (sub_14012BFD4.c)
 */

void __fastcall sub_14012C230(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS Status; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  char *v9; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( sub_1400F7308((__int64)Context) )
  {
    v9 = Context + 128;
    if ( Status < 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)v9 + 88LL), &LockHandle);
      sub_14012BFD4((__int64)Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    *(_DWORD *)(*(_QWORD *)v9 + 80LL) &= ~4u;
    PoFxCompleteDirectedPowerDown(**(_QWORD **)(*(_QWORD *)v9 + 8LL), v7, v8);
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 41LL) = 1;
    sub_1400F7368((__int64)Context);
  }
}
