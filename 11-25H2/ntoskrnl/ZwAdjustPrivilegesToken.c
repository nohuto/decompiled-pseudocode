/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14069B960
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x14062F720 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     RtlReleasePrivilege @ 0x1409BE610 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140A26808 (BiAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x140A280B4 (RtlAcquirePrivilege.c)
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
