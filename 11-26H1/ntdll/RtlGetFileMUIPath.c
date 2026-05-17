/*
 * XREFs of RtlGetFileMUIPath @ 0x180035550
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCalcAllocSize @ 0x180001DEC (LdrpCalcAllocSize.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180035170 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetFullPathName_U @ 0x180036180 (RtlGetFullPathName_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpMUIGetAllInstalledLang @ 0x180037134 (RtlpMUIGetAllInstalledLang.c)
 *     RtlIntegerToUnicode @ 0x18003D010 (RtlIntegerToUnicode.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlGetFileMUIPath(
        unsigned int a1,
        __int64 a2,
        wchar_t *a3,
        int *a4,
        void *a5,
        _DWORD *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  wchar_t *v12; // rsi
  __int64 result; // rax
  unsigned int v14; // ebx
  const wchar_t *Heap_0; // rax
  const wchar_t *v16; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int16 v19; // ax
  int v20; // edi
  bool v21; // r12
  __int64 v22; // rax
  wchar_t *v23; // rax
  int ThreadPreferredUILanguages; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  unsigned __int64 v27; // r14
  wchar_t *v28; // rbx
  unsigned __int64 i; // rax
  wchar_t *v30; // rdi
  size_t v31; // rax
  int MUIRedirectedFilePath; // ecx
  __int64 v33; // rax
  bool v34; // zf
  wchar_t *v35; // rdx
  bool v36; // di
  int v37; // ecx
  wchar_t *v38; // rax
  wchar_t *v39; // rbx
  __int64 v40; // r11
  __int64 v41; // rcx
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  wchar_t *v46; // rax
  unsigned __int64 k; // rcx
  const wchar_t *v48; // rax
  __int64 v49; // rax
  wchar_t *v50; // rbx
  char v51; // al
  __int64 v52; // rcx
  wchar_t *v53; // rbx
  unsigned __int64 j; // rcx
  __int64 v55; // rax
  size_t v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rax
  size_t v60; // rax
  int v61; // eax
  __int64 v62; // rax
  wchar_t *v63; // rbx
  int *v64; // rdx
  wchar_t *v65; // r12
  unsigned __int64 v66; // rbx
  char v67; // bl
  size_t v68; // rax
  unsigned __int64 v69; // rax
  size_t v70; // rax
  size_t v71; // rax
  wchar_t *v72; // rax
  char v73; // [rsp+40h] [rbp-C0h]
  wchar_t *String2[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v75; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v76; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v77; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v78; // [rsp+78h] [rbp-88h]
  wchar_t *String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v80; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v81; // [rsp+8Ch] [rbp-74h]
  const wchar_t *v82; // [rsp+90h] [rbp-70h]
  wchar_t *v83; // [rsp+98h] [rbp-68h]
  int *v84; // [rsp+A0h] [rbp-60h]
  __int128 v85; // [rsp+B0h] [rbp-50h] BYREF
  int v86; // [rsp+C0h] [rbp-40h] BYREF
  const wchar_t *v87; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v88; // [rsp+D0h] [rbp-30h]
  __int64 v89; // [rsp+D8h] [rbp-28h]
  void *v90; // [rsp+E0h] [rbp-20h]
  __int64 v91; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD *v92; // [rsp+F0h] [rbp-10h]
  __int64 v93; // [rsp+F8h] [rbp-8h]
  __int64 v94; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 *v95; // [rsp+108h] [rbp+8h]
  wchar_t String[4]; // [rsp+110h] [rbp+10h] BYREF
  __int16 v97; // [rsp+118h] [rbp+18h]

  v90 = a5;
  v92 = a6;
  *(_QWORD *)String = 0LL;
  v97 = 0;
  v8 = a1;
  v84 = a4;
  v9 = a1 >> 10;
  v10 = 0LL;
  LOBYTE(v9) = (a1 & 0x400) != 0;
  v83 = a3;
  v95 = a7;
  v11 = 0LL;
  v78 = 0LL;
  v12 = 0LL;
  v75 = 0LL;
  v93 = 0LL;
  v89 = 0LL;
  v94 = 0LL;
  *(_QWORD *)&v85 = 0LL;
  v86 = 0;
  v76 = 0LL;
  String1 = 0LL;
  v77 = 0;
  v80 = 0;
  v88 = 0LL;
  v87 = 0LL;
  v91 = 0LL;
  v81 = v9;
  *(_OWORD *)String2 = 0LL;
  if ( !a2 || !a7 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v91);
  v14 = result;
  if ( (int)result >= 0 )
  {
    Heap_0 = (const wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 522LL);
    v82 = Heap_0;
    if ( !Heap_0 )
      return 3221225495LL;
    if ( (unsigned int)RtlGetFullPathName_U(a2, 520LL, Heap_0, &v87) - 1 > 0x206 )
      goto LABEL_11;
    if ( !v87 )
      goto LABEL_11;
    v16 = v82;
    if ( v87 <= v82 || v87 >= v82 + 260 )
      goto LABEL_11;
    *((_WORD *)v87 - 1) = 0;
    v17 = *a7;
    if ( *a7 )
    {
      v26 = v89;
      v40 = *a7 & 0xF;
      v41 = 0LL;
      v93 = v40;
      v42 = v17 & 0xF;
      v43 = v17 >> 4;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v44 = v43 & 0xFFF;
            v43 >>= 12;
            v42 ^= v44;
            if ( v41 )
              break;
            v26 = v44;
            v41 = 1LL;
          }
          if ( v41 != 2 )
            break;
          v11 = (unsigned int)v44;
          v78 = v44;
          v41 = 3LL;
        }
        if ( v41 == 3 )
          break;
        if ( (unsigned __int64)++v41 >= 4 )
          goto LABEL_102;
      }
      v10 = v44;
LABEL_102:
      if ( ((v43 ^ v42) & 0xFFF) != 0 )
      {
        v14 = -1073741776;
        goto LABEL_44;
      }
      if ( v10 > v11 )
      {
        v14 = -2147483642;
        goto LABEL_44;
      }
      if ( (v26 & 0x20) != 0 )
        v20 = 2;
      else
        v20 = (unsigned __int64)(v26 & 0x40 | 0x20) >> 5;
      v21 = (v26 & 4) == 0;
      v73 = v40 & 1;
      goto LABEL_30;
    }
    if ( (v8 & 0xC) == 0xC
      || (v8 & 0x10) != 0 && (v8 & 0x20) != 0
      || (v18 = v8 & 0x40, (v8 & 0x10) != 0) && (v8 & 0x40) != 0
      || (v8 & 0x20) != 0 && (v8 & 0x40) != 0
      || (v8 & 0x200) != 0 && (v8 & 0x100) != 0
      || (v8 & 0x10) != 0 && (v8 & 0x20) != 0 && (v8 & 0x40) != 0 )
    {
LABEL_11:
      v14 = -1073741811;
LABEL_44:
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v82);
      return v14;
    }
    v19 = v8;
    v89 = v8;
    if ( (v8 & 0x20) != 0 )
      v20 = 2;
    else
      v20 = (unsigned __int64)(v8 & 0x40 | 0x20) >> 5;
    v21 = (v19 & 4) == 0;
    if ( (v19 & 0x200) != 0 )
    {
      v73 = 0;
    }
    else if ( (v19 & 0x100) != 0 || (unsigned __int8)RtlpFileIsWin32WithRCManifest(a2, v18) )
    {
      v73 = 1;
      v93 = 1LL;
    }
    else
    {
      v73 = 0;
    }
    switch ( v20 )
    {
      case 1:
        LODWORD(v75) = 0;
        RtlGetThreadPreferredUILanguages(48, &v77, 0LL, &v75);
        if ( !(_DWORD)v75 )
          goto LABEL_44;
        v22 = 2LL * (unsigned int)v75;
        v76 = 0LL;
        if ( !is_mul_ok(2uLL, (unsigned int)v75) || !v22 )
        {
          v14 = -1073741675;
          goto LABEL_44;
        }
        v23 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v22);
        v76 = v23;
        v12 = v23;
        if ( !v23 )
        {
          v14 = -1073741801;
          goto LABEL_40;
        }
        ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48, &v77, v23, &v75);
        if ( ThreadPreferredUILanguages < 0 )
        {
          v14 = ThreadPreferredUILanguages;
          goto LABEL_40;
        }
        v25 = v77;
        break;
      case 2:
        RtlpMUIGetAllInstalledLang(v91, &v76, &v75);
        v25 = v75;
        v12 = v76;
        break;
      case 3:
        RtlpMUIEnumerateFolder(v82, &v75, &String1);
        v25 = v75;
        break;
      default:
        goto LABEL_29;
    }
    v78 = v25;
LABEL_29:
    v26 = v89;
    v16 = v82;
LABEL_30:
    if ( v20 == 1 )
    {
      if ( v12 )
        goto LABEL_32;
      LODWORD(v75) = 0;
      RtlGetThreadPreferredUILanguages(48, &v77, 0LL, &v75);
      if ( !(_DWORD)v75 )
        goto LABEL_80;
      v45 = LdrpCalcAllocSize(v75, 2uLL);
      if ( !v45 )
      {
        v14 = -1073741675;
LABEL_42:
        if ( String1 )
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, String1);
        goto LABEL_44;
      }
      v46 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, v45);
      v12 = v46;
      if ( v46 && (int)RtlGetThreadPreferredUILanguages(48, &v77, v46, &v75) >= 0 )
      {
LABEL_32:
        v27 = v78;
      }
      else
      {
LABEL_80:
        v27 = v78;
        v10 = v78;
      }
      v28 = v12;
      for ( i = 0LL; i < v10; v28 += v52 + 1 )
      {
        if ( !v28 )
          break;
        if ( !*v28 )
          break;
        ++i;
        v52 = -1LL;
        do
          v34 = v28[++v52] == 0;
        while ( !v34 );
      }
      v30 = String2[1];
      while ( v10 < v27 )
      {
        if ( !*v28 )
          goto LABEL_154;
        HIDWORD(String2[0]) = 0;
        v30 = v28;
        String2[1] = v28;
        v31 = 2 * wcslen(v28);
        if ( v31 >= 0xFFFE )
          LOWORD(v31) = -4;
        LOWORD(String2[0]) = v31;
        WORD1(String2[0]) = v31 + 2;
        v85 = *(_OWORD *)String2;
        MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath((__int64)&v85, v82, v87, v92, v73, v81, v90);
        if ( (int)(MUIRedirectedFilePath + 0x80000000) < 0 || MUIRedirectedFilePath == -1073741789 )
          goto LABEL_154;
        ++v10;
        v33 = -1LL;
        do
          v34 = v28[++v33] == 0;
        while ( !v34 );
        v28 += v33 + 1;
      }
      goto LABEL_36;
    }
    if ( v20 == 2 )
    {
      if ( !v12 )
      {
        RtlpMUIGetAllInstalledLang(v91, &v76, &v94);
        v12 = v76;
      }
      v53 = v12;
      for ( j = 0LL; j < v10; v53 += v55 + 1 )
      {
        if ( !v53 )
          break;
        if ( !*v53 )
          break;
        ++j;
        v55 = -1LL;
        do
          v34 = v53[++v55] == 0;
        while ( !v34 );
      }
      v30 = String2[1];
      v27 = v78;
      while ( v10 < v27 )
      {
        if ( !v53 || !*v53 )
          goto LABEL_154;
        HIDWORD(String2[0]) = 0;
        v30 = v53;
        String2[1] = v53;
        v56 = 2 * wcslen(v53);
        if ( v56 >= 0xFFFE )
          LOWORD(v56) = -4;
        LOWORD(String2[0]) = v56;
        WORD1(String2[0]) = v56 + 2;
        v85 = *(_OWORD *)String2;
        v57 = RtlpGetMUIRedirectedFilePath((__int64)&v85, v82, v87, v92, v73, v81, v90);
        if ( (int)(v57 + 0x80000000) < 0 || v57 == -1073741789 )
        {
LABEL_154:
          v64 = v84;
          if ( !v83 && !v84 )
            goto LABEL_166;
          if ( v21 )
            goto LABEL_156;
          v67 = RtlCultureNameToLCID((unsigned __int16 *)String2, &v86);
          if ( v67 )
            v67 = (int)RtlIntegerToUnicode((unsigned __int16)v86, 16LL, 4294967292LL, String) >= 0;
          v30 = String;
          v68 = wcslen(String);
          v64 = v84;
          v69 = 2 * v68;
          if ( v69 >= 0xFFFE )
            LOWORD(v69) = -4;
          LOWORD(String2[0]) = v69;
          if ( v67 )
          {
LABEL_156:
            v65 = v83;
            if ( v64 )
            {
              if ( v83 )
              {
                if ( *v64 > (unsigned int)(LOWORD(String2[0]) >> 1) )
                {
                  v66 = LOWORD(String2[0]);
                  memmove(v83, v30, LOWORD(String2[0]));
                  v64 = v84;
                  v65[v66 >> 1] = 0;
                }
              }
              else
              {
                *v64 = 85;
              }
            }
          }
          else
          {
LABEL_166:
            v65 = v83;
          }
          if ( v90 && (v65 || !v64) )
          {
            v14 = 0;
            goto LABEL_37;
          }
          v14 = 0;
          goto LABEL_38;
        }
        ++v10;
        v58 = -1LL;
        do
          v34 = v53[++v58] == 0;
        while ( !v34 );
        v53 += v58 + 1;
      }
      goto LABEL_36;
    }
    v35 = String1;
    if ( String1 )
    {
      v27 = v78;
    }
    else
    {
      v51 = RtlpMUIEnumerateFolder(v16, &v85, &String1);
      v27 = v78;
      v35 = String1;
      if ( !v51 )
        v10 = v78;
    }
    v36 = 0;
    if ( v10 || (v37 = *v84) == 0 || !v83 )
    {
LABEL_89:
      v39 = v35;
      for ( k = 0LL; k < v10; v39 += v59 + 1 )
      {
        if ( !v39 )
          break;
        if ( !*v39 )
          break;
        ++k;
        v59 = -1LL;
        do
          v34 = v39[++v59] == 0;
        while ( !v34 );
      }
LABEL_90:
      v48 = String2[1];
      v76 = String2[1];
      while ( v10 < v27 )
      {
        if ( v36 && wcsicmp(v39, v48) )
        {
          ++v10;
          v49 = -1LL;
          do
            v34 = v39[++v49] == 0;
          while ( !v34 );
          v50 = &v39[v49];
          v48 = v76;
          v39 = v50 + 1;
        }
        else
        {
          v76 = v39;
          String2[0] = 0LL;
          String2[1] = v39;
          if ( v39 )
          {
            v60 = 2 * wcslen(v39);
            if ( v60 >= 0xFFFE )
              LOWORD(v60) = -4;
            LOWORD(String2[0]) = v60;
            WORD1(String2[0]) = v60 + 2;
          }
          v85 = *(_OWORD *)String2;
          v61 = RtlpGetMUIRedirectedFilePath((__int64)&v85, v82, v87, v92, v73, v81, v90);
          if ( (int)(v61 + 0x80000000) < 0 || v61 == -1073741789 )
          {
            v30 = v76;
            goto LABEL_154;
          }
          ++v10;
          v62 = -1LL;
          do
            v34 = v39[++v62] == 0;
          while ( !v34 );
          v63 = &v39[v62];
          v48 = v76;
          v39 = v63 + 1;
        }
      }
LABEL_36:
      v14 = -2147483642;
LABEL_37:
      *v95 = v93 | ((v27 ^ v93 ^ v26 ^ (v10 + 1)) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                  * (v26 | ((v27 | ((v10 + 1) << 12)) << 24) | 0xCB7000));
LABEL_38:
      if ( v88 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v88);
      goto LABEL_40;
    }
    v38 = v83;
    while ( *v38 )
    {
      ++v38;
      if ( !--v37 )
      {
        v39 = v35;
        goto LABEL_90;
      }
    }
    if ( v21 )
    {
      String2[1] = v83;
      v70 = 2 * wcslen(v83);
      if ( v70 >= 0xFFFE )
        LOWORD(v70) = -4;
      LOWORD(String2[0]) = v70;
      WORD1(String2[0]) = v70 + 2;
      if ( RtlCultureNameToLCID((unsigned __int16 *)String2, (int *)&v80) )
      {
        v39 = String1;
        v36 = 1;
        goto LABEL_90;
      }
      v35 = String1;
      goto LABEL_89;
    }
    DWORD1(v85) = 0;
    *((_QWORD *)&v85 + 1) = v83;
    v71 = 2 * wcslen(v83);
    if ( v71 >= 0xFFFE )
      LOWORD(v71) = -4;
    LOWORD(v85) = v71;
    WORD1(v85) = v71 + 2;
    if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)&v85, 0x10u, (int *)&v80) < 0 )
    {
LABEL_185:
      v39 = String1;
      goto LABEL_90;
    }
    v72 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
    v88 = v72;
    if ( v72 )
    {
      String2[1] = v72;
      LODWORD(String2[0]) = 11141120;
      v36 = (unsigned __int8)RtlLCIDToCultureName(v80, (__int64)String2) != 0;
      goto LABEL_185;
    }
LABEL_40:
    if ( v12 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v12);
    goto LABEL_42;
  }
  return result;
}
