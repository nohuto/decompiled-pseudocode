/*
 * XREFs of ZwMakeTemporaryObject @ 0x14069D460
 * Callers:
 *     PiDrvDbUnregisterNode @ 0x14072DA18 (PiDrvDbUnregisterNode.c)
 *     NtCreateCpuPartition @ 0x140765E10 (NtCreateCpuPartition.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7E994 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140A8B1B0 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
