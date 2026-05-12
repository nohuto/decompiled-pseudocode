/*
 * XREFs of NvmeNamespaceDirectedPowerDownCompletion @ 0x140127950
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceCancelWaitWakeIrp @ 0x1401276F8 (NvmeNamespaceCancelWaitWakeIrp.c)
 */

void __fastcall NvmeNamespaceDirectedPowerDownCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  char *v9; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    v9 = Context + 128;
    if ( Status < 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)v9 + 88LL), &LockHandle);
      NvmeNamespaceCancelWaitWakeIrp((__int64)Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    *(_DWORD *)(*(_QWORD *)v9 + 80LL) &= ~4u;
    PoFxCompleteDirectedPowerDown(**(_QWORD **)(*(_QWORD *)v9 + 8LL), v7, v8);
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) + 41LL) = 1;
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
