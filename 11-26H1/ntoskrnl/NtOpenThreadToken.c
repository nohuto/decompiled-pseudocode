/*
 * XREFs of NtOpenThreadToken @ 0x140A47C20
 * Callers:
 *     DifNtOpenThreadTokenWrapper @ 0x14067F440 (DifNtOpenThreadTokenWrapper.c)
 * Callees:
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 */

NTSTATUS __stdcall NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  return NtOpenThreadTokenEx(ThreadHandle, DesiredAccess, OpenAsSelf, 0, TokenHandle);
}
