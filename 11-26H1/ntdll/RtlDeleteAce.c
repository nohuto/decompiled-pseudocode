/*
 * XREFs of RtlDeleteAce @ 0x1800E9120
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlpDeleteData @ 0x1800E91B8 (RtlpDeleteData.c)
 */

NTSTATUS __cdecl RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  __int64 v2; // rdi
  unsigned int AceCount; // edx
  PACL v5; // rcx
  PACL v6; // r8
  ACL *v7; // r10
  unsigned int i; // r9d
  __int64 v9; // rdx

  v2 = AceIndex;
  if ( !RtlValidAcl(Acl) )
    return -1073741811;
  AceCount = Acl->AceCount;
  if ( (unsigned int)v2 >= AceCount )
    return -1073741811;
  v5 = Acl + 1;
  v6 = Acl + 1;
  v7 = (PACL)((char *)Acl + Acl->AclSize);
  for ( i = 0; i < AceCount; ++i )
  {
    if ( v6 >= v7 )
      return -1073741811;
    v6 = (PACL)((char *)v6 + v6->AclSize);
  }
  if ( v6 > v7 )
    LODWORD(v6) = 0;
  if ( (_DWORD)v2 )
  {
    v9 = v2;
    do
    {
      v5 = (PACL)((char *)v5 + v5->AclSize);
      --v9;
    }
    while ( v9 );
  }
  RtlpDeleteData(v5, v5->AclSize, (unsigned int)((_DWORD)v6 - (_DWORD)v5));
  --Acl->AceCount;
  return 0;
}
