/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x140901890
 * Callers:
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CCB8D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CCC254 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  NTSTATUS v9; // ebx
  UCHAR v10; // al
  UCHAR AclRevision; // si
  PACL v12; // rcx
  ACL *v13; // r9
  unsigned int i; // edx
  USHORT v15; // r8

  v9 = 0;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  v10 = AceRevision;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= v10 )
    AclRevision = v10;
  if ( (AceFlags & 0xFFFFFFE0) != 0 && (AceFlags & 0xFFFFFFC0) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v12 = Acl + 1;
  v13 = (PACL)((char *)Acl + Acl->AclSize);
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v12 >= v13 )
      return -1073741705;
    v12 = (PACL)((char *)v12 + v12->AclSize);
  }
  if ( v12 > v13 )
    v12 = 0LL;
  v15 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v13 )
    return -1073741671;
  v12->AclSize = v15;
  v12->Sbz1 = AceFlags;
  v12->AclRevision = 0;
  *(_DWORD *)&v12->AceCount = AccessMask;
  memmove(&v12[1], Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  Acl->AclRevision = AclRevision;
  return v9;
}
