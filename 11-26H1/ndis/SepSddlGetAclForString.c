/*
 * XREFs of SepSddlGetAclForString @ 0x140150C6C
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x140150B80 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 *     SepSddlAddAceToAcl @ 0x140150A7C (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x140150FDC (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1401510B0 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x14015114C (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, const void **a2, wchar_t **a3)
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
  _QWORD *v15; // rax
  unsigned int v16; // r12d
  PVOID PoolWithTag; // rax
  _WORD *v18; // r14
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  ACCESS_MASK AccessMask; // r13d
  const wchar_t *v22; // rbx
  wchar_t *j; // rbx
  wchar_t *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _WORD *v28; // rsi
  unsigned int v29; // ebx
  _WORD *v30; // rcx
  wchar_t *v31; // [rsp+40h] [rbp-18h] BYREF
  PSID Sid; // [rsp+48h] [rbp-10h]
  _WORD *v33; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+50h]
  int v35; // [rsp+B0h] [rbp+58h]
  int v36; // [rsp+B8h] [rbp+60h] BYREF

  *a2 = 0LL;
  v5 = Str1;
  v35 = 0;
  SidForString = 0;
  v31 = 0LL;
  Sid = 0LL;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
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
  *a3 = v11;
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
  LODWORD(v33) = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && i )
    return (unsigned int)-1073741811;
  if ( v14 )
  {
    v16 = 48 * v14 + 8;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
    *a2 = PoolWithTag;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      v36 = 8;
      memset(PoolWithTag, 0, v16);
      *v18 = 2;
      v18[1] = v16;
      v19 = 0;
      v20 = (unsigned int)v33;
      *((_DWORD *)v18 + 1) = 0;
      v34 = 0;
      while ( v19 < v20 )
      {
        AccessMask = 0;
        LODWORD(v33) = 0;
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
          v30 = *a2;
LABEL_71:
          ExFreePoolWithTag(v30, 0);
          *a2 = 0LL;
          return SidForString;
        }
        do
          ++j;
        while ( *j == 32 );
        while ( *j != 59 )
        {
          for ( ; *j == 32; ++j )
            ;
          if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
          {
            AccessMask |= v35;
            j = v31;
            LODWORD(v33) = AccessMask;
          }
          else
          {
            SepSddlParseWideStringUlong(j, &v31, &v33);
            if ( v31 == j )
              goto LABEL_68;
            j = v31;
            AccessMask = (unsigned int)v33;
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
        v33 = 0LL;
        SidForString = SepSddlGetSidForString(v24);
        if ( SidForString )
          break;
        v28 = v33;
        if ( !v33 )
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
        if ( Sid )
        {
          SidForString = SepSddlAddAceToAcl(a2, &v36, v26, v27, AccessMask, v20 - v34, Sid);
          if ( SidForString )
            goto LABEL_69;
        }
        if ( *v5 == 40 )
          ++v5;
        v19 = v29 + 1;
        v34 = v19;
      }
      v30 = *a2;
      if ( SidForString )
        goto LABEL_71;
      v30[1] = v36;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v15 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
  *a2 = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  *v15 = 524290LL;
  return SidForString;
}
