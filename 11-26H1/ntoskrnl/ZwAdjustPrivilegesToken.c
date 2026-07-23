/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1407287E0
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x14069C8D0 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     BiAdjustPrivilege @ 0x1409A2E58 (BiAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409A2FF0 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140AEEEDC (RtlReleasePrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
