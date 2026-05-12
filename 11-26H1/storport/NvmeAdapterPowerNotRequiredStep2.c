/*
 * XREFs of NvmeAdapterPowerNotRequiredStep2 @ 0x1401247B4
 * Callers:
 *     NvmeAdapterPowerNotRequiredStep1 @ 0x140124780 (NvmeAdapterPowerNotRequiredStep1.c)
 *     NvmeAdapterPowerNotRequiredStep2Passive @ 0x1401249A0 (NvmeAdapterPowerNotRequiredStep2Passive.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterPowerNotRequiredStep2(PVOID Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  KIRQL CurrentIrql; // al
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*((_QWORD *)Context + 20) + 120LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *((_QWORD *)Context + 20);
  v4 = *(_QWORD *)(v3 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 2) != 0 || *(_DWORD *)(v3 + 68) != 1 )
  {
LABEL_12:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDevicePowerNotRequired(**(_QWORD **)(*((_QWORD *)Context + 20) + 8LL));
    return;
  }
  if ( (*(_BYTE *)(v4 + 20) & 0x40) == 0 || (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) == 0 )
  {
LABEL_10:
    *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) |= 4u;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)NvmeAdapterPoFxD3Completion,
           Context,
           0LL) != 259 )
    {
      *(_DWORD *)(*((_QWORD *)Context + 20) + 76LL) &= ~4u;
      ++*(_DWORD *)(*((_QWORD *)Context + 20) + 244LL);
    }
    goto LABEL_12;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v6 = *((_QWORD *)Context + 20);
  if ( !CurrentIrql )
  {
    v7 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)NvmeAdapterPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*(_QWORD *)(v6 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 20) + 120LL), &LockHandle);
    v8 = *((_QWORD *)Context + 20);
    if ( v7 == 259 )
      *(_DWORD *)(*(_QWORD *)(v8 + 8) + 20LL) |= 0x20u;
    else
      ++*(_DWORD *)(v8 + 248);
    goto LABEL_10;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 232), 1, 0) )
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(*((_QWORD *)Context + 20) + 216LL),
      NvmeAdapterPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
