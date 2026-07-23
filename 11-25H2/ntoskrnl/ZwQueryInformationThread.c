/*
 * XREFs of ZwQueryInformationThread @ 0x14069B5E0
 * Callers:
 *     DifZwQueryInformationThreadWrapper @ 0x1406396D0 (DifZwQueryInformationThreadWrapper.c)
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
