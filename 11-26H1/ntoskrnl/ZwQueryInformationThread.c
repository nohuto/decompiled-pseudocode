/*
 * XREFs of ZwQueryInformationThread @ 0x140728460
 * Callers:
 *     DifZwQueryInformationThreadWrapper @ 0x1406B5650 (DifZwQueryInformationThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
