/*
 * XREFs of ZwUnloadDriver @ 0x14072BB00
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x1406C1B70 (DifZwUnloadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     EtwpDisableKernelTrace @ 0x140A00180 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B13914 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
