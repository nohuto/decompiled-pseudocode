/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x14063E5D0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAccessCheckByTypeResultList(
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
  return SeAccessCheckByType(
           SecurityDescriptor,
           PrincipalSelfSid,
           ClientToken,
           *(struct _KLOCK_ENTRIES **)&DesiredAccess,
           (char *)ObjectTypeList,
           ObjectTypeListLength,
           GenericMapping,
           PrivilegeSet,
           PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           1);
}
