/*
 * XREFs of RtlQueryInformationAcl @ 0x140A73FB0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  int AclRevision; // r10d
  __int32 v6; // r9d
  PACL v7; // rdx
  unsigned int AceCount; // r9d
  unsigned int v9; // r8d
  ACL *v10; // rbx
  NTSTATUS result; // eax

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) > 2u )
    return -1073741811;
  v6 = AclInformationClass - 1;
  if ( !v6 )
  {
    if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  if ( v6 != 1 )
    return -1073741821;
  if ( AclInformationLength < 0xC )
    return -1073741789;
  v7 = Acl + 1;
  AceCount = Acl->AceCount;
  v9 = 0;
  v10 = (PACL)((char *)Acl + Acl->AclSize);
  while ( v9 < AceCount )
  {
    if ( v7 >= v10 )
      return -1073741811;
    ++v9;
    v7 = (PACL)((char *)v7 + v7->AclSize);
  }
  *(_DWORD *)AclInformation = AceCount;
  if ( v7 > v10 )
    v7 = 0LL;
  if ( v7 )
  {
    *((_DWORD *)AclInformation + 1) = (_DWORD)v7 - (_DWORD)Acl;
    *((_DWORD *)AclInformation + 2) = (_DWORD)Acl + Acl->AclSize - (_DWORD)v7;
    return 0;
  }
  *((_DWORD *)AclInformation + 1) = Acl->AclSize;
  result = 0;
  *((_DWORD *)AclInformation + 2) = 0;
  return result;
}
