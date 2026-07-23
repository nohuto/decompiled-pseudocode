/*
 * XREFs of ZwOpenThreadToken @ 0x14069B5C0
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x140636D20 (DifZwOpenThreadTokenWrapper.c)
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
