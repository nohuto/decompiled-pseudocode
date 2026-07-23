/*
 * XREFs of ZwAccessCheck @ 0x140727FC0
 * Callers:
 *     DifZwAccessCheckWrapper @ 0x14069BC60 (DifZwAccessCheckWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SecurityDescriptor, ClientToken, DesiredAccess, GenericMapping);
}
