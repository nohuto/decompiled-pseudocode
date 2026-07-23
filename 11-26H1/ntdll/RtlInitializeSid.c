/*
 * XREFs of RtlInitializeSid @ 0x1800CB220
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x1800CB848 (WerpAllocateAndInitializeSid.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124828 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
