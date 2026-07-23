/*
 * XREFs of RtlCreateAcl @ 0x180047A70
 * Callers:
 *     RtlpCreateServerAcl @ 0x18004556C (RtlpCreateServerAcl.c)
 *     RtlpComputeMergedAcl2 @ 0x180045948 (RtlpComputeMergedAcl2.c)
 *     RtlDefaultNpAcl @ 0x180045C90 (RtlDefaultNpAcl.c)
 *     RtlpCombineAcls @ 0x180048430 (RtlpCombineAcls.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C556C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateAndSetSD @ 0x1800C5F30 (RtlCreateAndSetSD.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124828 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  NTSTATUS result; // eax

  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  Acl->AclRevision = AclRevision;
  result = 0;
  Acl->Sbz1 = 0;
  *(_DWORD *)&Acl->AceCount = 0;
  Acl->AclSize = AclLength & 0xFFFC;
  return result;
}
