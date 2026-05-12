/*
 * XREFs of NvmeAdapterDirectedPowerDownRequestD3 @ 0x1401233A0
 * Callers:
 *     NvmeAdapterDirectedPowerDown @ 0x140123300 (NvmeAdapterDirectedPowerDown.c)
 *     NvmeAdapterDirectedPowerDownRequestD3Passive @ 0x1401235B0 (NvmeAdapterDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     NvmeAdapterReleasePoFx @ 0x14003BAD0 (NvmeAdapterReleasePoFx.c)
 */

void __fastcall NvmeAdapterDirectedPowerDownRequestD3(__int64 Context)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  KIRQL CurrentIrql; // al
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(Context + 160) + 120LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = *(_QWORD *)(Context + 160);
  if ( *(_DWORD *)(v3 + 68) != 1 )
  {
LABEL_13:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDirectedPowerDown(**(_QWORD **)(*(_QWORD *)(Context + 160) + 8LL), v9, v10);
    NvmeAdapterReleasePoFx(Context);
    return;
  }
  v4 = *(_QWORD *)(v3 + 8);
  if ( (*(_DWORD *)(v4 + 20) & 0x40) == 0 || (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) == 0 )
  {
LABEL_10:
    *(_DWORD *)(*(_QWORD *)(Context + 160) + 76LL) |= 4u;
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)NvmeAdapterDirectedPowerDownCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ++*(_DWORD *)(*(_QWORD *)(Context + 160) + 268LL);
      return;
    }
    *(_DWORD *)(*(_QWORD *)(Context + 160) + 76LL) &= ~4u;
    ++*(_DWORD *)(*(_QWORD *)(Context + 160) + 244LL);
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v6 = *(_QWORD *)(Context + 160);
  if ( !CurrentIrql )
  {
    v7 = PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           0,
           (POWER_STATE)1,
           NvmeAdapterPoFxWaitWakeCompletion,
           (PVOID)Context,
           (PIRP *)(*(_QWORD *)(v6 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(Context + 160) + 120LL), &LockHandle);
    v8 = *(_QWORD *)(Context + 160);
    if ( v7 == 259 )
      *(_DWORD *)(*(_QWORD *)(v8 + 8) + 20LL) |= 0x20u;
    else
      ++*(_DWORD *)(v8 + 248);
    goto LABEL_10;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 232), 1, 0) )
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(*(_QWORD *)(Context + 160) + 216LL),
      NvmeAdapterDirectedPowerDownRequestD3Passive,
      DelayedWorkQueue,
      (PVOID)Context);
}
