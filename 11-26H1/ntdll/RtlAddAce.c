/*
 * XREFs of RtlAddAce @ 0x1800269A0
 * Callers:
 *     RtlCreateAndSetSD @ 0x1800C5F30 (RtlCreateAndSetSD.c)
 * Callees:
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  PACL v9; // rax
  ULONG AceCount; // r15d
  ULONG v11; // r11d
  ULONG v12; // r10d
  PACL v13; // r9
  ACL *v14; // rdx
  char *v15; // r10
  unsigned __int8 AclRevision; // r13
  __int64 v17; // r8
  char *v18; // rsi
  int v19; // ecx
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int8 v22; // cl
  char *v23; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v25; // cl
  __int16 v26; // [rsp+20h] [rbp-38h]

  if ( !RtlValidAcl(Acl) )
    return -1073741811;
  v9 = Acl + 1;
  AceCount = Acl->AceCount;
  v11 = 0;
  v12 = 0;
  v13 = Acl + 1;
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  while ( v12 < AceCount )
  {
    if ( v13 >= v14 )
      return -1073741811;
    ++v12;
    v13 = (PACL)((char *)v13 + v13->AclSize);
  }
  v15 = (char *)AceList;
  AclRevision = AceRevision;
  if ( v13 > v14 )
    v13 = 0LL;
  v26 = 0;
  v17 = AceListLength;
  if ( (unsigned __int8)AceRevision <= Acl->AclRevision )
    AclRevision = Acl->AclRevision;
  v18 = (char *)AceList + AceListLength;
  while ( v15 < v18 )
  {
    v25 = *v15;
    if ( (unsigned __int8)*v15 > 3u )
    {
      if ( v25 <= 4u )
      {
        if ( AceRevision < 3 )
          return -1073741811;
      }
      else if ( v25 <= 8u )
      {
        if ( AceRevision < 4 )
          return -1073741811;
      }
      else if ( !*((_WORD *)v15 + 1) )
      {
        return -1073741811;
      }
    }
    v15 += *((unsigned __int16 *)v15 + 1);
    ++v26;
  }
  if ( v15 > v18 )
    return -1073741811;
  if ( !v13 || (PACL)((char *)v13 + AceListLength) > v14 )
    return -1073741789;
  if ( StartingAceIndex )
  {
    do
    {
      if ( v11 >= AceCount )
        break;
      ++v11;
      v9 = (PACL)((char *)v9 + v9->AclSize);
    }
    while ( v11 < StartingAceIndex );
  }
  v19 = (_DWORD)v13 - (_DWORD)v9 - 1;
  v20 = v19;
  if ( v19 >= 0 )
  {
    v21 = v19 + AceListLength;
    do
    {
      v22 = *(&v9->AclRevision + v20--);
      *(&v9->AclRevision + v21) = v22;
      v21 = (unsigned int)(v21 - 1);
    }
    while ( v20 >= 0 );
  }
  if ( AceListLength )
  {
    v23 = (char *)((_BYTE *)AceList - (_BYTE *)v9);
    do
    {
      v9->AclRevision = *(&v9->AclRevision + (_QWORD)v23);
      v9 = (PACL)((char *)v9 + 1);
      --v17;
    }
    while ( v17 );
  }
  Acl->AceCount += v26;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
