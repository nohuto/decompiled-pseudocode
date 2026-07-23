/*
 * XREFs of NtUnloadDriver @ 0x140B2CE60
 * Callers:
 *     DifNtUnloadDriverWrapper @ 0x1406939E0 (DifNtUnloadDriverWrapper.c)
 * Callees:
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0LL);
}
