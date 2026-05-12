/*
 * XREFs of NvmeNamespaceDirectedPowerDownRequestD3 @ 0x140127A0C
 * Callers:
 *     NvmeNamespaceDirectedPowerDown @ 0x1401278D0 (NvmeNamespaceDirectedPowerDown.c)
 *     NvmeNamespaceDirectedPowerDownRequestD3Passive @ 0x140127BE0 (NvmeNamespaceDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceDirectedPowerDownRequestD3(PVOID Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rax
  KIRQL CurrentIrql; // al
  __int64 v5; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)Context + 16) + 88LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *((_QWORD *)Context + 16);
  if ( *(_DWORD *)(v3 + 72) != 1 )
    goto LABEL_10;
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 32LL) & 1) == 0 )
  {
LABEL_7:
    *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) |= 4u;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)NvmeNamespaceDirectedPowerDownCompletion,
           Context,
           0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 16) + 184LL), 0);
      return;
    }
    *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) &= ~4u;
    ++*(_DWORD *)(*((_QWORD *)Context + 16) + 172LL);
    goto LABEL_10;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v5 = *((_QWORD *)Context + 16);
  if ( !CurrentIrql )
  {
    v6 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           NvmeNamespacePoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*(_QWORD *)(v5 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 16) + 88LL), &LockHandle);
    if ( v6 >= 0 )
      goto LABEL_7;
LABEL_10:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDirectedPowerDown(**(_QWORD **)(*((_QWORD *)Context + 16) + 8LL), v7, v8);
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 160), 1, 0) )
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(*((_QWORD *)Context + 16) + 144LL),
      NvmeNamespaceDirectedPowerDownRequestD3Passive,
      DelayedWorkQueue,
      Context);
}
