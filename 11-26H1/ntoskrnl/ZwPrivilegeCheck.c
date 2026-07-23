/*
 * XREFs of ZwPrivilegeCheck @ 0x14072A820
 * Callers:
 *     DifZwPrivilegeCheckWrapper @ 0x1406B2900 (DifZwPrivilegeCheckWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ClientToken);
}
