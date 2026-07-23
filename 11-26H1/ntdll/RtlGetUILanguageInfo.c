/*
 * XREFs of RtlGetUILanguageInfo @ 0x180055900
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180051900 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlUnicodeStringToInteger @ 0x180052020 (RtlUnicodeStringToInteger.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180053B7C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180053F48 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800DAB40 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180100900 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010A5FC (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010E690 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlUnicodeStringToLcid @ 0x1801140C0 (RtlUnicodeStringToLcid.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  char *v6; // rbx
  wchar_t *v8; // r12
  ULONG v9; // r13d
  int v10; // eax
  PVOID v11; // r13
  NTSTATUS FallbackLanguagesAsMultiSZ; // edi
  size_t v13; // rax
  __int64 v14; // r8
  int InstalledLanguageIndexByLangId; // eax
  __int64 v16; // r9
  __int64 i; // r14
  wchar_t *v18; // rbx
  int v19; // eax
  int FallbackLanguageInfoByLangId; // eax
  wchar_t *Heap_0; // rax
  size_t v22; // rax
  ULONG v23; // ebx
  PZZWSTR v24; // r14
  bool v25; // zf
  size_t v27; // rax
  int v28; // r9d
  unsigned __int16 v29; // di
  int v30; // eax
  ULONG v31; // [rsp+30h] [rbp-61h]
  char v32; // [rsp+34h] [rbp-5Dh]
  _WORD v34[2]; // [rsp+40h] [rbp-51h] BYREF
  DWORD Lcid; // [rsp+44h] [rbp-4Dh] BYREF
  int v36; // [rsp+48h] [rbp-49h]
  PVOID BaseAddress; // [rsp+50h] [rbp-41h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-39h] BYREF
  _UNICODE_STRING v39; // [rsp+68h] [rbp-29h] BYREF
  PULONG v40; // [rsp+78h] [rbp-19h]
  __int128 v41; // [rsp+80h] [rbp-11h] BYREF
  __int64 v42; // [rsp+90h] [rbp-1h]
  int v43; // [rsp+98h] [rbp+7h]

  v40 = Attributes;
  v34[0] = -1;
  v6 = (char *)Languages;
  v42 = 0LL;
  BaseAddress = 0LL;
  v43 = 0;
  v8 = 0LL;
  Lcid = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  LOBYTE(v36) = 0;
  v41 = 0LL;
  v39 = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  v31 = v9;
  if ( !Languages
    || !*Languages
    || (Flags & 4) != 0 && (Flags & 8) != 0
    || (Flags & 0xFFFFFF73) != 0
    || v9 && !FallbackLanguages )
  {
    return -1073741811;
  }
  if ( (Flags & 4) != 0 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(Languages, 4LL) >= 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (int)RtlpCheckMuiMultiStringSafe(Languages, 85LL) < 0 )
LABEL_10:
    DbgPrint(
      "*** ASSERT FAILED: Input parameter: %s, for function: %s is not a valid multi-string!\n",
      v6,
      "RtlGetUILanguageInfo");
LABEL_11:
  if ( FallbackLanguages )
  {
    if ( v9 )
      *FallbackLanguages = 0;
    if ( v9 > 1 )
      FallbackLanguages[1] = 0;
  }
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( Attributes )
    *Attributes = 0;
  if ( (Flags & 0x80u) == 0 )
    v10 = RtlpCreateProcessRegistryInfo(&BaseAddress);
  else
    v10 = RtlpMuiRegCreateAndLoadRegistryInfo(&BaseAddress);
  v11 = BaseAddress;
  FallbackLanguagesAsMultiSZ = v10;
  if ( v10 >= 0 )
  {
    if ( BaseAddress )
    {
      BaseAddress = (PVOID)*((_QWORD *)BaseAddress + 3);
      if ( (Flags & 4) != 0 )
      {
        v32 = 1;
        Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
        v8 = Heap_0;
        if ( Heap_0 )
        {
          String.Buffer = Heap_0;
          *(_DWORD *)&String.Length = 11141120;
          v39.Buffer = (wchar_t *)v6;
          v22 = 2 * wcslen((const wchar_t *)v6);
          if ( v22 >= 0xFFFE )
            LOWORD(v22) = -4;
          v39.Length = v22;
          v39.MaximumLength = v22 + 2;
          if ( (int)RtlUnicodeStringToLcid(&v39, &Lcid) < 0 || (v29 = Lcid, !RtlLCIDToCultureName(Lcid, &String)) )
          {
            v23 = v31;
            FallbackLanguagesAsMultiSZ = -1073741811;
            v24 = FallbackLanguages;
LABEL_51:
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
            goto LABEL_52;
          }
          InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v11, v29, 1, v34);
LABEL_25:
          FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
          if ( InstalledLanguageIndexByLangId < 0 )
          {
            v23 = v31;
            v24 = FallbackLanguages;
            if ( InstalledLanguageIndexByLangId == -1073741823 )
              FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_50:
            if ( !v8 )
              goto LABEL_52;
            goto LABEL_51;
          }
          if ( v34[0] >= 0 && v34[0] < (int)*((unsigned __int16 *)BaseAddress + 3) )
          {
            for ( i = 28LL * v34[0] + *((_QWORD *)BaseAddress + 2); *(_WORD *)v6; v6 += 2 )
              ;
            v18 = (wchar_t *)(v6 + 2);
            v41 = *(_OWORD *)i;
            v42 = *(_QWORD *)(i + 16);
            v43 = *(_DWORD *)(i + 24);
            if ( (*(_WORD *)i & 1) == 0 )
            {
              LOBYTE(v19) = v36;
              while ( *v18 )
              {
                if ( (_BYTE)v19 )
                  goto LABEL_91;
                if ( v32 )
                {
                  v39.Buffer = v18;
                  *(_DWORD *)(&v39.MaximumLength + 1) = 0;
                  v27 = 2 * wcslen(v18);
                  if ( v27 >= 0xFFFE )
                    LOWORD(v27) = -4;
                  v39.Length = v27;
                  v39.MaximumLength = v27 + 2;
                  if ( RtlUnicodeStringToInteger(&v39, 0x10u, &Lcid) < 0 )
                  {
LABEL_91:
                    FallbackLanguagesAsMultiSZ = -1073741811;
                    goto LABEL_49;
                  }
                  LOBYTE(v28) = 1;
                  FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                                   (_DWORD)v11,
                                                   (unsigned int)&v41,
                                                   (unsigned __int16)Lcid,
                                                   v28,
                                                   (__int64)&v41);
                }
                else
                {
                  LOBYTE(v16) = 1;
                  FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v11, &v41, v18, v16, &v41);
                }
                FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
                if ( FallbackLanguageInfoByLangId < 0 )
                  goto LABEL_49;
                v19 = (unsigned __int8)v36;
                if ( (v41 & 0x20) != 0 )
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
              if ( v40 )
              {
                v30 = *(_WORD *)i & 0x419F | 0x20;
                if ( (*(_WORD *)i & 0x1000) != 0 )
                  v30 = *(_WORD *)i & 0x419F;
                *v40 = v30 | 0x40;
              }
              if ( NumberOfFallbackLanguages )
              {
                v25 = (_BYTE)v36 == 0;
                v23 = v31;
                v24 = FallbackLanguages;
                *NumberOfFallbackLanguages = v31;
                if ( v25 )
                  FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                                 Flags,
                                                 (_DWORD)v11,
                                                 (unsigned int)&v41,
                                                 (_DWORD)NumberOfFallbackLanguages,
                                                 (__int64)FallbackLanguages);
                else
                  *NumberOfFallbackLanguages = 2;
                goto LABEL_50;
              }
LABEL_49:
              v23 = v31;
              v24 = FallbackLanguages;
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
        *(_DWORD *)(&String.MaximumLength + 1) = 0;
        String.Buffer = (wchar_t *)v6;
        v13 = 2 * wcslen((const wchar_t *)v6);
        if ( v13 >= 0xFFFE )
          LOWORD(v13) = -4;
        String.Length = v13;
        String.MaximumLength = v13 + 2;
        if ( RtlCultureNameToLCID(&String, &Lcid) )
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
  v24 = FallbackLanguages;
  v23 = v31;
LABEL_52:
  if ( (Flags & 0x80u) != 0 && v11 )
    RtlpMuiFreeLangRegistryInfo(v11);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v23 && v24 )
    return -1073741789;
  return FallbackLanguagesAsMultiSZ;
}
