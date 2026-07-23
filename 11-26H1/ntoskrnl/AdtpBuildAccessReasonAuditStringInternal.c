/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14041F320 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     AdtpFormatPrefix @ 0x14041FE34 (AdtpFormatPrefix.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     RtlGetAce @ 0x140420040 (RtlGetAce.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1404A5DE0 (StringCchPrintfW.c)
 *     StringCchPrintfExW @ 0x14071A480 (StringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x1409E03E0 (RtlAddAce.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140AE50FC (AdtpBuildPrivilegeAuditString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        int a1,
        int a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // ecx
  int Acl; // ebx
  int v20; // eax
  ACL *v21; // r12
  size_t v22; // r13
  int v23; // edx
  int v24; // edi
  _BYTE *v25; // rax
  __int16 v26; // cx
  __int64 v27; // rcx
  ACL *v28; // r14
  unsigned __int16 *v29; // r15
  ULONG v30; // ebx
  ACL *v31; // rax
  ACL *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  wchar_t *v37; // r15
  __int64 v38; // r14
  __int64 v39; // rax
  __int16 v40; // bx
  __int16 v41; // bx
  ULONG v42; // ebx
  int v43; // ebx
  UNICODE_STRING *p_Destination; // rdx
  __int16 v45; // bx
  unsigned int v46; // eax
  __int64 v47; // rax
  __int16 v48; // bx
  UNICODE_STRING *p_Source; // rdx
  unsigned int v50; // eax
  const UNICODE_STRING *v51; // rdx
  UNICODE_STRING *v52; // rdx
  NTSTATUS appended; // eax
  size_t v54; // r14
  __int64 v55; // r15
  __int16 v56; // si
  char *Pool2; // rdi
  __int64 v58; // rcx
  __int16 v59; // si
  __int64 v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v62[2]; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Ace; // [rsp+68h] [rbp-98h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-90h] BYREF
  size_t pcchRemaining; // [rsp+80h] [rbp-80h] BYREF
  int v66; // [rsp+88h] [rbp-78h]
  UNICODE_STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  PVOID v68[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v69; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v71; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v72; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v73; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v74; // [rsp+100h] [rbp+0h] BYREF
  PVOID Src[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE *v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  wchar_t pszFormat[8]; // [rsp+130h] [rbp+30h] BYREF
  wchar_t pszDest[8]; // [rsp+140h] [rbp+40h] BYREF
  int v80; // [rsp+150h] [rbp+50h]
  _OWORD SecurityDescriptor[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v82; // [rsp+180h] [rbp+80h]
  char v83; // [rsp+188h] [rbp+88h] BYREF
  char v84; // [rsp+1A0h] [rbp+A0h] BYREF
  char v85; // [rsp+1C0h] [rbp+C0h] BYREF
  char v86; // [rsp+1E0h] [rbp+E0h] BYREF
  char v87; // [rsp+200h] [rbp+100h] BYREF
  char v88; // [rsp+220h] [rbp+120h] BYREF
  char v89; // [rsp+240h] [rbp+140h] BYREF
  char v90; // [rsp+260h] [rbp+160h] BYREF

  v77 = a8;
  *(_QWORD *)pszFormat = a7;
  v76 = a12;
  v15 = 0;
  v16 = 0;
  pcchRemaining = a4;
  LOBYTE(v61) = 0;
  v17 = 1;
  Destination = 0LL;
  Ace = 0LL;
  v71 = 0LL;
  P[0] = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v69 = 0LL;
  Source = 0LL;
  *(_OWORD *)pszDest = 0LL;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v62 = 0LL;
  *(_OWORD *)v68 = 0LL;
  while ( v16 < 0x20 )
  {
    if ( (v17 & a5) != 0 )
    {
      v15 = v16;
      break;
    }
    ++v16;
    v17 *= 2;
  }
  *(_DWORD *)pszDest = 1310720;
  *(_QWORD *)&pszDest[4] = &v83;
  *(_DWORD *)&Destination.Length = 1966080;
  Destination.Buffer = (wchar_t *)&v84;
  Acl = AdtpFormatPrefix(&Destination, 0x709u);
  if ( Acl < 0 )
    goto LABEL_10;
  *(_DWORD *)&v71.Length = 1966080;
  v71.Buffer = (wchar_t *)&v85;
  Acl = AdtpFormatPrefix(&v71, 0x70Au);
  if ( Acl < 0 )
    goto LABEL_10;
  *(_DWORD *)&v72.Length = 1966080;
  v72.Buffer = (wchar_t *)&v86;
  Acl = AdtpFormatPrefix(&v72, 0x713u);
  if ( Acl < 0 )
    goto LABEL_10;
  *(_DWORD *)&v73.Length = 1966080;
  v73.Buffer = (wchar_t *)&v87;
  Acl = AdtpFormatPrefix(&v73, 0x714u);
  if ( Acl < 0 )
    goto LABEL_10;
  *(_DWORD *)&v74.Length = 1966080;
  v74.Buffer = (wchar_t *)&v88;
  Acl = AdtpFormatPrefix(&v74, 0x712u);
  if ( Acl < 0 )
    goto LABEL_10;
  *(_DWORD *)&v69.Length = 1966080;
  v69.Buffer = (wchar_t *)&v89;
  Acl = AdtpFormatPrefix(&v69, 0x716u);
  if ( Acl < 0 )
    goto LABEL_10;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v90;
  Acl = AdtpFormatPrefix(&Source, 0x718u);
  if ( Acl < 0 )
    goto LABEL_10;
  v20 = AdtpBuildAccessesString(a1, a2, a5, 2, (PUNICODE_STRING)Src, 0LL, 0LL, 0LL, (__int64)&v61);
  v21 = 0LL;
  Acl = v20;
  if ( v20 < 0 )
    goto LABEL_10;
  v22 = LOWORD(Src[0]);
  v66 = LOWORD(Src[0]) >> 1;
  v23 = *(_DWORD *)(*(_QWORD *)pszFormat + 4LL * v15);
  v24 = v23 & 0xFF0000;
  if ( (v23 & 0xFF0000u) > 0x200000 )
  {
    if ( v24 != 3145728
      && v24 != 0x400000
      && v24 != 5242880
      && v24 != 6291456
      && v24 != 7340032
      && v24 != 0x800000
      && v24 != 9437184
      && v24 != 10485760 )
    {
      goto LABEL_138;
    }
    goto LABEL_61;
  }
  if ( v24 == 0x200000 )
    goto LABEL_73;
  if ( !v24 )
  {
LABEL_61:
    v42 = 1830;
    if ( v24 != 458752 )
      v42 = 0;
    switch ( v24 )
    {
      case 3145728:
        v42 = 1803;
        break;
      case 4194304:
        v42 = 1804;
        break;
      case 5242880:
        v42 = 1806;
        break;
      case 6291456:
        v42 = 1807;
        break;
      case 7340032:
        v42 = 1808;
        break;
      default:
        if ( v24 )
        {
          switch ( v24 )
          {
            case 8388608:
              v42 = 1805;
              break;
            case 9437184:
              v42 = 1841;
              break;
            case 10485760:
              v42 = 1856;
              break;
          }
        }
        else
        {
          v42 = 1809;
        }
        break;
    }
    v62[1] = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !v62[1] )
      goto LABEL_65;
    LODWORD(v62[0]) = 5111808;
    RtlAppendUnicodeToString((PUNICODE_STRING)v62, L"%%");
    Acl = RtlIntegerToUnicodeString(v42, 0xAu, (PUNICODE_STRING)pszDest);
    if ( Acl < 0 )
      goto LABEL_10;
    v51 = (const UNICODE_STRING *)pszDest;
    goto LABEL_137;
  }
  if ( v24 != 0x40000 && v24 != 0x10000 && v24 != 0x20000 && v24 != 196608 )
  {
    if ( v24 != 327680 && v24 != 393216 )
    {
      if ( v24 != 458752 )
      {
        if ( v24 == 0x100000 )
        {
LABEL_73:
          v80 = 0;
          wcscpy(pszDest, L"\x01");
          *(_DWORD *)&pszDest[2] = 1;
          P[0] = (PVOID)(unsigned __int16)v23;
          *(_QWORD *)&pszDest[4] = (unsigned __int16)v23;
          Acl = AdtpBuildPrivilegeAuditString(pszDest, v68, 0LL, 0LL, 0LL, &v61);
          if ( Acl < 0 )
            goto LABEL_10;
          v43 = (LOWORD(v68[0]) >> 1) + 27;
          v62[1] = (PVOID)ExAllocatePool2(0x100uLL);
          if ( v62[1] )
          {
            LOWORD(v62[0]) = 0;
            WORD1(v62[0]) = 2 * v43;
            if ( v24 == 0x200000 )
              p_Destination = &Destination;
            else
              p_Destination = &v74;
            RtlAppendUnicodeStringToString((PUNICODE_STRING)v62, p_Destination);
            RtlAppendUnicodeStringToString((PUNICODE_STRING)v62, (PCUNICODE_STRING)v68);
            if ( v68[1] )
            {
              ExFreePoolWithTag(v68[1], 0);
              v68[1] = 0LL;
            }
            goto LABEL_138;
          }
LABEL_65:
          Acl = -1073741801;
          goto LABEL_10;
        }
LABEL_138:
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)v62, L"\r\n\t\t\t\t");
        v54 = LOWORD(v62[0]);
        Acl = appended;
        v55 = v66 + (LOWORD(v62[0]) >> 1);
        v56 = v66 + (LOWORD(v62[0]) >> 1) + 1;
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          *v76 = 1;
          if ( (_WORD)v22 )
            memmove(Pool2, Src[1], v22);
          if ( (_WORD)v54 )
            memmove(&Pool2[v22], v62[1], v54);
          v58 = v77;
          v59 = 2 * v56;
          *(_WORD *)&Pool2[2 * v55] = (_WORD)v21;
          *(_WORD *)(v58 + 2) = v59;
          *(_WORD *)v58 = v59 - 2;
          *(_QWORD *)(v58 + 8) = Pool2;
        }
        else
        {
          Acl = -1073741801;
        }
        v32 = v21;
        v21 = (ACL *)Ace;
LABEL_43:
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        if ( v32 )
          goto LABEL_46;
        goto LABEL_10;
      }
      goto LABEL_61;
    }
    v45 = 2;
    wcscpy(pszFormat, L"# %d");
    P[0] = (PVOID)131074;
    P[1] = (PVOID)L"-";
    if ( v24 == 393216 )
    {
      v50 = *(_DWORD *)(pcchRemaining + 8);
      if ( !v50 )
      {
LABEL_82:
        if ( (unsigned __int16)v45 <= 2u )
        {
          LODWORD(v60) = (unsigned __int16)v23;
          pcchRemaining = 0LL;
          if ( StringCchPrintfExW((STRSAFE_LPWSTR)SecurityDescriptor, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v60) >= 0 )
          {
            WORD1(P[0]) = 40;
            P[1] = SecurityDescriptor;
            v45 = 2 * (20 - pcchRemaining);
            LOWORD(P[0]) = v45;
          }
        }
        v48 = v45 + 54;
        v62[1] = (PVOID)ExAllocatePool2(0x100uLL);
        if ( !v62[1] )
          goto LABEL_65;
        LOWORD(v62[0]) = 0;
        WORD1(v62[0]) = 2 * v48;
        if ( v24 == 327680 )
          p_Source = &v69;
        else
          p_Source = &Source;
        RtlAppendUnicodeStringToString((PUNICODE_STRING)v62, p_Source);
        v51 = (const UNICODE_STRING *)P;
LABEL_137:
        RtlAppendUnicodeStringToString((PUNICODE_STRING)v62, v51);
        goto LABEL_138;
      }
      if ( (unsigned __int16)v23 < v50 )
      {
        v47 = *(_QWORD *)(pcchRemaining + 16);
        goto LABEL_81;
      }
    }
    else
    {
      v46 = *(_DWORD *)(a3 + 8);
      if ( !v46 )
        goto LABEL_82;
      if ( (unsigned __int16)v23 < v46 )
      {
        v47 = *(_QWORD *)(a3 + 16);
LABEL_81:
        v45 = _mm_cvtsi128_si32(*(__m128i *)(v47 + 16LL * (unsigned __int16)v23));
        *(_OWORD *)P = *(_OWORD *)(v47 + 16LL * (unsigned __int16)v23);
        goto LABEL_82;
      }
    }
    Acl = -1073741811;
    goto LABEL_10;
  }
  Ace = 0LL;
  v82 = 0LL;
  SecurityDescriptor[0] = 0LL;
  if ( ((v24 - 0x10000) & 0xFFFEFFFF) != 0 )
    a3 = pcchRemaining;
  SecurityDescriptor[1] = 0LL;
  v25 = *(_BYTE **)a3;
  if ( **(_BYTE **)a3 != 1 )
  {
    Acl = -1073741736;
    goto LABEL_10;
  }
  v26 = *((_WORD *)v25 + 1);
  if ( (v26 & 4) == 0 )
  {
    Acl = 0;
    goto LABEL_10;
  }
  if ( v26 >= 0 )
  {
    v28 = (ACL *)*((_QWORD *)v25 + 4);
  }
  else
  {
    v27 = *((unsigned int *)v25 + 4);
    if ( (_DWORD)v27 )
      v28 = (ACL *)&v25[v27];
    else
      v28 = 0LL;
  }
  Acl = RtlGetAce(v28, (unsigned __int16)v23, &Ace);
  if ( Acl >= 0 )
  {
    v29 = (unsigned __int16 *)Ace;
    v30 = *((unsigned __int16 *)Ace + 1) + 8;
    v31 = (ACL *)ExAllocatePool2(0x100uLL);
    v32 = v31;
    if ( !v31 )
      goto LABEL_65;
    Acl = RtlCreateAcl(v31, v30, v28->AclRevision);
    if ( Acl < 0
      || (Acl = RtlAddAce(v32, v28->AclRevision, 0, v29, v29[1]), Acl < 0)
      || (Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u), Acl < 0)
      || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v32, 0), Acl < 0) )
    {
LABEL_46:
      ExFreePoolWithTag(v32, 0);
      goto LABEL_10;
    }
    v36 = LocalConvertSDToStringSD_Rev1(v34, v33, v35, SecurityDescriptor, 4, P, &Ace);
    Acl = v36;
    if ( v36 > 0 )
      Acl = (unsigned __int16)v36 | 0xC0070000;
    v21 = (ACL *)P[0];
    Ace = P[0];
    if ( Acl < 0 )
    {
      if ( Acl == -1073741801 )
        goto LABEL_43;
      v37 = pszDest;
      if ( StringCchPrintfW(pszDest, 0x10uLL, L"<0x%08X>", (unsigned int)Acl) < 0 )
        v37 = (wchar_t *)L"-";
    }
    else
    {
      v37 = (wchar_t *)P[0];
    }
    v38 = -1LL;
    v39 = -1LL;
    do
      ++v39;
    while ( v37[v39] );
    v40 = v39 + 1;
    if ( 2 * (unsigned __int64)(unsigned int)(v39 + 1) > 0xFFFF )
    {
      Acl = RtlStringCbPrintfW(pszDest, 0x10uLL, L"%%%%%u", 1828LL);
      if ( Acl < 0 )
        goto LABEL_43;
      v37 = pszDest;
      do
        ++v38;
      while ( pszDest[v38] );
      v40 = v38 + 1;
    }
    v41 = v40 + 27;
    v62[1] = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !v62[1] )
    {
      Acl = -1073741801;
      goto LABEL_43;
    }
    LOWORD(v62[0]) = 0;
    WORD1(v62[0]) = 2 * v41;
    switch ( v24 )
    {
      case 65536:
        v52 = &Destination;
        break;
      case 131072:
        v52 = &v71;
        break;
      case 196608:
        v52 = &v72;
        break;
      default:
        v52 = &v73;
        break;
    }
    RtlAppendUnicodeStringToString((PUNICODE_STRING)v62, v52);
    RtlAppendUnicodeToString((PUNICODE_STRING)v62, v37);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      v21 = 0LL;
      Ace = 0LL;
    }
    ExFreePoolWithTag(v32, 0);
    goto LABEL_138;
  }
LABEL_10:
  if ( v68[1] )
    ExFreePoolWithTag(v68[1], 0);
  if ( Src[1] )
    ExFreePoolWithTag(Src[1], 0);
  if ( v62[1] )
    ExFreePoolWithTag(v62[1], 0);
  return (unsigned int)Acl;
}
