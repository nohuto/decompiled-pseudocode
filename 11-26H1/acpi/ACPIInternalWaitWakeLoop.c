/*
 * XREFs of ACPIInternalWaitWakeLoop @ 0x140061C80
 * Callers:
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x140061C00 (ACPIInternalDeviceClockIrpStartDeviceCompletion.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalWaitWakeLoop(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  if ( IoStatus->Status >= 0 )
    PoRequestPowerIrp(DeviceObject, MinorFunction, PowerState, ACPIInternalWaitWakeLoop, Context, 0LL);
}
