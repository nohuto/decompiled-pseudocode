/*
 * XREFs of _CmGetDeviceInterfaceRegKeyPath @ 0x1409616A0
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14089CE38 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140953200 (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCatExW @ 0x14049034C (RtlStringCchCatExW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140962AB0 (ScanHexFormat.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeyPath(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        int a4,
        __int64 a5,
        wchar_t *a6,
        unsigned int cchDest,
        _DWORD *a8)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v12; // rbx
  int v13; // r14d
  _WORD *v14; // rbx
  unsigned __int64 Length; // r8
  _QWORD *v16; // rdx
  _WORD *i; // rax
  NTSTATUS inited; // ebx
  _WORD *v20; // r12
  unsigned __int64 v21; // rbx
  WCHAR *v22; // rax
  __int64 v23; // r13
  __int64 j; // r8
  WCHAR v25; // cx
  WCHAR *v26; // rcx
  wchar_t *v27; // rax
  wchar_t *v28; // r15
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  WCHAR *k; // rcx
  WCHAR v34; // ax
  WCHAR *v35; // rax
  __int64 v36; // r9
  unsigned __int64 v37; // r14
  __int64 v38; // rcx
  signed __int64 v39; // rsi
  _WORD *v40; // rdx
  __int64 v41; // r8
  __int16 v42; // ax
  _WORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  _WORD *v46; // rdx
  _WORD *v47; // r14
  __int64 v48; // rsi
  NTSTRSAFE_PWSTR *v49; // r9
  int v50; // ecx
  __int64 v51; // rax
  int v52; // r8d
  __int64 v53; // rax
  int v54; // esi
  unsigned __int64 v55; // rax
  NTSTATUS v56; // eax
  NTSTRSAFE_PWSTR *v57; // r9
  __int64 v58; // r8
  __int64 v59; // rcx
  _WORD *v60; // rdx
  __int16 v61; // ax
  _WORD *v62; // rax
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rdx
  _WORD *v66; // r8
  __int64 v67; // rdx
  signed __int64 v68; // r15
  _WORD *v69; // rcx
  __int16 v70; // ax
  _WORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  size_t *dwFlags; // [rsp+20h] [rbp-E0h]
  size_t *dwFlagsa; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  ULONG pszFormata; // [rsp+28h] [rbp-D8h]
  char v78; // [rsp+70h] [rbp-90h]
  _WORD *P; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  int v82; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+A4h] [rbp-5Ch]
  __int64 v84; // [rsp+A8h] [rbp-58h]
  _WORD *v85; // [rsp+B0h] [rbp-50h]
  _DWORD *v86; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING v87; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v88; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v89; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v90; // [rsp+F8h] [rbp-8h]
  WCHAR v91[40]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SourceString[40]; // [rsp+160h] [rbp+60h] BYREF

  v86 = a8;
  v82 = a3;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    return 3221225485LL;
  v83 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 48 || (unsigned __int8)a3 == 50 )
  {
    v78 = 1;
    goto LABEL_5;
  }
  if ( (unsigned __int8)a3 != 49 )
    return 3221225485LL;
  v78 = 0;
LABEL_5:
  v9 = -1LL;
  v10 = -1LL;
  while ( a2[++v10] != 0 )
    ;
  v12 = 2 * v10 + 6;
  if ( v12 > 0xFFFFFFFF )
    return 3221225621LL;
  P = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( P )
  {
    v84 = (unsigned int)v12 >> 1;
    v85 = 0LL;
    v13 = 0;
    v14 = 0LL;
    v88 = 0LL;
    v87 = 0LL;
    DestinationString = 0LL;
    v89 = 0LL;
    if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 && (DestinationString.MaximumLength & 0xFFFEu) >= 0x62 )
    {
      if ( (PsGetCurrentServerSiloGlobals(), Length = DestinationString.Length, DestinationString.Length >= 8u)
        && *(_QWORD *)L"\\??\\" == *(_QWORD *)DestinationString.Buffer
        || (PsGetCurrentServerSiloGlobals(), (unsigned int)Length >= 8) && *(_QWORD *)L"\\\\?\\" == *v16 )
      {
        for ( i = a2 + 4; *i; ++i )
        {
          if ( *i == 92 )
          {
            if ( (unsigned int)++v13 > 1 )
              goto LABEL_26;
            v14 = i;
          }
        }
        v21 = v14 ? v14 - a2 : Length >> 1;
        if ( v21 <= 0xFFFFFFFF && (unsigned int)v21 >= 0x30 )
        {
          v22 = SourceString;
          v23 = 39LL;
          for ( j = 39LL; j != 1; --j )
          {
            v25 = *(WCHAR *)((char *)v22 + (_QWORD)a2 + 2LL * (unsigned int)v21 - 76 - (_QWORD)SourceString);
            if ( !v25 )
              break;
            *v22++ = v25;
          }
          v26 = v22 - 1;
          inited = -2147483643;
          if ( j )
          {
            v26 = v22;
            inited = 0;
          }
          *v26 = 0;
          if ( !j )
            goto LABEL_21;
          inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
          if ( inited < 0 )
            goto LABEL_21;
          pszFormat = (NTSTRSAFE_PCWSTR)&v89 + 3;
          dwFlags = (size_t *)((char *)&v89 + 4);
          v90 = 0LL;
          if ( (unsigned int)ScanHexFormat(
                               DestinationString.Buffer,
                               DestinationString.Length >> 1,
                               L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                               &v89) != -1 )
          {
            v27 = wcschr(a2 + 4, 0x5Cu);
            if ( v27 )
            {
              v28 = v27 + 1;
              v29 = v27 - a2;
            }
            else
            {
              v28 = 0LL;
              v29 = -1LL;
              do
                ++v29;
              while ( a2[v29] );
            }
            if ( v29 > 0xFFFFFFFF )
              goto LABEL_20;
            if ( (unsigned int)v29 >= 0x30 )
            {
              v30 = (unsigned int)(v29 + 1);
              if ( v78 )
              {
                v30 += 2LL;
                if ( v28 )
                {
                  v31 = -1LL;
                  do
                    ++v31;
                  while ( v28[v31] );
                  v30 += v31;
                }
              }
              if ( v30 <= 0xFFFFFFFF )
              {
                v32 = (unsigned int)v29;
                for ( k = v91; v23 != 1; ++k )
                {
                  v34 = *(WCHAR *)((char *)k + (_QWORD)a2 + 2 * v32 - 76 - (_QWORD)v91);
                  if ( !v34 )
                    break;
                  *k = v34;
                  --v23;
                }
                v35 = k - 1;
                inited = -2147483643;
                if ( v23 )
                {
                  v35 = k;
                  inited = 0;
                }
                *v35 = 0;
                if ( v23 )
                {
                  inited = RtlInitUnicodeStringEx(&v87, v91);
                  if ( inited < 0 )
                  {
                    v20 = P;
                    goto LABEL_72;
                  }
                  pszFormat = (NTSTRSAFE_PCWSTR)&v88 + 3;
                  dwFlags = (size_t *)((char *)&v88 + 4);
                  v90 = 0LL;
                  if ( (unsigned int)ScanHexFormat(
                                       v87.Buffer,
                                       v87.Length >> 1,
                                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                                       &v88) != -1 )
                  {
                    BYTE8(v88) = v90;
                    BYTE9(v88) = BYTE2(v90);
                    BYTE10(v88) = BYTE4(v90);
                    BYTE11(v88) = BYTE6(v90);
                    BYTE12(v88) = BYTE8(v90);
                    BYTE13(v88) = BYTE10(v90);
                    BYTE14(v88) = BYTE12(v90);
                    HIBYTE(v88) = BYTE14(v90);
                    if ( (unsigned int)v30 > (unsigned int)v84 )
                    {
                      inited = -1073741789;
                      goto LABEL_21;
                    }
                    v36 = (unsigned int)v84;
                    if ( (_DWORD)v84 )
                    {
                      v20 = P;
                      if ( v32 >= 0x7FFFFFFF )
                      {
                        inited = -1073741811;
                        *P = 0;
                      }
                      else
                      {
                        v37 = v32 - (unsigned int)v84;
                        v38 = (unsigned int)v84;
                        v39 = (char *)a2 - (char *)P;
                        v40 = P;
                        v41 = 0LL;
                        do
                        {
                          if ( !(v37 + v38) )
                            break;
                          v42 = *(_WORD *)((char *)v40 + v39);
                          if ( !v42 )
                            break;
                          *v40 = v42;
                          ++v41;
                          ++v40;
                          --v38;
                        }
                        while ( v38 );
                        v43 = v40 - 1;
                        inited = -2147483643;
                        if ( v38 )
                        {
                          v43 = v40;
                          inited = 0;
                        }
                        *v43 = 0;
                        v44 = v41 - 1;
                        if ( v38 )
                          v44 = v41;
                        v45 = v36 - v44;
                        v46 = &P[v44];
                        if ( inited >= 0 )
                          goto LABEL_70;
                      }
                      *P = 0;
                      v45 = v36;
                      v46 = P;
                      if ( inited != -2147483643 )
                      {
                        v48 = (__int64)v85;
                        v47 = v85;
LABEL_71:
                        if ( inited >= 0 )
                        {
                          *(_QWORD *)P = 0x23003F00230023LL;
                          if ( v78 )
                          {
                            if ( (unsigned __int64)(v48 - 1) > 0x7FFFFFFE )
                            {
                              inited = -1073741811;
                              v63 = -1073741811;
                              if ( v48 )
                              {
                                *v47 = 0;
                                goto LABEL_22;
                              }
                            }
                            else
                            {
                              v58 = 0LL;
                              v59 = v48;
                              v60 = v47;
                              do
                              {
                                if ( !(2147483646 - v48 + v59) )
                                  break;
                                v61 = *(_WORD *)((char *)v60 + (char *)L"\\#" - (char *)v47);
                                if ( !v61 )
                                  break;
                                *v60 = v61;
                                ++v58;
                                ++v60;
                                --v59;
                              }
                              while ( v59 );
                              v62 = v60 - 1;
                              v63 = -2147483643;
                              if ( v59 )
                              {
                                v62 = v60;
                                v63 = 0;
                              }
                              *v62 = 0;
                              v64 = v58 - 1;
                              if ( v59 )
                                v64 = v58;
                              v65 = v48 - v64;
                              v66 = &v47[v64];
                              if ( v59 )
                                goto LABEL_104;
                              if ( (v48 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
                              {
                                v66 = v47;
                                *v47 = 0;
                                v65 = v48 & 0x7FFFFFFFFFFFFFFFLL;
                              }
                              if ( v63 == -2147483643 )
                              {
LABEL_104:
                                v47 = v66;
                                v48 = v65;
                              }
                            }
                            inited = v63;
                            if ( v63 >= 0 )
                            {
                              if ( v28 )
                              {
                                if ( (unsigned __int64)(v48 - 1) > 0x7FFFFFFE )
                                {
                                  v49 = 0LL;
                                  inited = -1073741811;
                                  if ( v48 )
                                    *v47 = 0;
LABEL_73:
                                  if ( inited < 0 )
                                    goto LABEL_22;
                                  v50 = v82 & 0x200;
                                  if ( (v82 & 0x200) != 0 )
                                  {
                                    v52 = a4;
                                    if ( a4 )
                                    {
                                      if ( a4 == -1 )
                                        goto LABEL_155;
                                      v73 = -1LL;
                                      do
                                        ++v73;
                                      while ( v91[v73] );
                                      v53 = v73 + 96;
                                    }
                                    else
                                    {
                                      v72 = -1LL;
                                      do
                                        ++v72;
                                      while ( v91[v72] );
                                      v53 = v72 + 99;
                                    }
                                  }
                                  else
                                  {
                                    v51 = -1LL;
                                    do
                                      ++v51;
                                    while ( v91[v51] );
                                    v52 = a4;
                                    v53 = v51 + 48;
                                  }
                                  do
                                    ++v9;
                                  while ( v20[v9] );
                                  v54 = v83;
                                  v55 = v9 + v53 + 1;
                                  if ( v83 == 49 || v83 == 48 )
                                  {
LABEL_80:
                                    if ( v55 > 0xFFFFFFFF )
                                    {
                                      inited = -1073741675;
                                    }
                                    else
                                    {
                                      inited = 0;
                                      if ( v86 )
                                        *v86 = v55;
                                      if ( (unsigned int)v55 <= cchDest )
                                      {
                                        if ( v50 )
                                        {
                                          if ( v52 )
                                          {
                                            if ( v52 == -1 )
                                              goto LABEL_87;
                                            v56 = RtlStringCchPrintfExW(
                                                    a6,
                                                    cchDest,
                                                    0LL,
                                                    0LL,
                                                    0x800u,
                                                    L"%s\\%04u\\%s\\%s\\%s");
                                          }
                                          else
                                          {
                                            v56 = RtlStringCchPrintfExW(
                                                    a6,
                                                    cchDest,
                                                    0LL,
                                                    0LL,
                                                    0x800u,
                                                    L"%s\\%s\\%s\\%s");
                                          }
                                        }
                                        else
                                        {
                                          v56 = RtlStringCchPrintfExW(a6, cchDest, 0LL, 0LL, 0x800u, L"%s\\%s\\%s");
                                        }
                                        inited = v56;
LABEL_87:
                                        if ( inited >= 0 && v54 == 50 )
                                        {
                                          inited = RtlStringCchCatExW(
                                                     a6,
                                                     cchDest,
                                                     L"\\",
                                                     v49,
                                                     dwFlags,
                                                     (ULONG)pszFormat);
                                          if ( inited >= 0 )
                                            inited = RtlStringCchCatExW(
                                                       a6,
                                                       cchDest,
                                                       L"Device Parameters",
                                                       v57,
                                                       dwFlagsa,
                                                       pszFormata);
                                        }
                                        goto LABEL_22;
                                      }
                                      inited = -1073741789;
                                    }
LABEL_22:
                                    ExFreePoolWithTag(v20, 0);
                                    return (unsigned int)inited;
                                  }
                                  if ( v83 == 50 )
                                  {
                                    v55 += 18LL;
                                    goto LABEL_80;
                                  }
LABEL_155:
                                  inited = -1073741811;
                                  goto LABEL_22;
                                }
                                v67 = v48;
                                v68 = (char *)v28 - (char *)v47;
                                v69 = v47;
                                do
                                {
                                  if ( !(2147483646 - v48 + v67) )
                                    break;
                                  v70 = *(_WORD *)((char *)v69 + v68);
                                  if ( !v70 )
                                    break;
                                  *v69++ = v70;
                                  --v67;
                                }
                                while ( v67 );
                                v71 = v69 - 1;
                                inited = -2147483643;
                                if ( v67 )
                                {
                                  v71 = v69;
                                  inited = 0;
                                }
                                *v71 = 0;
                                if ( !v67 )
                                {
                                  v49 = 0LL;
                                  if ( (v48 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
                                    *v47 = 0;
                                  goto LABEL_73;
                                }
                              }
                            }
                          }
                        }
LABEL_72:
                        v49 = 0LL;
                        goto LABEL_73;
                      }
LABEL_70:
                      v47 = v46;
                      v48 = v45;
                      goto LABEL_71;
                    }
                  }
                  inited = -1073741811;
                }
                else
                {
                  v91[0] = 0;
                }
LABEL_21:
                v20 = P;
                goto LABEL_22;
              }
LABEL_20:
              inited = -1073741675;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_26:
    inited = -1073741773;
    goto LABEL_21;
  }
  return 3221225495LL;
}
