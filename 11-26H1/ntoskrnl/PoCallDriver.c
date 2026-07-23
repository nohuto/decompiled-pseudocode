/*
 * XREFs of PoCallDriver @ 0x1404CE2E0
 * Callers:
 *     IoCheckPagefileDisableReservations @ 0x1407989CC (IoCheckPagefileDisableReservations.c)
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140C42270 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
