/*
 * XREFs of ZwChangeThreadState @ 0x1407292E0
 * Callers:
 *     DifZwChangeThreadStateWrapper @ 0x1406A0B40 (DifZwChangeThreadStateWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwChangeThreadState(
        HANDLE ThreadStateChangeHandle,
        HANDLE ThreadHandle,
        THREAD_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadStateChangeHandle);
}
