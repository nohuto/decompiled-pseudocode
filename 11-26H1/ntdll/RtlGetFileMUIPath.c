/*
 * XREFs of RtlGetFileMUIPath @ 0x1800206B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetMUIRedirectedFilePath @ 0x1800202D0 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetFullPathName_U @ 0x1800212E0 (RtlGetFullPathName_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpMUIGetAllInstalledLang @ 0x180022294 (RtlpMUIGetAllInstalledLang.c)
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     RtlIntegerToUnicode @ 0x180027580 (RtlIntegerToUnicode.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpCalcAllocSize @ 0x18004D51C (LdrpCalcAllocSize.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlGetFileMUIPath(
        ULONG Flags,
        PCWSTR FilePath,
        PWSTR Language,
        PULONG LanguageLength,
        PWSTR FileMUIPath,
        PULONG FileMUIPathLength,
        PULONGLONG Enumerator)
{
  ULONGLONG v8; // rdi
  ULONG v9; // eax
  ULONGLONG v10; // r13
  unsigned __int64 v11; // r14
  WCHAR *v12; // rsi
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  PVOID Heap_0; // rax
  const WCHAR *v16; // r10
  ULONGLONG v17; // rax
  __int16 v18; // ax
  int v19; // edi
  bool v20; // r12
  SIZE_T v21; // rax
  WCHAR *v22; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  ULONGLONG v24; // rax
  ULONGLONG v25; // r15
  unsigned __int64 v26; // r14
  wchar_t *v27; // rbx
  unsigned __int64 i; // rax
  wchar_t *v29; // rdi
  size_t v30; // rax
  int MUIRedirectedFilePath; // ecx
  __int64 v32; // rax
  bool v33; // zf
  wchar_t *v34; // rdx
  bool v35; // di
  ULONG v36; // ecx
  wchar_t *v37; // rax
  wchar_t *v38; // rbx
  ULONGLONG v39; // r11
  __int64 v40; // rcx
  ULONGLONG v41; // r9
  ULONGLONG v42; // rax
  ULONGLONG v43; // rdx
  SIZE_T v44; // rax
  WCHAR *v45; // rax
  unsigned __int64 k; // rcx
  const wchar_t *v47; // rax
  __int64 v48; // rax
  wchar_t *v49; // rbx
  char v50; // al
  __int64 v51; // rcx
  wchar_t *v52; // rbx
  unsigned __int64 j; // rcx
  __int64 v54; // rax
  size_t v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // rax
  int v60; // eax
  __int64 v61; // rax
  wchar_t *v62; // rbx
  int *v63; // rdx
  wchar_t *v64; // r12
  unsigned __int64 v65; // rbx
  char v66; // bl
  size_t v67; // rax
  unsigned __int64 v68; // rax
  size_t v69; // rax
  size_t v70; // rax
  PVOID v71; // rax
  char v72; // [rsp+40h] [rbp-C0h]
  wchar_t *String2[2]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength[2]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v75; // [rsp+68h] [rbp-98h] BYREF
  ULONG NumberOfLanguages; // [rsp+70h] [rbp-90h] BYREF
  ULONGLONG v77; // [rsp+78h] [rbp-88h]
  PVOID v78; // [rsp+80h] [rbp-80h]
  DWORD Value; // [rsp+88h] [rbp-78h] BYREF
  ULONG v80; // [rsp+8Ch] [rbp-74h]
  PVOID v81; // [rsp+90h] [rbp-70h]
  wchar_t *v82; // [rsp+98h] [rbp-68h]
  PULONG v83; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING v84; // [rsp+B0h] [rbp-50h] BYREF
  DWORD Lcid; // [rsp+C0h] [rbp-40h] BYREF
  PWSTR FilePart; // [rsp+C8h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp-30h]
  ULONGLONG v88; // [rsp+D8h] [rbp-28h]
  PWSTR v89; // [rsp+E0h] [rbp-20h]
  __int64 v90; // [rsp+E8h] [rbp-18h] BYREF
  PULONG v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  __int64 v93; // [rsp+100h] [rbp+0h] BYREF
  PULONGLONG v94; // [rsp+108h] [rbp+8h]
  wchar_t String[4]; // [rsp+110h] [rbp+10h] BYREF
  __int16 v96; // [rsp+118h] [rbp+18h]

  v89 = FileMUIPath;
  v91 = FileMUIPathLength;
  *(_QWORD *)String = 0LL;
  v96 = 0;
  v8 = Flags;
  v83 = LanguageLength;
  v9 = Flags >> 10;
  v10 = 0LL;
  LOBYTE(v9) = (Flags & 0x400) != 0;
  v82 = Language;
  v94 = Enumerator;
  v11 = 0LL;
  v77 = 0LL;
  v12 = 0LL;
  *(_QWORD *)ReturnLength = 0LL;
  v92 = 0LL;
  v88 = 0LL;
  v93 = 0LL;
  *(_QWORD *)&v84.Length = 0LL;
  Lcid = 0;
  v75 = 0LL;
  v78 = 0LL;
  NumberOfLanguages = 0;
  Value = 0;
  BaseAddress = 0LL;
  FilePart = 0LL;
  v90 = 0LL;
  v80 = v9;
  *(_OWORD *)String2 = 0LL;
  if ( !FilePath || !Enumerator )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v90);
  v14 = result;
  if ( result >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
    v81 = Heap_0;
    if ( !Heap_0 )
      return -1073741801;
    if ( RtlGetFullPathName_U(FilePath, 0x208u, (PWSTR)Heap_0, &FilePart) - 1 > 0x206 )
      goto LABEL_11;
    if ( !FilePart )
      goto LABEL_11;
    v16 = (const WCHAR *)v81;
    if ( FilePart <= v81 || FilePart >= (PWSTR)((char *)v81 + 520) )
      goto LABEL_11;
    *(FilePart - 1) = 0;
    v17 = *Enumerator;
    if ( *Enumerator )
    {
      v25 = v88;
      v39 = *Enumerator & 0xF;
      v40 = 0LL;
      v92 = v39;
      v41 = v17 & 0xF;
      v42 = v17 >> 4;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v43 = v42 & 0xFFF;
            v42 >>= 12;
            v41 ^= v43;
            if ( v40 )
              break;
            v25 = v43;
            v40 = 1LL;
          }
          if ( v40 != 2 )
            break;
          v11 = (unsigned int)v43;
          v77 = v43;
          v40 = 3LL;
        }
        if ( v40 == 3 )
          break;
        if ( (unsigned __int64)++v40 >= 4 )
          goto LABEL_102;
      }
      v10 = v43;
LABEL_102:
      if ( ((v42 ^ v41) & 0xFFF) != 0 )
      {
        v14 = -1073741776;
        goto LABEL_44;
      }
      if ( v10 > v11 )
      {
        v14 = -2147483642;
        goto LABEL_44;
      }
      if ( (v25 & 0x20) != 0 )
        v19 = 2;
      else
        v19 = (v25 & 0x40 | 0x20) >> 5;
      v20 = (v25 & 4) == 0;
      v72 = v39 & 1;
      goto LABEL_30;
    }
    if ( (v8 & 0xC) == 0xC
      || (v8 & 0x10) != 0 && (v8 & 0x20) != 0
      || (v8 & 0x10) != 0 && (v8 & 0x40) != 0
      || (v8 & 0x20) != 0 && (v8 & 0x40) != 0
      || (v8 & 0x200) != 0 && (v8 & 0x100) != 0
      || (v8 & 0x10) != 0 && (v8 & 0x20) != 0 && (v8 & 0x40) != 0 )
    {
LABEL_11:
      v14 = -1073741811;
LABEL_44:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v81);
      return v14;
    }
    v18 = v8;
    v88 = v8;
    if ( (v8 & 0x20) != 0 )
      v19 = 2;
    else
      v19 = (v8 & 0x40 | 0x20) >> 5;
    v20 = (v18 & 4) == 0;
    if ( (v18 & 0x200) != 0 )
    {
      v72 = 0;
    }
    else if ( (v18 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(FilePath) )
    {
      v72 = 1;
      v92 = 1LL;
    }
    else
    {
      v72 = 0;
    }
    switch ( v19 )
    {
      case 1:
        ReturnLength[0] = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, ReturnLength);
        if ( !ReturnLength[0] )
          goto LABEL_44;
        v21 = 2LL * ReturnLength[0];
        v75 = 0LL;
        if ( !is_mul_ok(2uLL, ReturnLength[0]) || !v21 )
        {
          v14 = -1073741675;
          goto LABEL_44;
        }
        v22 = (WCHAR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v21);
        v75 = v22;
        v12 = v22;
        if ( !v22 )
        {
          v14 = -1073741801;
          goto LABEL_40;
        }
        ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v22, ReturnLength);
        if ( ThreadPreferredUILanguages < 0 )
        {
          v14 = ThreadPreferredUILanguages;
          goto LABEL_40;
        }
        v24 = NumberOfLanguages;
        break;
      case 2:
        RtlpMUIGetAllInstalledLang(v90, &v75, ReturnLength);
        v24 = *(_QWORD *)ReturnLength;
        v12 = v75;
        break;
      case 3:
        RtlpMUIEnumerateFolder((PCWSTR)v81);
        v24 = *(_QWORD *)ReturnLength;
        break;
      default:
        goto LABEL_29;
    }
    v77 = v24;
LABEL_29:
    v25 = v88;
    v16 = (const WCHAR *)v81;
LABEL_30:
    if ( v19 == 1 )
    {
      if ( v12 )
        goto LABEL_32;
      ReturnLength[0] = 0;
      RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, ReturnLength);
      if ( !ReturnLength[0] )
        goto LABEL_80;
      v44 = LdrpCalcAllocSize(ReturnLength[0], 2LL);
      if ( !v44 )
      {
        v14 = -1073741675;
LABEL_42:
        if ( v78 )
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v78);
        goto LABEL_44;
      }
      v45 = (WCHAR *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v44);
      v12 = v45;
      if ( v45 && RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, v45, ReturnLength) >= 0 )
      {
LABEL_32:
        v26 = v77;
      }
      else
      {
LABEL_80:
        v26 = v77;
        v10 = v77;
      }
      v27 = v12;
      for ( i = 0LL; i < v10; v27 += v51 + 1 )
      {
        if ( !v27 )
          break;
        if ( !*v27 )
          break;
        ++i;
        v51 = -1LL;
        do
          v33 = v27[++v51] == 0;
        while ( !v33 );
      }
      v29 = String2[1];
      while ( v10 < v26 )
      {
        if ( !*v27 )
          goto LABEL_154;
        HIDWORD(String2[0]) = 0;
        v29 = v27;
        String2[1] = v27;
        v30 = 2 * wcslen(v27);
        if ( v30 >= 0xFFFE )
          LOWORD(v30) = -4;
        LOWORD(String2[0]) = v30;
        WORD1(String2[0]) = v30 + 2;
        v84 = *(_UNICODE_STRING *)String2;
        MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v84, (const WCHAR *)v81, FilePart, v91, v72, v80, v89);
        if ( (int)(MUIRedirectedFilePath + 0x80000000) < 0 || MUIRedirectedFilePath == -1073741789 )
          goto LABEL_154;
        ++v10;
        v32 = -1LL;
        do
          v33 = v27[++v32] == 0;
        while ( !v33 );
        v27 += v32 + 1;
      }
      goto LABEL_36;
    }
    if ( v19 == 2 )
    {
      if ( !v12 )
      {
        RtlpMUIGetAllInstalledLang(v90, &v75, &v93);
        v12 = v75;
      }
      v52 = v12;
      for ( j = 0LL; j < v10; v52 += v54 + 1 )
      {
        if ( !v52 )
          break;
        if ( !*v52 )
          break;
        ++j;
        v54 = -1LL;
        do
          v33 = v52[++v54] == 0;
        while ( !v33 );
      }
      v29 = String2[1];
      v26 = v77;
      while ( v10 < v26 )
      {
        if ( !v52 || !*v52 )
          goto LABEL_154;
        HIDWORD(String2[0]) = 0;
        v29 = v52;
        String2[1] = v52;
        v55 = 2 * wcslen(v52);
        if ( v55 >= 0xFFFE )
          LOWORD(v55) = -4;
        LOWORD(String2[0]) = v55;
        WORD1(String2[0]) = v55 + 2;
        v84 = *(_UNICODE_STRING *)String2;
        v56 = RtlpGetMUIRedirectedFilePath(&v84, (const WCHAR *)v81, FilePart, v91, v72, v80, v89);
        if ( (int)(v56 + 0x80000000) < 0 || v56 == -1073741789 )
        {
LABEL_154:
          v63 = (int *)v83;
          if ( !v82 && !v83 )
            goto LABEL_166;
          if ( v20 )
            goto LABEL_156;
          v66 = RtlCultureNameToLCID((PUNICODE_STRING)String2, &Lcid);
          if ( v66 )
            v66 = (int)RtlIntegerToUnicode((unsigned __int16)Lcid, 16LL, 4294967292LL, String) >= 0;
          v29 = String;
          v67 = wcslen(String);
          v63 = (int *)v83;
          v68 = 2 * v67;
          if ( v68 >= 0xFFFE )
            LOWORD(v68) = -4;
          LOWORD(String2[0]) = v68;
          if ( v66 )
          {
LABEL_156:
            v64 = v82;
            if ( v63 )
            {
              if ( v82 )
              {
                if ( *v63 > (unsigned int)(LOWORD(String2[0]) >> 1) )
                {
                  v65 = LOWORD(String2[0]);
                  memmove(v82, v29, LOWORD(String2[0]));
                  v63 = (int *)v83;
                  v64[v65 >> 1] = 0;
                }
              }
              else
              {
                *v63 = 85;
              }
            }
          }
          else
          {
LABEL_166:
            v64 = v82;
          }
          if ( v89 && (v64 || !v63) )
          {
            v14 = 0;
            goto LABEL_37;
          }
          v14 = 0;
          goto LABEL_38;
        }
        ++v10;
        v57 = -1LL;
        do
          v33 = v52[++v57] == 0;
        while ( !v33 );
        v52 += v57 + 1;
      }
      goto LABEL_36;
    }
    v34 = (wchar_t *)v78;
    if ( v78 )
    {
      v26 = v77;
    }
    else
    {
      v50 = RtlpMUIEnumerateFolder(v16);
      v26 = v77;
      v34 = (wchar_t *)v78;
      if ( !v50 )
        v10 = v77;
    }
    v35 = 0;
    if ( v10 || (v36 = *v83) == 0 || !v82 )
    {
LABEL_89:
      v38 = v34;
      for ( k = 0LL; k < v10; v38 += v58 + 1 )
      {
        if ( !v38 )
          break;
        if ( !*v38 )
          break;
        ++k;
        v58 = -1LL;
        do
          v33 = v38[++v58] == 0;
        while ( !v33 );
      }
LABEL_90:
      v47 = String2[1];
      v75 = String2[1];
      while ( v10 < v26 )
      {
        if ( v35 && wcsicmp(v38, v47) )
        {
          ++v10;
          v48 = -1LL;
          do
            v33 = v38[++v48] == 0;
          while ( !v33 );
          v49 = &v38[v48];
          v47 = v75;
          v38 = v49 + 1;
        }
        else
        {
          v75 = v38;
          String2[0] = 0LL;
          String2[1] = v38;
          if ( v38 )
          {
            v59 = 2 * wcslen(v38);
            if ( v59 >= 0xFFFE )
              LOWORD(v59) = -4;
            LOWORD(String2[0]) = v59;
            WORD1(String2[0]) = v59 + 2;
          }
          v84 = *(_UNICODE_STRING *)String2;
          v60 = RtlpGetMUIRedirectedFilePath(&v84, (const WCHAR *)v81, FilePart, v91, v72, v80, v89);
          if ( (int)(v60 + 0x80000000) < 0 || v60 == -1073741789 )
          {
            v29 = v75;
            goto LABEL_154;
          }
          ++v10;
          v61 = -1LL;
          do
            v33 = v38[++v61] == 0;
          while ( !v33 );
          v62 = &v38[v61];
          v47 = v75;
          v38 = v62 + 1;
        }
      }
LABEL_36:
      v14 = -2147483642;
LABEL_37:
      *v94 = v92 | ((v26 ^ v92 ^ v25 ^ (v10 + 1)) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                  * (v25 | ((v26 | ((v10 + 1) << 12)) << 24) | 0xCB7000));
LABEL_38:
      if ( BaseAddress )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      goto LABEL_40;
    }
    v37 = v82;
    while ( *v37 )
    {
      ++v37;
      if ( !--v36 )
      {
        v38 = v34;
        goto LABEL_90;
      }
    }
    if ( v20 )
    {
      String2[1] = v82;
      v69 = 2 * wcslen(v82);
      if ( v69 >= 0xFFFE )
        LOWORD(v69) = -4;
      LOWORD(String2[0]) = v69;
      WORD1(String2[0]) = v69 + 2;
      if ( RtlCultureNameToLCID((PUNICODE_STRING)String2, &Value) )
      {
        v38 = (wchar_t *)v78;
        v35 = 1;
        goto LABEL_90;
      }
      v34 = (wchar_t *)v78;
      goto LABEL_89;
    }
    *(_DWORD *)(&v84.MaximumLength + 1) = 0;
    v84.Buffer = v82;
    v70 = 2 * wcslen(v82);
    if ( v70 >= 0xFFFE )
      LOWORD(v70) = -4;
    v84.Length = v70;
    v84.MaximumLength = v70 + 2;
    if ( RtlUnicodeStringToInteger(&v84, 0x10u, &Value) < 0 )
    {
LABEL_185:
      v38 = (wchar_t *)v78;
      goto LABEL_90;
    }
    v71 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    BaseAddress = v71;
    if ( v71 )
    {
      String2[1] = (wchar_t *)v71;
      LODWORD(String2[0]) = 11141120;
      v35 = RtlLCIDToCultureName(Value, (PUNICODE_STRING)String2) != 0;
      goto LABEL_185;
    }
LABEL_40:
    if ( v12 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v12);
    goto LABEL_42;
  }
  return result;
}
