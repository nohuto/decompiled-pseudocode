/*
 * XREFs of RtlQueryInformationAcl @ 0x1800CA1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  int AclRevision; // ecx
  __int32 v7; // r9d
  PACL v8; // rdx
  unsigned int AceCount; // r8d
  unsigned int v10; // ecx
  ACL *v11; // r11
  NTSTATUS result; // eax

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) > 2u )
    return -1073741811;
  v7 = AclInformationClass - 1;
  if ( !v7 )
  {
    if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  if ( v7 != 1 )
    return -1073741821;
  if ( AclInformationLength < 0xC )
    return -1073741789;
  v8 = Acl + 1;
  AceCount = Acl->AceCount;
  v10 = 0;
  v11 = (PACL)((char *)Acl + Acl->AclSize);
  while ( v10 < AceCount )
  {
    if ( v8 >= v11 )
      return -1073741811;
    ++v10;
    v8 = (PACL)((char *)v8 + v8->AclSize);
  }
  *(_DWORD *)AclInformation = AceCount;
  if ( v8 > v11 )
    v8 = 0LL;
  if ( v8 )
  {
    *((_DWORD *)AclInformation + 1) = (_DWORD)v8 - (_DWORD)Acl;
    *((_DWORD *)AclInformation + 2) = (_DWORD)Acl + Acl->AclSize - (_DWORD)v8;
    return 0;
  }
  *((_DWORD *)AclInformation + 1) = Acl->AclSize;
  result = 0;
  *((_DWORD *)AclInformation + 2) = 0;
  return result;
}
