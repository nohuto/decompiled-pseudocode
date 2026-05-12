/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x14000FB18
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x14000FD40 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerNotRequiredStep2Passive @ 0x140081D10 (StorPortAdapterPowerNotRequiredStep2Passive.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  int v7; // r8d
  NTSTATUS v8; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = *((_QWORD *)Context + 628);
  v3 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 || *((_DWORD *)Context + 87) != 1 )
  {
LABEL_6:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v4 = *((_QWORD *)Context + 628);
    *((_QWORD *)Context + 664) = MEMORY[0xFFFFF78000000008];
    v5 = *(_DWORD *)(v4 + 20);
    if ( (*((_BYTE *)Context + 108) & 1) != 0 )
    {
      *(_DWORD *)(v4 + 20) = v5 | 8;
      if ( !*((_QWORD *)Context + 663) )
        *((_QWORD *)Context + 663) = *((_QWORD *)Context + 664);
    }
    else
    {
      *(_DWORD *)(v4 + 20) = v5 & 0xFFFFFFF7;
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 628));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140173442 & 0x10) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(
          v6,
          (unsigned int)&EventAdapterPowerNotRequiredStop,
          v7,
          **((_QWORD **)Context + 628),
          *((_DWORD *)Context + 14),
          v3);
    }
    return;
  }
  if ( *(char *)(v2 + 20) >= 0 || (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 0x800) == 0 )
  {
LABEL_4:
    v3 = 0;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           StorPortAdapterPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 107) |= 4u;
      v3 = 1;
    }
    goto LABEL_6;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v8 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           StorPortAdapterPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 628) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
    if ( v8 == 259 )
      *(_DWORD *)(*((_QWORD *)Context + 628) + 20LL) |= 0x40u;
    goto LABEL_4;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1440, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 718),
      StorPortAdapterPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
