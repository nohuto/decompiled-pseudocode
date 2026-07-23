/*
 * XREFs of ZwRaiseHardError @ 0x14069DFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ErrorStatus);
}
