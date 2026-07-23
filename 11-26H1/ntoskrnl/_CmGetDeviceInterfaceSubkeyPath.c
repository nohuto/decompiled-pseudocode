/*
 * XREFs of _CmGetDeviceInterfaceSubkeyPath @ 0x1409623E0
 * Callers:
 *     _CmGetDeviceInterfaceClassGuid @ 0x140962ED4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140AF5078 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140962AB0 (ScanHexFormat.c)
 */

__int64 __fastcall CmGetDeviceInterfaceSubkeyPath(
        __int64 a1,
        const WCHAR *a2,
        char a3,
        const WCHAR *a4,
        char *a5,
        unsigned int a6)
{
  int v6; // edi
  _WORD *v7; // rbx
  unsigned __int64 Length; // r8
  _QWORD *v11; // rdx
  _WORD *i; // rax
  unsigned __int64 v13; // rbx
  unsigned int inited; // r9d
  WCHAR *v16; // rax
  __int64 v17; // rdi
  __int64 j; // r8
  WCHAR v19; // cx
  WCHAR *v20; // rcx
  wchar_t *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  wchar_t *v24; // rsi
  char v25; // r11
  unsigned __int64 v26; // r14
  WCHAR *k; // rcx
  WCHAR v28; // ax
  WCHAR *v29; // rax
  __int64 v30; // rcx
  signed __int64 v31; // r15
  _WORD *v32; // rdx
  __int64 v33; // r8
  __int16 v34; // ax
  _WORD *v35; // rax
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rcx
  char *v39; // r8
  char *v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rcx
  _WORD *v43; // rdx
  __int64 v44; // r8
  __int16 v45; // ax
  _WORD *v46; // rax
  int v47; // r11d
  __int64 v48; // rax
  __int64 v49; // rdx
  char *v50; // r8
  __int64 v51; // rdx
  signed __int64 v52; // rsi
  _WORD *v53; // rcx
  __int16 v54; // ax
  _WORD *v55; // rax
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  char *v58; // [rsp+88h] [rbp-78h]
  UNICODE_STRING v59; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v61; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-30h] BYREF
  WCHAR SourceString[40]; // [rsp+E0h] [rbp-20h] BYREF

  v58 = 0LL;
  v6 = 0;
  v60 = 0LL;
  v7 = 0LL;
  v59 = 0LL;
  DestinationString = 0LL;
  v61 = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, a2) < 0 || (DestinationString.MaximumLength & 0xFFFEu) < 0x62 )
    return (unsigned int)-1073741773;
  PsGetCurrentServerSiloGlobals();
  Length = DestinationString.Length;
  if ( DestinationString.Length < 8u || *(_QWORD *)L"\\??\\" != *(_QWORD *)DestinationString.Buffer )
  {
    PsGetCurrentServerSiloGlobals();
    if ( (unsigned int)Length < 8 || *(_QWORD *)L"\\\\?\\" != *v11 )
      return (unsigned int)-1073741773;
  }
  for ( i = a2 + 4; *i; ++i )
  {
    if ( *i == 92 )
    {
      if ( (unsigned int)++v6 > 1 )
        return (unsigned int)-1073741773;
      v7 = i;
    }
  }
  v13 = v7 ? v7 - a2 : Length >> 1;
  if ( v13 > 0xFFFFFFFF || (unsigned int)v13 < 0x30 )
    return (unsigned int)-1073741773;
  v16 = SourceString;
  v17 = 39LL;
  for ( j = 39LL; j != 1; --j )
  {
    v19 = *(WCHAR *)((char *)v16 + (_QWORD)a2 + 2LL * (unsigned int)v13 - 76 - (_QWORD)SourceString);
    if ( !v19 )
      break;
    *v16++ = v19;
  }
  v20 = v16 - 1;
  inited = -2147483643;
  if ( j )
  {
    v20 = v16;
    inited = 0;
  }
  *v20 = 0;
  if ( !j )
    return inited;
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  v62 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       DestinationString.Buffer,
                       DestinationString.Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       &v61,
                       (char *)&v61 + 4,
                       (char *)&v61 + 6,
                       &v62,
                       (char *)&v62 + 2,
                       (char *)&v62 + 4,
                       (char *)&v62 + 6,
                       (char *)&v62 + 8,
                       (char *)&v62 + 10,
                       (char *)&v62 + 12,
                       (char *)&v62 + 14) == -1 )
    return (unsigned int)-1073741773;
  v21 = wcschr(a2 + 4, 0x5Cu);
  v22 = -1LL;
  if ( v21 )
  {
    v24 = v21 + 1;
    v23 = v21 - a2;
  }
  else
  {
    v23 = -1LL;
    v24 = 0LL;
    do
      ++v23;
    while ( a2[v23] );
  }
  if ( v23 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (unsigned int)v23 < 0x30 )
    return (unsigned int)-1073741773;
  v25 = a3;
  v26 = (unsigned int)(v23 + 1);
  if ( a3 )
  {
    v26 += 2LL;
    if ( v24 )
    {
      do
        ++v22;
      while ( v24[v22] );
      v26 += v22;
    }
  }
  if ( v26 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( !a4 )
    goto LABEL_48;
  for ( k = (WCHAR *)a4; v17 != 1; ++k )
  {
    v28 = *(WCHAR *)((char *)k + (_QWORD)a2 + 2LL * (unsigned int)v23 - 76 - (_QWORD)a4);
    if ( !v28 )
      break;
    *k = v28;
    --v17;
  }
  v29 = k - 1;
  inited = -2147483643;
  if ( v17 )
  {
    v29 = k;
    inited = 0;
  }
  *v29 = 0;
  if ( !v17 )
  {
    *a4 = 0;
    return inited;
  }
  inited = RtlInitUnicodeStringEx(&v59, a4);
  if ( (inited & 0x80000000) == 0 )
  {
    v62 = 0LL;
    if ( (unsigned int)ScanHexFormat(
                         v59.Buffer,
                         v59.Length >> 1,
                         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                         &v60,
                         (char *)&v60 + 4,
                         (char *)&v60 + 6,
                         &v62,
                         (char *)&v62 + 2,
                         (char *)&v62 + 4,
                         (char *)&v62 + 6,
                         (char *)&v62 + 8,
                         (char *)&v62 + 10,
                         (char *)&v62 + 12,
                         (char *)&v62 + 14) == -1 )
      return (unsigned int)-1073741811;
    v25 = a3;
    BYTE8(v60) = v62;
    BYTE9(v60) = BYTE2(v62);
    BYTE10(v60) = BYTE4(v62);
    BYTE11(v60) = BYTE6(v62);
    BYTE12(v60) = BYTE8(v62);
    BYTE13(v60) = BYTE10(v62);
    BYTE14(v60) = BYTE12(v62);
    HIBYTE(v60) = BYTE14(v62);
LABEL_48:
    if ( (unsigned int)v26 > a6 )
      return (unsigned int)-1073741789;
    if ( a6 && a6 <= 0x7FFFFFFFuLL )
    {
      if ( (unsigned int)v23 >= 0x7FFFFFFFuLL )
      {
        v36 = -1073741811;
        *(_WORD *)a5 = 0;
      }
      else
      {
        v30 = a6;
        v31 = (char *)a2 - a5;
        v32 = a5;
        v33 = 0LL;
        do
        {
          if ( !(v30 + (unsigned int)v23 - (unsigned __int64)a6) )
            break;
          v34 = *(_WORD *)((char *)v32 + v31);
          if ( !v34 )
            break;
          *v32 = v34;
          ++v33;
          ++v32;
          --v30;
        }
        while ( v30 );
        v35 = v32 - 1;
        if ( v30 )
          v35 = v32;
        v36 = -2147483643;
        if ( v30 )
          v36 = 0;
        *v35 = 0;
        v37 = v33 - 1;
        if ( v30 )
          v37 = v33;
        v38 = a6 - v37;
        v39 = &a5[2 * v37];
        if ( v36 >= 0 )
          goto LABEL_63;
      }
      *(_WORD *)a5 = 0;
      v38 = a6;
      v39 = a5;
      if ( v36 == -2147483643 )
      {
LABEL_63:
        v40 = v39;
        v41 = v38;
LABEL_64:
        inited = v36;
        if ( v36 < 0 )
          return inited;
        *(_QWORD *)a5 = 0x23003F00230023LL;
        if ( !v25 )
          return inited;
        if ( (unsigned __int64)(v41 - 1) > 0x7FFFFFFE )
        {
          v47 = -1073741811;
          inited = -1073741811;
          if ( v41 )
            goto LABEL_105;
        }
        else
        {
          v42 = v41;
          v43 = v40;
          v44 = 0LL;
          do
          {
            if ( !(v42 + 2147483646 - v41) )
              break;
            v45 = *(_WORD *)((char *)v43 + (char *)L"\\#" - v40);
            if ( !v45 )
              break;
            *v43 = v45;
            ++v44;
            ++v43;
            --v42;
          }
          while ( v42 );
          v46 = v43 - 1;
          v47 = -2147483643;
          if ( v42 )
          {
            v46 = v43;
            v47 = 0;
          }
          *v46 = 0;
          v48 = v44 - 1;
          if ( v42 )
            v48 = v44;
          v49 = v41 - v48;
          v50 = &v40[2 * v48];
          if ( v42 )
            goto LABEL_76;
          if ( (v41 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
          {
            v50 = v40;
            *(_WORD *)v40 = 0;
            v49 = v41 & 0x7FFFFFFFFFFFFFFFLL;
          }
          if ( v47 == -2147483643 )
          {
LABEL_76:
            v40 = v50;
            v41 = v49;
          }
        }
        inited = v47;
        if ( v47 < 0 || !v24 )
          return inited;
        if ( (unsigned __int64)(v41 - 1) <= 0x7FFFFFFE )
        {
          v51 = v41;
          v52 = (char *)v24 - v40;
          v53 = v40;
          do
          {
            if ( !(v51 + 2147483646 - v41) )
              break;
            v54 = *(_WORD *)((char *)v53 + v52);
            if ( !v54 )
              break;
            *v53++ = v54;
            --v51;
          }
          while ( v51 );
          v55 = v53 - 1;
          inited = -2147483643;
          if ( v51 )
          {
            v55 = v53;
            inited = 0;
          }
          *v55 = 0;
          if ( !v51 && (v41 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
            *(_WORD *)v40 = 0;
          return inited;
        }
        inited = -1073741811;
        if ( !v41 )
          return inited;
LABEL_105:
        *(_WORD *)v40 = 0;
        return inited;
      }
    }
    else
    {
      v36 = -1073741811;
      inited = -1073741811;
      if ( a6 )
      {
        *(_WORD *)a5 = 0;
        return inited;
      }
    }
    v41 = (__int64)v58;
    v40 = v58;
    goto LABEL_64;
  }
  return inited;
}
