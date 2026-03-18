/*
 * XREFs of PoRequestPowerIrp @ 0x1404CD690
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x14026FDC4 (PopRequestPowerIrp.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp(
           DeviceObject,
           MinorFunction,
           PowerState.SystemState,
           (__int64)CompletionFunction,
           (__int64)Context,
           0,
           (PIRP)Irp);
}
