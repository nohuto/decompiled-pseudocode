/*
 * XREFs of ZwUnloadDriver @ 0x140726F30
 * Callers:
 *     DifZwUnloadDriverWrapper @ 0x1406BDF90 (DifZwUnloadDriverWrapper.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     EtwpDisableKernelTrace @ 0x14095A8C0 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B11B94 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}
