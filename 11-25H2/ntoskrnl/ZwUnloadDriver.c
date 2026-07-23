/*
 * XREFs of ZwUnloadDriver @ 0x14069EC60
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x14063D930 (DifZwUnloadDriverWrapper.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1408D9CA0 (EtwpUpdateFileInfoDriverState.c)
 *     EtwpDisableKernelTrace @ 0x1408DA7E0 (EtwpDisableKernelTrace.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
