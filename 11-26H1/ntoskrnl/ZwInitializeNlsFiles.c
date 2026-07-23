/*
 * XREFs of ZwInitializeNlsFiles @ 0x14072A0C0
 * Callers:
 *     DifZwInitializeNlsFilesWrapper @ 0x1406AC3D0 (DifZwInitializeNlsFilesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BaseAddress);
}
