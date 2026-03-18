/*
 * XREFs of PoCallDriver @ 0x1404D4A70
 * Callers:
 *     IoCheckPagefileDisableReservations @ 0x140795E9C (IoCheckPagefileDisableReservations.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x140C3C260 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
