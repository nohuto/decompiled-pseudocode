/*
 * XREFs of ZwInitializeEnclave @ 0x14072A0A0
 * Callers:
 *     DifZwInitializeEnclaveWrapper @ 0x1406AC220 (DifZwInitializeEnclaveWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
