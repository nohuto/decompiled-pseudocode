/*
 * XREFs of ZwTerminateEnclave @ 0x14072BA00
 * Callers:
 *     DifZwTerminateEnclaveWrapper @ 0x1406C13C0 (DifZwTerminateEnclaveWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BaseAddress);
}
