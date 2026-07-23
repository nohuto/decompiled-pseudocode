/*
 * XREFs of LocalGetAclForString @ 0x1408FFEC0
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A6E644 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x140420040 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcstoul @ 0x14053AE50 (wcstoul.c)
 *     wcsncpy_s @ 0x14053F120 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SddlpUuidFromString @ 0x1407771A8 (SddlpUuidFromString.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140808AE0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140808B70 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140808E00 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x140808E50 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x14081E3F8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081E61C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x14081E764 (SddlAddScopedPolicyIDAce.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     FContainCallBackAce @ 0x140900EB0 (FContainCallBackAce.c)
 *     LookupSidInTable @ 0x140901140 (LookupSidInTable.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x1409E03E0 (RtlAddAce.c)
 *     SddlAddMandatoryAce @ 0x140A3DD24 (SddlAddMandatoryAce.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     LocalpConvertStringSidToSid @ 0x140A6D254 (LocalpConvertStringSidToSid.c)
 *     RtlNtStatusToDosError @ 0x140A6F610 (RtlNtStatusToDosError.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     LocalGetConditionForString @ 0x140A70494 (LocalGetConditionForString.c)
 *     LocalGetAceCount @ 0x140A7C8D0 (LocalGetAceCount.c)
 *     LocalGetRelativeAttributeForString @ 0x140B56E2C (LocalGetRelativeAttributeForString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LocalGetAclForString(wchar_t *Str1, char a2, const void **a3, wchar_t **a4)
{
  unsigned int v4; // edi
  unsigned int AceCount; // esi
  const void **v7; // r13
  wchar_t *v9; // r14
  bool v10; // cf
  wchar_t *v11; // rbx
  BOOL v12; // r15d
  wchar_t *v13; // rax
  __int64 v15; // rax
  wchar_t *v17; // rdx
  unsigned int v18; // ebx
  _BYTE *v19; // rax
  wchar_t *v20; // r14
  int *v21; // rbx
  int v22; // esi
  unsigned int v23; // edi
  int v24; // edx
  wchar_t *v25; // r14
  unsigned int i; // ebx
  wchar_t j; // ax
  wchar_t k; // ax
  __int64 v29; // rax
  unsigned __int8 *v30; // r8
  char v31; // al
  _WORD *v32; // r14
  _WORD *v33; // rbx
  int v34; // ecx
  unsigned int v35; // r13d
  unsigned int v36; // edx
  __int16 n; // ax
  unsigned int v38; // ebx
  ULONG v39; // edi
  ULONG v40; // eax
  _WORD *v41; // rax
  unsigned int v42; // edi
  char *v43; // rbx
  ACL *v44; // rbx
  char AclRevision; // r15
  __int64 AclSize; // r10
  ACL *v47; // rdx
  unsigned int v48; // ecx
  ACL *v49; // r9
  void *v50; // rdi
  USHORT v51; // r8
  NTSTATUS v52; // ebx
  unsigned int v53; // eax
  _BYTE *v54; // rax
  wchar_t v55; // ax
  const wchar_t *v56; // rsi
  int *v57; // rbx
  unsigned int v58; // edi
  int v59; // eax
  unsigned int v60; // r15d
  const wchar_t *v61; // r14
  unsigned __int64 v62; // rcx
  NTSTATUS v63; // eax
  unsigned int ii; // r8d
  __int16 v65; // ax
  _WORD *m; // rbx
  unsigned int ConditionForString; // eax
  wchar_t v68; // ax
  unsigned __int64 v69; // rcx
  unsigned int v70; // ebx
  _WORD *v71; // rax
  _WORD *v72; // r13
  void *v73; // rcx
  const void **v74; // rax
  unsigned int v75; // edi
  _BYTE *v76; // rax
  int v77; // ecx
  unsigned int v78; // eax
  int v79; // eax
  int v80; // edx
  unsigned int v81; // ecx
  int v82; // ebx
  __int64 v83; // rax
  __int64 v84; // r15
  ULONG v85; // eax
  size_t v86; // rbx
  ULONG v87; // eax
  PVOID v88; // rdx
  __int64 v89; // rax
  ULONG v90; // eax
  _WORD *v91; // r15
  char v92; // al
  size_t v93; // rbx
  int v94; // edi
  ULONG v95; // eax
  ULONG v96; // eax
  int v97; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v98; // [rsp+38h] [rbp-C8h]
  UCHAR v99; // [rsp+50h] [rbp-B0h]
  char v100; // [rsp+51h] [rbp-AFh]
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp-A0h]
  unsigned __int8 *Sid; // [rsp+68h] [rbp-98h]
  char v104; // [rsp+70h] [rbp-90h]
  int v105; // [rsp+74h] [rbp-8Ch]
  size_t v106; // [rsp+78h] [rbp-88h] BYREF
  _WORD *v107; // [rsp+80h] [rbp-80h] BYREF
  PVOID Src; // [rsp+88h] [rbp-78h] BYREF
  int v109; // [rsp+90h] [rbp-70h]
  unsigned __int16 v110; // [rsp+94h] [rbp-6Ch]
  unsigned int v111; // [rsp+98h] [rbp-68h] BYREF
  PGUID InheritedObjectTypeGuid; // [rsp+A0h] [rbp-60h]
  PGUID ObjectTypeGuid; // [rsp+A8h] [rbp-58h]
  unsigned int Size; // [rsp+B0h] [rbp-50h]
  unsigned int Size_4; // [rsp+B4h] [rbp-4Ch]
  int v116; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v118; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int8 *v119; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *EndPtr; // [rsp+D8h] [rbp-28h] BYREF
  PVOID Ace; // [rsp+E0h] [rbp-20h] BYREF
  GUID Guid; // [rsp+E8h] [rbp-18h] BYREF
  GUID v123; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t Dst[40]; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  v111 = 0;
  Sid = 0LL;
  AceCount = 0;
  v100 = 0;
  v119 = 0LL;
  v7 = a3;
  v109 = 0;
  EndPtr = 0LL;
  v9 = Str1;
  Src = 0LL;
  v106 = 0LL;
  P = 0LL;
  Ace = 0LL;
  v107 = 0LL;
  v110 = 256;
  if ( !Str1 || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str1, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *v7 = 0LL;
    *a4 = v9 + 17;
    goto LABEL_10;
  }
  v10 = a2 != 0;
  *a4 = 0LL;
  v11 = v9;
  v12 = 0;
  v105 = 2 - v10;
  if ( !(unsigned int)FContainCallBackAce(v9) )
  {
    *a4 = wcschr(v9, 0x3Au);
    goto LABEL_7;
  }
  if ( *v9 )
  {
    while ( 1 )
    {
      if ( *a4 || v4 )
      {
LABEL_22:
        if ( v12 || AceCount )
          return 1336;
        if ( v4 )
          return v4;
        break;
      }
      switch ( *v11 )
      {
        case '"':
          if ( AceCount <= 1 )
          {
LABEL_35:
            v4 = 1336;
            break;
          }
          v12 = !v12;
          break;
        case '(':
          if ( !v12 )
            ++AceCount;
          break;
        case ')':
          if ( !v12 )
          {
            if ( !AceCount )
              goto LABEL_35;
            --AceCount;
          }
          break;
        default:
          if ( *v11 == 58 && !AceCount )
            *a4 = v11;
          break;
      }
      if ( !*++v11 )
        goto LABEL_22;
    }
  }
LABEL_7:
  v13 = *a4;
  if ( *a4 == v9 )
    return 87LL;
  if ( v13 )
  {
    v17 = v13 - 1;
  }
  else
  {
    v15 = -1LL;
    while ( v9[++v15] != 0 )
      ;
    v17 = &v9[v15];
  }
  *a4 = v17;
  AceCount = LocalGetAceCount(v9, v17, &v111);
  if ( AceCount )
    goto LABEL_10;
  v18 = v111;
  if ( !v111 )
  {
    v19 = (_BYTE *)SddlpAlloc(8uLL);
    *v7 = v19;
    if ( v19 )
    {
      *v19 = 2;
      *((_BYTE *)*v7 + 1) = 0;
      *(_DWORD *)((char *)*v7 + 2) = 8;
      *((_WORD *)*v7 + 3) = 0;
    }
    else
    {
      return 8;
    }
    return AceCount;
  }
  v75 = 84 * v111 + 8;
  if ( v75 > 0xFFFF )
    v75 = 0xFFFF;
  Size = v75;
  v76 = (_BYTE *)SddlpAlloc(v75);
  *v7 = v76;
  if ( !v76 )
  {
    AceCount = 8;
    goto LABEL_10;
  }
  *v76 = 2;
  v54 = *v7;
  v116 = 8;
  v54[1] = 0;
  *((_WORD *)*v7 + 1) = v75;
  *((_WORD *)*v7 + 2) = 0;
  *((_WORD *)*v7 + 3) = 0;
  v53 = 0;
  while ( 2 )
  {
    Size_4 = v53;
    LODWORD(v118) = AceCount;
    if ( v53 >= v18 )
      goto LABEL_164;
    v99 = 0;
    AccessMask = 0;
    Guid = 0LL;
    ObjectTypeGuid = 0LL;
    v123 = 0LL;
    v55 = *v9;
    for ( InheritedObjectTypeGuid = 0LL; v55 == 32; ++v9 )
      v55 = v9[1];
    v56 = v9 + 1;
    if ( v55 != 40 )
      v56 = v9;
    for ( ; *v56 == 32; ++v56 )
      ;
    v24 = v105;
    v57 = dword_140E08888;
    v58 = 0;
    while ( 1 )
    {
      if ( (v24 & v57[2]) == v24 )
      {
        if ( v56 )
        {
          v59 = wcsnicmp(v56, *((const wchar_t **)v57 - 1), (unsigned int)*v57);
          v24 = v105;
          if ( !v59 )
            break;
          goto LABEL_128;
        }
        if ( !v57[1] )
          break;
      }
LABEL_128:
      ++v58;
      v57 += 6;
      if ( v58 >= 0x11 )
        goto LABEL_129;
    }
    if ( !&(&off_140E08880)[3 * v58] )
    {
LABEL_129:
      v41 = *v7;
      AceCount = 1804;
      goto LABEL_90;
    }
    v60 = (unsigned __int8)byte_140E0888C[24 * v58];
    v104 = byte_140E0888C[24 * v58];
    v61 = &v56[dword_140E08888[6 * v58]];
    if ( *v61 != 59 && *v61 != 32 )
    {
LABEL_171:
      AceCount = 1336;
      goto LABEL_172;
    }
    v20 = (wchar_t *)(v61 + 1);
    if ( (unsigned __int8)(v60 - 5) <= 3u || (_BYTE)v60 == 11 )
      *(_BYTE *)*v7 = 4;
    for ( ; *v20 == 32; ++v20 )
      ;
LABEL_136:
    if ( v20 == *a4 )
    {
LABEL_47:
      while ( *v20 == 32 )
        ++v20;
      while ( *v20 != 59 )
      {
        for ( ; *v20 == 32; ++v20 )
          ;
        v21 = dword_140E08A28;
        v22 = v24;
        if ( (_BYTE)v60 == 17 )
          v22 = 4;
        v23 = 0;
        while ( (v22 & v21[2]) != v22 || wcsnicmp(v20, *((const wchar_t **)v21 - 1), (unsigned int)*v21) )
        {
          ++v23;
          v21 += 6;
          if ( v23 >= 0x1C )
            goto LABEL_56;
        }
        if ( &(&off_140E08A20)[3 * v23] )
        {
          AccessMask |= dword_140E08A2C[6 * v23];
          v24 = v105;
          v20 += (unsigned int)dword_140E08A28[6 * v23];
        }
        else
        {
LABEL_56:
          AccessMask |= wcstoul(v20, &EndPtr, 0);
          if ( EndPtr == v20 )
            goto LABEL_171;
          v24 = v105;
          v20 = EndPtr;
        }
      }
      v25 = v20 + 1;
      for ( i = 0; i < 2; ++i )
      {
        for ( j = *v25; j == 32; ++v25 )
          j = v25[1];
        if ( j != 59 )
        {
          if ( (unsigned __int8)(v60 - 5) > 3u && (_BYTE)v60 != 11 )
            goto LABEL_171;
          wcsncpy_s(Dst, 0x25uLL, v25, 0x24uLL);
          Dst[36] = 0;
          if ( i )
          {
            if ( !SddlpUuidFromString(Dst, &v123) )
              goto LABEL_209;
            InheritedObjectTypeGuid = &v123;
          }
          else
          {
            if ( !SddlpUuidFromString(Dst, &Guid) )
              goto LABEL_209;
            ObjectTypeGuid = &Guid;
          }
          v68 = v25[36];
          v25 += 36;
          if ( v68 != 59 && v68 != 32 )
          {
LABEL_209:
            AceCount = 1705;
            goto LABEL_172;
          }
        }
        ++v25;
      }
      AceCount = v118;
      if ( (_DWORD)v118 )
      {
LABEL_172:
        v41 = *v7;
        goto LABEL_90;
      }
      for ( k = *v25; k == 32; ++v25 )
        k = v25[1];
      v118 = 0LL;
      AceCount = 0;
      v100 = 0;
      if ( !k || !v25[1] )
      {
        v41 = *v7;
        AceCount = 1332;
        goto LABEL_90;
      }
      v107 = v25 + 2;
      v29 = LookupSidInTable(v25, 0LL, v97, 0, (__int64)&v118);
      if ( v29 )
      {
        v30 = *(unsigned __int8 **)(v29 + 16);
        v31 = 0;
        Sid = v30;
        goto LABEL_71;
      }
      v30 = (unsigned __int8 *)v118;
      Sid = (unsigned __int8 *)v118;
      if ( v118 )
      {
        v31 = 1;
        v100 = 1;
      }
      else
      {
        v107 -= 2;
        v63 = LocalpConvertStringSidToSid(v25, &v119, &v107);
        if ( v63 < 0 && (AceCount = RtlNtStatusToDosError(v63)) != 0 )
        {
          v30 = v119;
          Sid = v119;
        }
        else
        {
          v30 = v119;
          Sid = v119;
          if ( v119 )
          {
            v31 = 1;
            v100 = 1;
            goto LABEL_71;
          }
        }
        v31 = 0;
      }
LABEL_71:
      if ( AceCount )
        goto LABEL_164;
      v32 = v107;
      if ( !v107 || !v30 )
        goto LABEL_171;
      v33 = v107;
      v100 = v31;
      if ( *v107 == 32 )
      {
        v100 = v31;
        do
          ++v33;
        while ( *v33 == 32 );
      }
      if ( (unsigned __int8)v60 <= 0x15u && (v34 = 2371072, _bittest(&v34, v60)) )
      {
        if ( *v33 == 59 )
        {
          v65 = v33[1];
          for ( m = v33 + 1; v65 == 32; ++m )
            v65 = m[1];
          if ( v65 == 40 )
          {
            if ( Src )
            {
              ExFreePoolWithTag(Src, 0);
              Src = 0LL;
            }
            LODWORD(v106) = 0;
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            HIDWORD(v106) = 0;
            if ( (_BYTE)v60 == 18 )
            {
              AceCount = LocalGetRelativeAttributeForString(
                           (_DWORD)m,
                           (unsigned int)&v107,
                           (unsigned int)&P,
                           (unsigned int)&v106 + 4,
                           0LL,
                           0,
                           0,
                           0);
              if ( AceCount )
                goto LABEL_172;
              v32 = v107;
              v30 = Sid;
            }
            else
            {
              v97 = 0;
              ConditionForString = LocalGetConditionForString(m, &v107, &Src, &v106);
              v30 = Sid;
              AceCount = ConditionForString;
              v32 = v107;
            }
          }
          else
          {
            v32 = m;
            v107 = m;
          }
        }
        v35 = v106;
        v36 = HIDWORD(v106);
        if ( !v106 )
        {
LABEL_176:
          AceCount = 1336;
LABEL_177:
          v7 = a3;
          v41 = *a3;
          goto LABEL_90;
        }
        if ( AceCount )
          goto LABEL_177;
      }
      else
      {
        v35 = v106;
        v36 = HIDWORD(v106);
      }
      for ( n = *v32; *v32 == 32; n = *v32 )
        v107 = ++v32;
      if ( n != 41 )
        goto LABEL_176;
      v9 = v32 + 1;
      if ( v60 != 3 )
      {
        switch ( v60 )
        {
          case 0u:
          case 1u:
          case 2u:
          case 0x11u:
          case 0x13u:
          case 0x14u:
            break;
          case 5u:
          case 6u:
          case 7u:
          case 8u:
            v79 = 32;
            if ( !ObjectTypeGuid )
              v79 = 16;
            v38 = v79 + 16;
            if ( !InheritedObjectTypeGuid )
              v38 = v79;
            goto LABEL_84;
          case 9u:
          case 0xAu:
          case 0xDu:
          case 0x15u:
            if ( v35 > 0xFFFFFFFC )
              goto LABEL_297;
            v78 = (v35 + 3) & 0xFFFFFFFC;
            v38 = v78 + 12;
            if ( v78 + 12 >= v78 )
              goto LABEL_84;
            goto LABEL_86;
          case 0xBu:
            v80 = 32;
            if ( !ObjectTypeGuid )
              v80 = 16;
            if ( v35 > 0xFFFFFFFC )
            {
LABEL_297:
              AceCount = 534;
              goto LABEL_10;
            }
            v81 = (v35 + 3) & 0xFFFFFFFC;
            v82 = v80 + 16;
            if ( !InheritedObjectTypeGuid )
              v82 = v80;
            v38 = v81 + v82;
            if ( v38 >= v81 )
              goto LABEL_84;
            goto LABEL_86;
          case 0x12u:
            v38 = v36 + 12;
            if ( v36 + 12 >= v36 )
              goto LABEL_84;
            goto LABEL_86;
          default:
            goto LABEL_176;
        }
      }
      v38 = 12;
LABEL_84:
      v39 = RtlLengthSid(v30) + v38 - 4;
      if ( v39 < v38 || (v40 = v39 + v116, v116 = v40, v40 < v39) )
      {
LABEL_86:
        v7 = a3;
        AceCount = 534;
        v41 = *a3;
        goto LABEL_90;
      }
      if ( v40 > Size )
      {
        v69 = v39 * (unsigned __int64)(v111 - Size_4);
        if ( v69 > 0xFFFFFFFF )
          goto LABEL_86;
        v70 = v69 + Size;
        if ( (unsigned int)v69 + Size < (unsigned int)v69 )
          goto LABEL_86;
        v71 = (_WORD *)SddlpAlloc(v70);
        v72 = v71;
        v73 = (void *)*a3;
        if ( !v71 )
        {
          if ( v73 )
            ExFreePoolWithTag(v73, 0);
          v7 = a3;
          *a3 = 0LL;
          if ( v100 == 1 )
          {
            if ( Sid )
              ExFreePoolWithTag(Sid, 0);
            Sid = 0LL;
            v100 = 0;
          }
          v41 = *a3;
          AceCount = 8;
          goto LABEL_90;
        }
        memmove(v71, *a3, Size);
        v74 = a3;
        v72[1] = v70;
        if ( *a3 )
        {
          ExFreePoolWithTag((PVOID)*a3, 0);
          v74 = a3;
        }
        *v74 = v72;
        v35 = v106;
        Size = v70;
      }
      if ( !v60 )
      {
        v7 = a3;
        v44 = (ACL *)*a3;
        if ( RtlValidSid(Sid) )
        {
          if ( v44->AclRevision <= 4u )
          {
            AclRevision = 2;
            if ( v44->AclRevision > 2u )
              AclRevision = v44->AclRevision;
            if ( (v99 & 0xE0) != 0 && (v99 & 0xC0) != 0 )
            {
              v50 = Sid;
              v52 = -1073741811;
            }
            else if ( RtlValidAcl(v44) )
            {
              AclSize = v44->AclSize;
              v47 = v44 + 1;
              v48 = 0;
              v49 = (ACL *)((char *)v44 + AclSize);
              while ( v48 < v44->AceCount )
              {
                if ( v47 >= v49 )
                  goto LABEL_198;
                ++v48;
                v47 = (ACL *)((char *)v47 + v47->AclSize);
              }
              v50 = Sid;
              if ( v47 > v49 )
                v47 = 0LL;
              v51 = 4 * (Sid[1] + 4);
              if ( v47 && (char *)v47 + v51 <= (char *)v44 + AclSize )
              {
                v47->Sbz1 = v99;
                v47->AclSize = v51;
                *(_DWORD *)&v47->AceCount = AccessMask;
                v47->AclRevision = 0;
                memmove(&v47[1], Sid, 4LL * Sid[1] + 8);
                ++v44->AceCount;
                v44->AclRevision = AclRevision;
                v52 = 0;
              }
              else
              {
                v52 = -1073741671;
              }
            }
            else
            {
LABEL_198:
              v50 = Sid;
              v52 = -1073741705;
            }
LABEL_107:
            if ( v52 < 0 )
              goto LABEL_255;
            goto LABEL_108;
          }
          v52 = -1073741735;
        }
        else
        {
          v52 = -1073741704;
        }
LABEL_163:
        v50 = Sid;
        goto LABEL_107;
      }
      switch ( v60 )
      {
        case 1u:
          v7 = a3;
          v50 = Sid;
          v52 = RtlpAddKnownAce((int)*a3, 2, v99, AccessMask, Sid, 1);
          goto LABEL_107;
        case 2u:
          v7 = a3;
          v50 = Sid;
          v52 = RtlAddAuditAccessAceEx((PACL)*a3, 2u, v99 & 0x3F, AccessMask, Sid, v99 & 0x40, v99 & 0x80);
          goto LABEL_107;
        case 5u:
          v50 = Sid;
          v7 = a3;
          v52 = RtlAddAccessAllowedObjectAce(
                  (PACL)*a3,
                  4u,
                  v99,
                  AccessMask,
                  ObjectTypeGuid,
                  InheritedObjectTypeGuid,
                  Sid);
          goto LABEL_107;
        case 6u:
          v50 = Sid;
          v7 = a3;
          v52 = RtlAddAccessDeniedObjectAce(
                  (PACL)*a3,
                  4u,
                  v99,
                  AccessMask,
                  ObjectTypeGuid,
                  InheritedObjectTypeGuid,
                  Sid);
          goto LABEL_107;
        case 7u:
          v50 = Sid;
          v7 = a3;
          v52 = RtlAddAuditAccessObjectAce(
                  (PACL)*a3,
                  4u,
                  v99,
                  AccessMask,
                  ObjectTypeGuid,
                  InheritedObjectTypeGuid,
                  Sid,
                  v99 & 0x40,
                  v99 & 0x80);
          goto LABEL_107;
        case 9u:
        case 0xAu:
        case 0xDu:
          if ( v39 >= 0xFFFF )
            goto LABEL_211;
          v83 = SddlpAlloc(v39);
          v84 = v83;
          if ( !v83 )
            goto LABEL_303;
          *(_BYTE *)v83 = v104;
          *(_BYTE *)(v83 + 1) = v99;
          *(_DWORD *)(v83 + 4) = AccessMask;
          *(_WORD *)(v83 + 2) = v39;
          v85 = RtlLengthSid(Sid);
          RtlCopySid(v85, (PSID)(v84 + 8), Sid);
          if ( !(_DWORD)v106 )
            goto LABEL_280;
          v86 = (unsigned int)v106;
          v87 = RtlLengthSid(Sid);
          v88 = Src;
          goto LABEL_279;
        case 0xBu:
          v7 = a3;
          if ( v39 >= 0xFFFF )
          {
            v52 = -1073741705;
LABEL_255:
            AceCount = RtlNtStatusToDosError(v52);
LABEL_164:
            v41 = *v7;
            if ( AceCount )
              goto LABEL_90;
            v41[1] = v116;
            goto LABEL_166;
          }
          v52 = RtlAddAccessAllowedObjectAce(
                  (PACL)*a3,
                  4u,
                  v99,
                  AccessMask,
                  ObjectTypeGuid,
                  InheritedObjectTypeGuid,
                  Sid);
          if ( v52 < 0 )
            goto LABEL_255;
          v52 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
          if ( v52 < 0 )
            goto LABEL_255;
          v91 = Ace;
          v92 = 9;
          if ( *(_BYTE *)Ace == 5 )
            v92 = 11;
          *(_BYTE *)Ace = v92;
          v91[1] = v39;
          if ( !(_DWORD)v106 )
            goto LABEL_295;
          v93 = (unsigned int)v106;
          if ( *(_BYTE *)v91 == 11 )
          {
            v94 = *((_DWORD *)v91 + 2);
            v95 = RtlLengthSid(Sid);
            memmove((char *)&v91[8 * (v94 & 1) + 6 + 4 * (v94 & 2)] + v95, Src, (unsigned int)v93);
LABEL_295:
            v50 = Sid;
          }
          else
          {
            v50 = Sid;
            v96 = RtlLengthSid(Sid);
            memmove((char *)v91 + v96 + 8, Src, v93);
          }
LABEL_108:
          if ( v100 == 1 && v50 )
            ExFreePoolWithTag(v50, 0);
          Sid = 0LL;
          v119 = 0LL;
          if ( Src )
          {
            ExFreePoolWithTag(Src, 0);
            Src = 0LL;
          }
          LODWORD(v106) = 0;
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
          HIDWORD(v106) = 0;
          if ( *v9 == 40 )
            ++v9;
          v18 = v111;
          v53 = Size_4 + 1;
          continue;
        case 0x11u:
          v7 = a3;
          v50 = Sid;
          v52 = SddlAddMandatoryAce((PACL)*a3, v97, AccessMask);
          goto LABEL_107;
        case 0x12u:
          if ( v39 >= 0xFFFF || (v99 & 0xE0) != 0 || AccessMask )
            goto LABEL_211;
          v77 = *(_DWORD *)(Sid + 2) - v109;
          if ( !v77 )
            v77 = *((unsigned __int16 *)Sid + 3) - v110;
          if ( v77 || Sid[1] != 1 || *((_DWORD *)Sid + 2) )
            goto LABEL_211;
          v89 = SddlpAlloc(v39);
          v84 = v89;
          if ( v89 )
          {
            *(_BYTE *)v89 = v104;
            *(_DWORD *)(v89 + 4) = 0;
            *(_BYTE *)(v89 + 1) = v99;
            *(_WORD *)(v89 + 2) = v39;
            v90 = RtlLengthSid(Sid);
            RtlCopySid(v90, (PSID)(v84 + 8), Sid);
            if ( HIDWORD(v106) )
            {
              v86 = HIDWORD(v106);
              v87 = RtlLengthSid(Sid);
              v88 = P;
LABEL_279:
              memmove((void *)(v84 + v87 + 8LL), v88, v86);
            }
LABEL_280:
            v7 = a3;
            v52 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, (PVOID)v84, v39);
            ExFreePoolWithTag((PVOID)v84, 0);
            goto LABEL_163;
          }
LABEL_303:
          v52 = -1073741801;
LABEL_304:
          v7 = a3;
          goto LABEL_255;
        case 0x13u:
          v7 = a3;
          v50 = Sid;
          v52 = SddlAddScopedPolicyIDAce((PACL)*a3, 0x140000000LL, v99, AccessMask, (char *)Sid);
          goto LABEL_107;
        case 0x14u:
          v7 = a3;
          v50 = Sid;
          v52 = SddlAddProcessTrustLabelAce((PACL)*a3, 0x140000000LL, v99, (__int64)Sid, v97, AccessMask);
          goto LABEL_107;
        case 0x15u:
          if ( v35 < 0xFFFF )
          {
            v50 = Sid;
            v98 = v35;
            v7 = a3;
            v52 = SddlAddAccessFilterAce((PACL)*a3, 0x140000000LL, v99, (__int64)Sid, v97, AccessMask, Src, v98);
            goto LABEL_107;
          }
LABEL_211:
          v52 = -1073741705;
          goto LABEL_304;
        default:
          v52 = -1073741811;
          goto LABEL_304;
      }
    }
    break;
  }
  if ( *v20 == 59 )
  {
    ++v20;
    goto LABEL_47;
  }
  for ( ; *v20 == 32; ++v20 )
    ;
  v43 = (char *)&unk_140E08774;
  v42 = 0;
  while ( 1 )
  {
    if ( (v24 & *((_DWORD *)v43 - 1)) != v24 )
      goto LABEL_88;
    if ( *(_DWORD *)v43 )
    {
      for ( ii = 0; ii < *(_DWORD *)v43; ++ii )
      {
        if ( *(_BYTE *)(ii + *(_QWORD *)(v43 + 4)) == (_BYTE)v60 )
          goto LABEL_142;
      }
      goto LABEL_87;
    }
LABEL_142:
    if ( !wcsnicmp(v20, *(const wchar_t **)(v43 - 20), *((unsigned int *)v43 - 3)) )
      break;
LABEL_87:
    v24 = v105;
LABEL_88:
    ++v42;
    v43 += 32;
    if ( v42 >= 9 )
      goto LABEL_89;
  }
  v62 = 32LL * v42;
  if ( &(&off_140E08760)[v62 / 8] )
  {
    v24 = v105;
    v99 |= byte_140E0876C[v62];
    v20 += *(unsigned int *)((char *)&unk_140E08768 + v62);
    goto LABEL_136;
  }
LABEL_89:
  v41 = *v7;
  AceCount = 1004;
LABEL_90:
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  *v7 = 0LL;
LABEL_166:
  if ( v100 && Sid )
    ExFreePoolWithTag(Sid, 0);
LABEL_10:
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    return AceCount;
  }
  return AceCount;
}
