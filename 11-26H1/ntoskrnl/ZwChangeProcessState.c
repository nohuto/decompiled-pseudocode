/*
 * XREFs of ZwChangeProcessState @ 0x1407292C0
 * Callers:
 *     DifZwChangeProcessStateWrapper @ 0x1406A0990 (DifZwChangeProcessStateWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwChangeProcessState(
        HANDLE ProcessStateChangeHandle,
        HANDLE ProcessHandle,
        PROCESS_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessStateChangeHandle);
}
