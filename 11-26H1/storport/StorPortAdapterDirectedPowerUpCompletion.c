/*
 * XREFs of StorPortAdapterDirectedPowerUpCompletion @ 0x1400819B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x14005C714 (RaidAdapterCancelWaitWakeIrp.c)
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortAdapterDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 628);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp((__int64)Context);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 628));
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
  {
    v9 = 1;
    v8 = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(v6, &EventAdapterDirectedPowerUpStop, v7, **((_QWORD **)Context + 628), v8, v9);
  }
  if ( *((char **)Context + 726) == Context + 5808 )
    Context[109] &= ~0x40u;
  else
    RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
}
