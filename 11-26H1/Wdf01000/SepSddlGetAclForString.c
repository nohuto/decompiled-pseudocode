/*
 * XREFs of SepSddlGetAclForString @ 0x1400DAB3C
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1400DAA50 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1400DA94C (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1400DAEAC (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1400DAF80 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1400DB01C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *AclString, _ACL **Acl, wchar_t **End)
{
  wchar_t *v5; // rsi
  unsigned int SidForString; // edi
  unsigned int v7; // ebx
  wchar_t *v8; // rax
  __int64 v10; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rcx
  int i; // r8d
  unsigned int v14; // edx
  _ACL *v15; // rax
  unsigned int v16; // r12d
  _ACL *PoolWithTag; // rax
  _ACL *v18; // r14
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  ACCESS_MASK v21; // r13d
  const wchar_t *v22; // rbx
  wchar_t *j; // rbx
  wchar_t *v24; // rbx
  __int64 v25; // rcx
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  wchar_t *v28; // rsi
  unsigned int v29; // ebx
  _ACL *v30; // rcx
  wchar_t *MaskEnd; // [rsp+40h] [rbp-18h] BYREF
  void *SidPtr; // [rsp+48h] [rbp-10h] BYREF
  wchar_t *EndLocation; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+50h]
  unsigned int AccessMask; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int AclUsed; // [rsp+B8h] [rbp+60h] BYREF

  *Acl = 0LL;
  v5 = AclString;
  AccessMask = 0;
  SidForString = 0;
  MaskEnd = 0LL;
  SidPtr = 0LL;
  v7 = 0;
  v8 = wcschr(AclString, 0x3Au);
  *End = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v11 = v8 - 1;
  }
  else
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = &v5[v10];
  }
  *End = v11;
  v12 = v5;
  for ( i = 0; v12 < v11; ++v12 )
  {
    if ( *v12 == 59 )
    {
      ++v7;
    }
    else if ( *v12 != 32 )
    {
      i = 1;
    }
  }
  v14 = v7 / 5;
  LODWORD(EndLocation) = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( v14 )
  {
    v16 = 48 * v14 + 8;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
    *Acl = PoolWithTag;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      AclUsed = 8;
      memset(PoolWithTag, 0, v16);
      *(_WORD *)&v18->AclRevision = 2;
      v18->AclSize = v16;
      v19 = 0;
      v20 = (unsigned int)EndLocation;
      *(_DWORD *)&v18->AceCount = 0;
      v34 = 0;
      while ( v19 < v20 )
      {
        v21 = 0;
        LODWORD(EndLocation) = 0;
        while ( *v5 == 32 )
          ++v5;
        v22 = v5 + 1;
        if ( *v5 != 40 )
          v22 = v5;
        while ( *v22 == 32 )
          ++v22;
        if ( _wcsnicmp(v22, L"A", 1uLL) )
          goto LABEL_68;
        for ( j = (wchar_t *)(v22 + 2); *j == 32; ++j )
          ;
        if ( *j != 59 )
        {
LABEL_68:
          SidForString = -1073741811;
LABEL_69:
          v30 = *Acl;
LABEL_71:
          ExFreePoolWithTag(v30, 0);
          *Acl = 0LL;
          return SidForString;
        }
        do
          ++j;
        while ( *j == 32 );
        while ( *j != 59 )
        {
          for ( ; *j == 32; ++j )
            ;
          if ( SepSddlLookupAccessMaskInTable(j, &AccessMask, &MaskEnd) )
          {
            v21 |= AccessMask;
            j = MaskEnd;
            LODWORD(EndLocation) = v21;
          }
          else
          {
            SepSddlParseWideStringUlong(j, (const wchar_t **)&MaskEnd, (unsigned int *)&EndLocation);
            if ( MaskEnd == j )
              goto LABEL_68;
            j = MaskEnd;
            v21 = (unsigned int)EndLocation;
          }
        }
        v24 = j + 1;
        v25 = 2LL;
        do
        {
          while ( *v24 == 32 )
            ++v24;
          if ( *v24 != 59 )
            SidForString = -1073741811;
          ++v24;
          --v25;
        }
        while ( v25 );
        if ( SidForString )
          goto LABEL_69;
        while ( *v24 == 32 )
          ++v24;
        EndLocation = 0LL;
        SidForString = SepSddlGetSidForString(v24, &SidPtr, &EndLocation);
        if ( SidForString )
          break;
        v28 = EndLocation;
        if ( !EndLocation )
          goto LABEL_59;
        while ( *v28 == 32 )
          ++v28;
        if ( *v28 != 41 )
        {
LABEL_59:
          SidForString = -1073741705;
          goto LABEL_69;
        }
        v5 = v28 + 1;
        v29 = v34;
        if ( SidPtr )
        {
          SidForString = SepSddlAddAceToAcl(Acl, &AclUsed, v26, v27, v21, v20 - v34, SidPtr);
          if ( SidForString )
            goto LABEL_69;
        }
        if ( *v5 == 40 )
          ++v5;
        v19 = v29 + 1;
        v34 = v19;
      }
      v30 = *Acl;
      if ( SidForString )
        goto LABEL_71;
      v30->AclSize = AclUsed;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v15 = (_ACL *)ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
  *Acl = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  *v15 = (_ACL)524290LL;
  return SidForString;
}
