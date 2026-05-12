/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x140046270
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x14005C714 (RaidAdapterCancelWaitWakeIrp.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        __int64 PowerState,
        _BYTE *Context)
{
  __int64 v4; // rdx
  int v6; // ecx
  int v7; // r8d

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 628);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp(Context, v4, PowerState);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 628));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173442 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v6,
        (unsigned int)&EventAdapterPowerRequiredStop,
        v7,
        **((_QWORD **)Context + 628),
        *((_DWORD *)Context + 14),
        1);
  }
}
