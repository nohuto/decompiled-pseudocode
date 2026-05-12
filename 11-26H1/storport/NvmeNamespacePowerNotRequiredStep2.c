/*
 * XREFs of NvmeNamespacePowerNotRequiredStep2 @ 0x1401284CC
 * Callers:
 *     NvmeNamespacePowerNotRequiredStep1 @ 0x140128450 (NvmeNamespacePowerNotRequiredStep1.c)
 *     NvmeNamespacePowerNotRequiredStep2Passive @ 0x1401286F0 (NvmeNamespacePowerNotRequiredStep2Passive.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespacePowerNotRequiredStep2(char *Context)
{
  char *v1; // rsi
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // r8d
  KIRQL CurrentIrql; // al
  __int64 v8; // rcx
  NTSTATUS v9; // r14d
  char *v10; // r14
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = Context + 128;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(*((_QWORD *)Context + 2) + 128LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)Context + 16) + 88LL), &LockHandle);
  v4 = *(_QWORD *)v1;
  v5 = *(_QWORD *)(*(_QWORD *)v1 + 8LL);
  v6 = *(_DWORD *)(v5 + 32);
  if ( (v6 & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 12LL) & 2) != 0 )
  {
    if ( **(_BYTE **)(v3 + 160) == 1 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 96), 0, 1) == 1 )
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v3 + 160) + 8LL), 0LL, 0LL);
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v4 + 72) != 1 )
  {
LABEL_19:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxCompleteDevicePowerNotRequired(**(_QWORD **)(*((_QWORD *)Context + 16) + 8LL));
    return;
  }
  if ( (v6 & 1) == 0 )
  {
    v10 = v1;
LABEL_16:
    v11 = PoRequestPowerIrp(
            *((PDEVICE_OBJECT *)Context + 1),
            2u,
            (POWER_STATE)4,
            (PREQUEST_POWER_COMPLETE)NvmeNamespacePoFxD3Completion,
            Context,
            0LL);
    v12 = *(_QWORD *)v1;
    if ( v11 == 259 )
    {
      *(_DWORD *)(v12 + 80) |= 4u;
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v10 + 184LL), 0);
    }
    else
    {
      ++*(_DWORD *)(v12 + 172);
    }
    goto LABEL_19;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CurrentIrql = KeGetCurrentIrql();
  v8 = *(_QWORD *)v1;
  if ( !CurrentIrql )
  {
    v9 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)NvmeNamespacePoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*(_QWORD *)(v8 + 8) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)v1 + 88LL), &LockHandle);
    if ( v9 != 259 )
      ++*(_DWORD *)(*(_QWORD *)v1 + 176LL);
    if ( v9 < 0 )
      goto LABEL_19;
    v10 = Context + 128;
    goto LABEL_16;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 160), 1, 0) )
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(*(_QWORD *)v1 + 144LL),
      NvmeNamespacePowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
