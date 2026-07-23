/*
 * XREFs of ZwOpenThreadToken @ 0x140728440
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x1406B1820 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
