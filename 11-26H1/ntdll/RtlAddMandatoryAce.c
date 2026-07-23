/*
 * XREFs of RtlAddMandatoryAce @ 0x1800C62E0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C6480 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  int v10; // ecx
  NTSTATUS result; // eax
  PACL v12; // rdx
  unsigned __int16 v13; // cx
  unsigned __int8 v14; // al
  bool v15; // cc
  unsigned __int8 AclRevision; // si
  ACL *v17; // r8
  unsigned int i; // ecx

  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2);
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - 4096;
  if ( v10 )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  v14 = AceRevision;
  v15 = Acl->AclRevision <= (unsigned __int8)AceRevision;
  AclRevision = Acl->AclRevision;
  if ( v15 )
    AclRevision = v14;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v12 = Acl + 1;
  v17 = (PACL)((char *)Acl + Acl->AclSize);
  for ( i = 0; i < Acl->AceCount; ++i )
  {
    if ( v12 >= v17 )
      return -1073741705;
    v12 = (PACL)((char *)v12 + v12->AclSize);
  }
  if ( v12 > v17 )
    v12 = 0LL;
  v13 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v12 || (PACL)((char *)v12 + v13) > v17 )
    return -1073741671;
  v12->AclSize = v13;
  v12->Sbz1 = AceFlags;
  v12->AclRevision = 17;
  *(_DWORD *)&v12->AceCount = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, &v12[1], Sid);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
