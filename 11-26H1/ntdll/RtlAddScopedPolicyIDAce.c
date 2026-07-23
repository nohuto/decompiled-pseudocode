/*
 * XREFs of RtlAddScopedPolicyIDAce @ 0x18013E7E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C6480 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800C7650 (RtlFirstFreeAce.c)
 */

NTSTATUS __cdecl RtlAddScopedPolicyIDAce(PACL Acl, ULONG AceRevision, ULONG AceFlags, ULONG AccessMask, PSID Sid)
{
  NTSTATUS result; // eax
  int v10; // ecx
  unsigned __int8 AclRevision; // si
  char *v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int8 v14; // cl
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  FirstFree = 0LL;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2);
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - 4352;
  if ( v10 )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || AccessMask )
    return -1073741811;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v12 = (char *)FirstFree;
  v13 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v13;
  v12[1] = AceFlags;
  *v12 = 19;
  *((_DWORD *)v12 + 1) = 0;
  RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v12 + 8, Sid);
  ++Acl->AceCount;
  v14 = AclRevision;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    v14 = AceRevision;
  result = 0;
  Acl->AclRevision = v14;
  return result;
}
