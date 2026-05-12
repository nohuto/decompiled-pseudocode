/*
 * XREFs of StorPortUnitDirectedPowerUpRequestD0 @ 0x1400823C8
 * Callers:
 *     StorPortUnitDirectedPowerUp @ 0x140082200 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005877C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortUnitDirectedPowerUpRequestD0(char *Context)
{
  _QWORD **v2; // r14
  struct _DEVICE_OBJECT **v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-58h]
  PIRP *Irp; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 6, &LockHandle);
  if ( *((_DWORD *)Context + 137) != 1 || (Context[505] & 1) != 0 )
  {
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitDirectedPowerUpCompletion,
           Context,
           0LL) == 259 )
    {
      Context[504] |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 472, 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_QWORD **)(Context + 1872);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)Context + 234) + 36LL), 0, 1) )
    {
      v4 = *((_QWORD *)Context + 3);
      if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
      {
        PoFxIdleComponent(**v2, 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
      }
      if ( *(_QWORD *)(v4 + 5024) )
        RaidAdapterPoFxIdleComponent(v4, 0LL, 0LL);
    }
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_QWORD **)(Context + 1872);
    v3 = (struct _DEVICE_OBJECT **)(Context + 8);
  }
  PoFxReportDevicePoweredOn(**v2);
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
  {
    v6 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = Context[104];
    LODWORD(Contexta) = *(_DWORD *)(v6 + 56);
    McTemplateK0pquuuq_EtwWriteTransfer(
      v6,
      &EventUnitDirectedPowerUpStop,
      v5,
      **v2,
      Contexta,
      Irp,
      Context[105],
      Context[106],
      0);
  }
  if ( *((char **)Context + 437) == Context + 3496 )
    Context[507] &= ~2u;
  else
    RaFlushDFxQueue(*v3);
}
