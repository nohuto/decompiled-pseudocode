/*
 * XREFs of RtlGetUILanguageInfo @ 0x18000A1D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800061D0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180008818 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800DDBD0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1801011B0 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010AC8C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010EB40 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlUnicodeStringToLcid @ 0x1801148C4 (RtlUnicodeStringToLcid.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, char *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  const char *v6; // rbx
  __int64 v8; // r12
  unsigned int v9; // r13d
  int v10; // eax
  __int64 v11; // r13
  unsigned int FallbackLanguagesAsMultiSZ; // edi
  size_t v13; // rax
  __int64 v14; // r8
  int InstalledLanguageIndexByLangId; // eax
  __int64 v16; // r9
  __int64 i; // r14
  const wchar_t *v18; // rbx
  int v19; // eax
  int FallbackLanguageInfoByLangId; // eax
  __int64 Heap_0; // rax
  size_t v22; // rax
  unsigned int v23; // ebx
  _WORD *v24; // r14
  bool v25; // zf
  size_t v27; // rax
  int v28; // r9d
  unsigned __int16 v29; // di
  int v30; // eax
  unsigned int v31; // [rsp+30h] [rbp-61h]
  char v32; // [rsp+34h] [rbp-5Dh]
  _WORD v34[2]; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-4Dh] BYREF
  int v36; // [rsp+48h] [rbp-49h]
  __int64 v37; // [rsp+50h] [rbp-41h] BYREF
  int v38; // [rsp+58h] [rbp-39h] BYREF
  int v39; // [rsp+5Ch] [rbp-35h]
  __int64 v40; // [rsp+60h] [rbp-31h]
  __int128 v41; // [rsp+68h] [rbp-29h] BYREF
  int *v42; // [rsp+78h] [rbp-19h]
  __int128 v43; // [rsp+80h] [rbp-11h] BYREF
  __int64 v44; // [rsp+90h] [rbp-1h]
  int v45; // [rsp+98h] [rbp+7h]

  v42 = a5;
  v34[0] = -1;
  v6 = a2;
  v44 = 0LL;
  v37 = 0LL;
  v45 = 0;
  v8 = 0LL;
  v35 = 0;
  v39 = 0;
  LOBYTE(v36) = 0;
  v43 = 0LL;
  v41 = 0LL;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  v31 = v9;
  if ( !a2 || !*(_WORD *)a2 || (a1 & 4) != 0 && (a1 & 8) != 0 || (a1 & 0xFFFFFF73) != 0 || v9 && !a3 )
    return 3221225485LL;
  if ( (a1 & 4) != 0 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, 4LL) >= 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (int)RtlpCheckMuiMultiStringSafe(a2, 85LL) < 0 )
LABEL_10:
    DbgPrint(
      "*** ASSERT FAILED: Input parameter: %s, for function: %s is not a valid multi-string!\n",
      v6,
      "RtlGetUILanguageInfo");
LABEL_11:
  if ( a3 )
  {
    if ( v9 )
      *a3 = 0;
    if ( v9 > 1 )
      a3[1] = 0;
  }
  if ( a4 )
    *a4 = 2;
  if ( a5 )
    *a5 = 0;
  if ( (a1 & 0x80u) == 0 )
    v10 = RtlpCreateProcessRegistryInfo(&v37);
  else
    v10 = RtlpMuiRegCreateAndLoadRegistryInfo(&v37);
  v11 = v37;
  FallbackLanguagesAsMultiSZ = v10;
  if ( v10 >= 0 )
  {
    if ( v37 )
    {
      v37 = *(_QWORD *)(v37 + 24);
      if ( (a1 & 4) != 0 )
      {
        v32 = 1;
        Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 170LL);
        v8 = Heap_0;
        if ( Heap_0 )
        {
          v40 = Heap_0;
          v38 = 11141120;
          *((_QWORD *)&v41 + 1) = v6;
          v22 = 2 * wcslen((const wchar_t *)v6);
          if ( v22 >= 0xFFFE )
            LOWORD(v22) = -4;
          LOWORD(v41) = v22;
          WORD1(v41) = v22 + 2;
          if ( (int)RtlUnicodeStringToLcid(&v41, &v35) < 0
            || (v29 = v35, !(unsigned __int8)RtlLCIDToCultureName(v35, (__int64)&v38)) )
          {
            v23 = v31;
            FallbackLanguagesAsMultiSZ = -1073741811;
            v24 = a3;
LABEL_51:
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v8);
            goto LABEL_52;
          }
          InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v11, v29, 1, v34);
LABEL_25:
          FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
          if ( InstalledLanguageIndexByLangId < 0 )
          {
            v23 = v31;
            v24 = a3;
            if ( InstalledLanguageIndexByLangId == -1073741823 )
              FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_50:
            if ( !v8 )
              goto LABEL_52;
            goto LABEL_51;
          }
          if ( v34[0] >= 0 && v34[0] < (int)*(unsigned __int16 *)(v37 + 6) )
          {
            for ( i = 28LL * v34[0] + *(_QWORD *)(v37 + 16); *(_WORD *)v6; v6 += 2 )
              ;
            v18 = (const wchar_t *)(v6 + 2);
            v43 = *(_OWORD *)i;
            v44 = *(_QWORD *)(i + 16);
            v45 = *(_DWORD *)(i + 24);
            if ( (*(_WORD *)i & 1) == 0 )
            {
              LOBYTE(v19) = v36;
              while ( *v18 )
              {
                if ( (_BYTE)v19 )
                  goto LABEL_92;
                if ( v32 )
                {
                  *((_QWORD *)&v41 + 1) = v18;
                  DWORD1(v41) = 0;
                  v27 = 2 * wcslen(v18);
                  if ( v27 >= 0xFFFE )
                    LOWORD(v27) = -4;
                  LOWORD(v41) = v27;
                  WORD1(v41) = v27 + 2;
                  if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)&v41, 0x10u, (int *)&v35) < 0 )
                  {
LABEL_92:
                    FallbackLanguagesAsMultiSZ = -1073741811;
                    goto LABEL_49;
                  }
                  LOBYTE(v28) = 1;
                  FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                                   v11,
                                                   (unsigned int)&v43,
                                                   (unsigned __int16)v35,
                                                   v28,
                                                   (__int64)&v43);
                }
                else
                {
                  LOBYTE(v16) = 1;
                  FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v11, &v43, v18, v16, &v43);
                }
                FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
                if ( FallbackLanguageInfoByLangId < 0 )
                  goto LABEL_49;
                v19 = (unsigned __int8)v36;
                if ( (v43 & 0x20) != 0 )
                  v19 = 1;
                v25 = *v18 == 0;
                v36 = v19;
                if ( !v25 )
                {
                  do
                    ++v18;
                  while ( *v18 );
                }
                ++v18;
              }
              goto LABEL_43;
            }
            if ( (*(_WORD *)i & 6) != 0 )
            {
              FallbackLanguagesAsMultiSZ = -1073741595;
              goto LABEL_49;
            }
            if ( !*v18 )
            {
LABEL_43:
              if ( v42 )
              {
                v30 = *(_WORD *)i & 0x419F | 0x20;
                if ( (*(_WORD *)i & 0x1000) != 0 )
                  v30 = *(_WORD *)i & 0x419F;
                *v42 = v30 | 0x40;
              }
              if ( a4 )
              {
                v25 = (_BYTE)v36 == 0;
                v23 = v31;
                v24 = a3;
                *a4 = v31;
                if ( v25 )
                  FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                                 a1,
                                                 v11,
                                                 (unsigned int)&v43,
                                                 (_DWORD)a4,
                                                 (__int64)a3);
                else
                  *a4 = 2;
                goto LABEL_50;
              }
LABEL_49:
              v23 = v31;
              v24 = a3;
              goto LABEL_50;
            }
          }
          FallbackLanguagesAsMultiSZ = -1073741772;
          goto LABEL_49;
        }
        FallbackLanguagesAsMultiSZ = -1073741801;
      }
      else
      {
        v32 = 0;
        v39 = 0;
        v40 = (__int64)v6;
        v13 = 2 * wcslen((const wchar_t *)v6);
        if ( v13 >= 0xFFFE )
          LOWORD(v13) = -4;
        LOWORD(v38) = v13;
        HIWORD(v38) = v13 + 2;
        if ( RtlCultureNameToLCID((unsigned __int16 *)&v38, (int *)&v35) )
        {
          LOBYTE(v14) = 1;
          InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v11, v6, v14, v34);
          goto LABEL_25;
        }
        FallbackLanguagesAsMultiSZ = -1073741811;
      }
    }
    else
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
    }
  }
  v24 = a3;
  v23 = v31;
LABEL_52:
  if ( (a1 & 0x80u) != 0 && v11 )
    RtlpMuiFreeLangRegistryInfo(v11);
  if ( !FallbackLanguagesAsMultiSZ && a4 && *a4 > v23 && v24 )
    return (unsigned int)-1073741789;
  return FallbackLanguagesAsMultiSZ;
}
