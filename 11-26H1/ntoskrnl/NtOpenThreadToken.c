/*
 * XREFs of NtOpenThreadToken @ 0x140A50F10
 * Callers:
 *     DifNtOpenThreadTokenWrapper @ 0x140683020 (DifNtOpenThreadTokenWrapper.c)
 * Callees:
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
