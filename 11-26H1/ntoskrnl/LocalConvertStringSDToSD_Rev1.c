/*
 * XREFs of LocalConvertStringSDToSD_Rev1 @ 0x140A61674
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404ACDE0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x140925630 (LookupSidInTable.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     LocalpConvertStringSidToSid @ 0x140A60294 (LocalpConvertStringSidToSid.c)
 *     RtlMakeSelfRelativeSD @ 0x140A623DC (RtlMakeSelfRelativeSD.c)
 *     RtlNtStatusToDosError @ 0x140A62640 (RtlNtStatusToDosError.c)
 *     SddlpAlloc @ 0x140A62788 (SddlpAlloc.c)
 */

__int64 __fastcall LocalConvertStringSDToSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        void **a5,
        _DWORD *a6)
{
  wchar_t *v6; // rdi
  void *v7; // r12
  void *v8; // r15
  char v9; // r14
  char v10; // r13
  wchar_t v11; // ax
  wchar_t *v12; // rdi
  int v13; // r13d
  unsigned int i; // ebx
  wchar_t *v15; // rdi
  unsigned int j; // ebx
  int v17; // ecx
  unsigned int AclForString; // ebx
  wchar_t *v20; // rdi
  __int64 v21; // rax
  char v22; // al
  wchar_t *v23; // rdi
  __int64 v24; // rax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  __int16 v27; // ax
  __int16 v28; // di
  __int16 v29; // di
  void *v30; // rcx
  __int16 v31; // di
  void *v32; // rcx
  __int64 v33; // rax
  NTSTATUS SelfRelativeSD; // eax
  int v35; // [rsp+28h] [rbp-79h]
  wchar_t *v36; // [rsp+48h] [rbp-59h] BYREF
  size_t Size; // [rsp+50h] [rbp-51h] BYREF
  void *v38; // [rsp+58h] [rbp-49h] BYREF
  void *v39; // [rsp+60h] [rbp-41h] BYREF
  __int64 v40; // [rsp+68h] [rbp-39h] BYREF
  void *v41; // [rsp+70h] [rbp-31h] BYREF
  void *v42; // [rsp+78h] [rbp-29h] BYREF
  __int128 v43; // [rsp+80h] [rbp-21h] BYREF
  __int128 v44; // [rsp+90h] [rbp-11h]
  void *v45; // [rsp+A0h] [rbp-1h]
  char v46; // [rsp+F8h] [rbp+57h]
  char v47; // [rsp+100h] [rbp+5Fh]
  char v48; // [rsp+108h] [rbp+67h]
  int v49; // [rsp+110h] [rbp+6Fh]

  v6 = a4;
  v38 = 0LL;
  v39 = 0LL;
  v7 = 0LL;
  v41 = 0LL;
  v8 = 0LL;
  v42 = 0LL;
  v9 = 0;
  v36 = 0LL;
  v10 = 0;
  v48 = 0;
  v47 = 0;
  Size = 0LL;
  v46 = 0;
  LOWORD(v49) = 0;
  if ( !a4 || !a5 )
    return 87LL;
  if ( a6 )
    *a6 = 0;
  while ( v6 )
  {
    v11 = *v6;
    if ( *v6 )
    {
      switch ( v11 )
      {
        case 'D':
          if ( v6[1] != 58 )
            goto LABEL_83;
          v12 = v6 + 2;
          if ( v41 )
            goto LABEL_83;
          if ( *v12 != 40 )
          {
            v13 = 0;
            HIDWORD(Size) = 0;
            do
            {
              if ( *v12 != 32 )
                break;
              ++v12;
            }
            while ( v12 );
LABEL_13:
            for ( i = 0; i < 6; ++i )
            {
              if ( ((__int64)(&ControlLookup)[3 * i + 1] & 1) != 0
                && !wcsnicmp(v12, (&ControlLookup)[3 * i], *((unsigned int *)&ControlLookup + 6 * i + 2)) )
              {
                LOWORD(v13) = *((_WORD *)&ControlLookup + 12 * i + 6) | v13;
                for ( v12 += *((unsigned int *)&ControlLookup + 6 * i + 2); v12; ++v12 )
                {
                  if ( *v12 != 32 )
                    break;
                }
                goto LABEL_13;
              }
            }
            v9 = v47;
            HIDWORD(Size) = v13;
            v36 = v12;
          }
          v35 = 0;
          AclForString = LocalGetAclForString(v12, 1, (const void **)&v41, &v36);
          if ( AclForString )
            goto LABEL_48;
          v6 = v36;
          v10 = 1;
          break;
        case 'G':
          AclForString = 87;
          if ( v6[1] != 58 )
            goto LABEL_48;
          v23 = v6 + 2;
          if ( v8 )
            goto LABEL_48;
          v40 = 0LL;
          AclForString = 0;
          if ( !v23 )
          {
LABEL_83:
            AclForString = 87;
            goto LABEL_48;
          }
          v9 = 0;
          v47 = 0;
          if ( !*v23 || !v23[1] )
          {
            AclForString = 1332;
            goto LABEL_48;
          }
          v36 = v23 + 2;
          v24 = LookupSidInTable(v23, 0LL, 0LL, (__int64)&ControlLookup, v35, 0, &v40);
          if ( v24 )
          {
            v8 = *(void **)(v24 + 16);
LABEL_71:
            v39 = v8;
            goto LABEL_72;
          }
          v8 = (void *)v40;
          if ( v40 )
          {
            v9 = 1;
            goto LABEL_71;
          }
          v36 -= 2;
          v26 = LocalpConvertStringSidToSid(v23, (__int64 *)&v39, &v36);
          if ( v26 < 0 && (AclForString = RtlNtStatusToDosError(v26)) != 0 )
          {
            v8 = v39;
          }
          else
          {
            v8 = v39;
            if ( v39 )
              v9 = 1;
          }
LABEL_72:
          v47 = v9;
          if ( AclForString )
            goto LABEL_48;
          v6 = v36;
          v47 = v9;
          break;
        case 'O':
          AclForString = 87;
          if ( v6[1] != 58 )
            goto LABEL_48;
          v20 = v6 + 2;
          if ( v7 )
            goto LABEL_48;
          v40 = 0LL;
          AclForString = 0;
          if ( !v20 )
            goto LABEL_83;
          v48 = 0;
          if ( !*v20 || !v20[1] )
          {
            AclForString = 1332;
            goto LABEL_51;
          }
          v36 = v20 + 2;
          v21 = LookupSidInTable(v20, 0LL, 0LL, (__int64)&ControlLookup, v35, 0, &v40);
          if ( v21 )
          {
            v7 = *(void **)(v21 + 16);
            v22 = 0;
            v38 = v7;
            goto LABEL_62;
          }
          v7 = (void *)v40;
          if ( v40 )
          {
            v38 = (void *)v40;
LABEL_78:
            v22 = 1;
            v48 = 1;
            goto LABEL_62;
          }
          v36 -= 2;
          v25 = LocalpConvertStringSidToSid(v20, (__int64 *)&v38, &v36);
          if ( v25 < 0 && (AclForString = RtlNtStatusToDosError(v25)) != 0 )
          {
            v7 = v38;
          }
          else
          {
            v7 = v38;
            if ( v38 )
              goto LABEL_78;
          }
          v22 = 0;
LABEL_62:
          if ( AclForString )
            goto LABEL_48;
          v6 = v36;
          v48 = v22;
          break;
        case ' ':
          ++v6;
          break;
        case 'S':
          if ( v6[1] != 58 )
            goto LABEL_83;
          v15 = v6 + 2;
          if ( v42 )
            goto LABEL_83;
          if ( *v15 != 40 )
          {
            v49 = 0;
            do
            {
              if ( *v15 != 32 )
                break;
              ++v15;
            }
            while ( v15 );
LABEL_31:
            for ( j = 0; j < 6; ++j )
            {
              if ( ((__int64)(&ControlLookup)[3 * j + 1] & 2) != 0
                && !wcsnicmp(v15, (&ControlLookup)[3 * j], *((unsigned int *)&ControlLookup + 6 * j + 2)) )
              {
                HIWORD(v17) = HIWORD(v49);
                LOWORD(v17) = *((_WORD *)&ControlLookup + 12 * j + 6) | v49;
                v49 = v17;
                for ( v15 += *((unsigned int *)&ControlLookup + 6 * j + 2); v15; ++v15 )
                {
                  if ( *v15 != 32 )
                    break;
                }
                goto LABEL_31;
              }
            }
            v9 = v47;
            v36 = v15;
          }
          v35 = 0;
          AclForString = LocalGetAclForString(v15, 0, (const void **)&v42, &v36);
          if ( AclForString )
            goto LABEL_48;
          v6 = v36;
          v46 = 1;
          break;
        default:
          goto LABEL_83;
      }
    }
    else
    {
      v6 = 0LL;
    }
  }
  v45 = 0LL;
  v43 = 0LL;
  LOBYTE(v43) = 1;
  v27 = WORD2(Size) | v49;
  WORD1(v43) = WORD2(Size) | v49;
  v28 = WORD2(Size) | v49;
  v44 = 0LL;
  if ( v7 )
  {
    if ( v27 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      *((_QWORD *)&v43 + 1) = v7;
      v28 = v27 & 0xFFFE;
      WORD1(v43) = v27 & 0xFFFE;
    }
  }
  if ( v8 )
  {
    if ( v28 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      *(_QWORD *)&v44 = v8;
      v28 &= ~2u;
      WORD1(v43) = v28;
    }
  }
  if ( v10 )
  {
    if ( v28 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      v29 = v28 | 4;
      v30 = 0LL;
      if ( v41 )
        v30 = v41;
      v28 = v29 & 0xFFF7;
      v45 = v30;
      WORD1(v43) = v28;
    }
  }
  if ( v46 )
  {
    if ( v28 < 0 )
    {
      AclForString = RtlNtStatusToDosError(-1073741703);
      if ( AclForString )
        goto LABEL_48;
    }
    else
    {
      v31 = v28 | 0x10;
      v32 = 0LL;
      if ( v42 )
        v32 = v42;
      v28 = v31 & 0xFFDF;
      *((_QWORD *)&v44 + 1) = v32;
      WORD1(v43) = v28;
    }
  }
  if ( v28 < 0 || (unsigned int)RtlMakeSelfRelativeSD(&v43, *a5, &Size) != -1073741789 )
  {
    AclForString = 122;
    goto LABEL_48;
  }
  AclForString = 0;
  v33 = SddlpAlloc((unsigned int)Size);
  *a5 = (void *)v33;
  if ( !v33 )
  {
    AclForString = 8;
    goto LABEL_48;
  }
  if ( SWORD1(v43) < 0 )
  {
    SelfRelativeSD = -1073741593;
    goto LABEL_103;
  }
  SelfRelativeSD = RtlMakeSelfRelativeSD(&v43, v33, &Size);
  if ( SelfRelativeSD < 0 )
  {
LABEL_103:
    AclForString = RtlNtStatusToDosError(SelfRelativeSD);
    SddlpFree(*a5);
    *a5 = 0LL;
    if ( AclForString )
      goto LABEL_48;
  }
  if ( a6 )
    *a6 = Size;
LABEL_48:
  if ( v48 == 1 )
    SddlpFree(v7);
  v9 = v47;
LABEL_51:
  if ( v9 == 1 )
    SddlpFree(v8);
  SddlpFree(v41);
  SddlpFree(v42);
  return AclForString;
}
