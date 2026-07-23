/*
 * XREFs of ZwPrivilegeCheck @ 0x14069D980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ClientToken);
}
