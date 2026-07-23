/*
 * XREFs of RtlpAddKnownAce @ 0x180027170
 * Callers:
 *     RtlDefaultNpAcl @ 0x180045C90 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C556C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x180105A40 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x180108C10 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180110E90 (RtlAddAccessDeniedAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18013DF60 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18013DFC0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x18013E220 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18013E260 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  unsigned __int8 v10; // al
  unsigned __int8 AclRevision; // di
  PACL v12; // rcx
  unsigned int v13; // edx
  ACL *v14; // r9
  unsigned __int16 v15; // r8
  __int64 result; // rax
  unsigned int v17; // eax

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= v10 )
    AclRevision = v10;
  if ( (a3 & 0xFFFFFFE0) == 0 )
    goto LABEL_7;
  if ( a6 == 2 )
  {
    v17 = a3 & 0xFFFFFF20;
  }
  else
  {
    if ( a6 )
      return 3221225485LL;
    v17 = a3 & 0xFFFFFFC0;
  }
  if ( v17 )
    return 3221225485LL;
LABEL_7:
  if ( !RtlValidAcl(Acl) )
    return 3221225591LL;
  v12 = Acl + 1;
  v13 = 0;
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  while ( v13 < Acl->AceCount )
  {
    if ( v12 >= v14 )
      return 3221225591LL;
    ++v13;
    v12 = (PACL)((char *)v12 + v12->AclSize);
  }
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Sid[1] + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v14 )
    return 3221225625LL;
  v12->AclSize = v15;
  v12->Sbz1 = a3;
  v12->AclRevision = a6;
  *(_DWORD *)&v12->AceCount = a4;
  memmove(&v12[1], Sid, 4LL * Sid[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
