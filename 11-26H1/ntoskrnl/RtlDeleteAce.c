/*
 * XREFs of RtlDeleteAce @ 0x140AF4160
 * Callers:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140404F5C (SepRemoveAceFromTokenDefaultDacl.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 */

NTSTATUS __stdcall RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  __int64 v2; // rdi
  unsigned int AceCount; // ecx
  PACL v5; // r9
  PACL v6; // rdx
  ACL *v7; // r10
  unsigned int i; // r8d
  __int64 v9; // rcx
  size_t AclSize; // r8
  unsigned int v11; // edx
  unsigned int v12; // r10d
  UCHAR *v14; // r11
  UCHAR v15; // al
  __int64 v16; // rcx

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
  AclSize = v5->AclSize;
  v11 = (_DWORD)v6 - (_DWORD)v5;
  v12 = v5->AclSize;
  if ( (unsigned int)AclSize < v11 )
  {
    v14 = (UCHAR *)v5 + AclSize;
    do
    {
      v15 = *v14;
      v16 = v12 - (unsigned int)AclSize;
      ++v12;
      ++v14;
      *(&v5->AclRevision + v16) = v15;
    }
    while ( v12 < v11 );
  }
  if ( v11 >= (unsigned int)AclSize )
    memset_0((char *)v5 + v11 - (unsigned int)AclSize, 0, AclSize);
  --Acl->AceCount;
  return 0;
}
