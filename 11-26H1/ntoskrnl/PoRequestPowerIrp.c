/*
 * XREFs of PoRequestPowerIrp @ 0x1404C70C0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
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
           (struct _LIST_ENTRY *)DeviceObject,
           MinorFunction,
           PowerState.SystemState,
           (__int64)CompletionFunction,
           (struct _LIST_ENTRY *)Context,
           0,
           (PIRP)Irp);
}
