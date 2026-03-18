/*
 * XREFs of ZwMakeTemporaryObject @ 0x140725710
 * Callers:
 *     PiDrvDbUnregisterNode @ 0x1407B8420 (PiDrvDbUnregisterNode.c)
 *     NtCreateCpuPartition @ 0x1407F18E0 (NtCreateCpuPartition.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140B39700 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(Handle, v1);
}
