/*
 * XREFs of ZwAccessCheckByTypeResultList @ 0x140728C40
 * Callers:
 *     DifZwAccessCheckByTypeResultListWrapper @ 0x14069B840 (DifZwAccessCheckByTypeResultListWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAccessCheckByTypeResultList(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeListLength,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SecurityDescriptor);
}
