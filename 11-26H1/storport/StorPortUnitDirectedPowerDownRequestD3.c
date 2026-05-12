/*
 * XREFs of StorPortUnitDirectedPowerDownRequestD3 @ 0x140081FAC
 * Callers:
 *     StorPortUnitDirectedPowerDown @ 0x140081D30 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerDownRequestD3Passive @ 0x1400821E0 (StorPortUnitDirectedPowerDownRequestD3Passive.c)
 * Callees:
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005877C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitDirectedPowerDownRequestD3(PVOID Context)
{
  NTSTATUS v2; // edi
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( *((_DWORD *)Context + 137) == 1 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 1) == 0 )
      goto LABEL_7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( KeGetCurrentIrql() )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 508, 1, 0) )
        IoQueueWorkItem(
          *((PIO_WORKITEM *)Context + 252),
          StorPortUnitDirectedPowerDownRequestD3Passive,
          DelayedWorkQueue,
          Context);
      return;
    }
    v2 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           StorPortUnitPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 234) + 72LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
    if ( v2 >= 0 )
    {
LABEL_7:
      if ( PoRequestPowerIrp(
             *((PDEVICE_OBJECT *)Context + 1),
             2u,
             (POWER_STATE)4,
             (PREQUEST_POWER_COMPLETE)StorPortUnitDirectedPowerDownCompletion,
             Context,
             0LL) == 259 )
      {
        *((_BYTE *)Context + 505) |= 1u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        _InterlockedExchange((volatile __int32 *)Context + 473, 0);
        return;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v3 = *((_QWORD *)Context + 234);
  *((_QWORD *)Context + 277) = MEMORY[0xFFFFF78000000008];
  v4 = *(unsigned int *)(v3 + 32);
  if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) != 0 )
  {
    LODWORD(v4) = v4 | 0x80;
    *(_DWORD *)(v3 + 32) = v4;
    if ( !*((_QWORD *)Context + 276) )
      *((_QWORD *)Context + 276) = *((_QWORD *)Context + 277);
  }
  else
  {
    LODWORD(v4) = v4 & 0xFFFFFF7F;
    *(_DWORD *)(v3 + 32) = v4;
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 234), v4, v3);
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
  {
    v6 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = *((_BYTE *)Context + 104);
    LODWORD(Contexta) = *(_DWORD *)(v6 + 56);
    McTemplateK0pquuuq_EtwWriteTransfer(
      v6,
      &EventUnitDirectedPowerDownStop,
      v5,
      **((_QWORD **)Context + 234),
      Contexta,
      Irp,
      *((_BYTE *)Context + 105),
      *((_BYTE *)Context + 106),
      0);
  }
}
