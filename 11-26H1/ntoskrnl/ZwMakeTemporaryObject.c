/*
 * XREFs of ZwMakeTemporaryObject @ 0x14072A2E0
 * Callers:
 *     PiDrvDbUnregisterNode @ 0x1407BB480 (PiDrvDbUnregisterNode.c)
 *     NtCreateCpuPartition @ 0x1407F7440 (NtCreateCpuPartition.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140B3B910 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
