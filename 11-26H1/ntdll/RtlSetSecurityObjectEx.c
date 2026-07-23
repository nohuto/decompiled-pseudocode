/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180110EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 */

NTSTATUS __cdecl RtlSetSecurityObjectEx(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  return RtlpSetSecurityObject(
           0LL,
           SecurityInformation,
           (__int64)ModificationDescriptor,
           ObjectsSecurityDescriptor,
           AutoInheritFlags,
           0,
           (__int64)GenericMapping,
           TokenHandle);
}
