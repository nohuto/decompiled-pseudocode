/*
 * XREFs of StorPortUnitPowerNotRequiredStep2 @ 0x140033AB0
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x140033520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerNotRequiredStep2Passive @ 0x1400826C0 (StorPortUnitPowerNotRequiredStep2Passive.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005877C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2(char *Context)
{
  __int64 v2; // rax
  int v3; // edx
  char v4; // r14
  NTSTATUS v5; // edi
  __int64 v6; // r8
  int v7; // edx
  int v8; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  v2 = *((_QWORD *)Context + 234);
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 1056));
    _interlockedbittestandset((volatile signed __int32 *)Context + 126, 0xDu);
    v4 = 0;
    if ( *(_QWORD *)(*((_QWORD *)Context + 3) + 5024LL)
      && _InterlockedCompareExchange((volatile signed __int32 *)Context + 904, 0, 1) == 1 )
    {
      RaidAdapterPoFxIdleComponent(*((_QWORD *)Context + 3), 0LL, 0LL);
    }
    goto LABEL_14;
  }
  v4 = 0;
  if ( *((_DWORD *)Context + 137) != 1 )
    goto LABEL_14;
  if ( (v3 & 1) == 0 )
    goto LABEL_12;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v5 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           StorPortUnitPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 234) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
    if ( v5 >= 0 )
    {
LABEL_12:
      v4 = 0;
      if ( PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             2u,
             (POWER_STATE)4,
             StorPortUnitPoFxD3Completion,
             Context,
             0LL) == 259 )
      {
        Context[505] |= 1u;
        _InterlockedExchange((volatile __int32 *)Context + 473, 0);
        v4 = 1;
      }
    }
LABEL_14:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v6 = *((_QWORD *)Context + 234);
    *((_QWORD *)Context + 269) = MEMORY[0xFFFFF78000000008];
    v7 = *(_DWORD *)(v6 + 32);
    if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) != 0 )
    {
      *(_DWORD *)(v6 + 32) = v7 | 0x20;
      if ( !*((_QWORD *)Context + 266) )
        *((_QWORD *)Context + 266) = *((_QWORD *)Context + 269);
    }
    else
    {
      *(_DWORD *)(v6 + 32) = v7 & 0xFFFFFFDF;
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 234));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140173442 & 0x10) != 0 )
        McTemplateK0pquuuq_EtwWriteTransfer(
          *((_QWORD *)Context + 3),
          (unsigned int)&EventUnitPowerNotRequiredStop,
          v8,
          **((_QWORD **)Context + 234),
          *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
          Context[104],
          Context[105],
          Context[106],
          v4);
    }
    return;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 508, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 252),
      StorPortUnitPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
