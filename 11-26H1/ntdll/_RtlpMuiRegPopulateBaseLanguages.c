/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x18014E1C4
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014D174 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x18004CB84 (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     LdrpQueryValueKey @ 0x1800D6FB0 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014DB64 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014E600 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     ZwEnumerateValueKey @ 0x18015F0A0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     NtIsUILanguageComitted @ 0x180160FB0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1801619D0 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpMuiRegPopulateBaseLanguages(__int64 a1, void *a2, _WORD *a3, unsigned int *a4)
{
  __int64 v7; // r15
  LANGID v8; // ax
  unsigned int v9; // edi
  NTSTATUS result; // eax
  unsigned __int16 v11; // si
  unsigned __int16 v12; // r14
  bool v13; // sf
  __int64 v14; // r12
  HANDLE v15; // r14
  ULONG i; // eax
  unsigned __int64 v17; // rsi
  WCHAR v18; // r14
  LANGID InstallUILanguageId[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v21[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG Index; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING String; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v26; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h]
  unsigned int *v28; // [rsp+70h] [rbp-90h]
  WCHAR String1[88]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+130h] [rbp+30h] BYREF
  int v31; // [rsp+134h] [rbp+34h]
  unsigned int v32; // [rsp+140h] [rbp+40h]
  WCHAR v33[246]; // [rsp+144h] [rbp+44h] BYREF
  WCHAR String2[88]; // [rsp+330h] [rbp+230h] BYREF
  wchar_t v35[88]; // [rsp+3E0h] [rbp+2E0h] BYREF

  KeyHandle = a2;
  v28 = a4;
  v26 = 0;
  String = 0LL;
  memset_thunk_772440563353939046(String1, 0, 0xAAuLL);
  memset_thunk_772440563353939046(String2, 0, 0xAAuLL);
  memset_thunk_772440563353939046(v35, 0, 0xAAuLL);
  LODWORD(v24) = 0;
  LODWORD(v7) = 0;
  InstallUILanguageId[0] = 0;
  v21[0] = 0;
  LOWORD(v22) = 0;
  ResultLength = 0;
  if ( !a1 || !a3 || !a2 )
    return -1073741811;
  v8 = *(_WORD *)(a1 + 4);
  v9 = 0;
  Index = 0;
  if ( v8 )
  {
    v11 = *(_WORD *)(a1 + 6);
    v12 = *(_WORD *)(a1 + 8);
    InstallUILanguageId[0] = v8;
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback(a1, v21, &v22) >= 0 )
    {
      v11 = v21[0];
      v12 = v22;
    }
    else
    {
      v11 = 0;
      v12 = 0;
    }
    v13 = NtIsUILanguageComitted() < 0;
    v8 = InstallUILanguageId[0];
    if ( !v13 )
    {
      *(_WORD *)(a1 + 8) = v12;
      *(_WORD *)(a1 + 6) = v11;
      *(_WORD *)(a1 + 4) = v8;
    }
  }
  v14 = -1LL;
  if ( a3[2] == v8 )
  {
    if ( v11 )
    {
      String.Buffer = String2;
      ResultLength = 512;
      String.MaximumLength = 170;
      if ( RtlLCIDToCultureName(v11, &String) )
      {
        if ( NtQueryValueKey(KeyHandle, &String, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, KeyValueInformation, v12, v35) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, 0, (__int64)KeyValueInformation, v35) >= 0 )
        {
          v9 = 1;
          v7 = -1LL;
          do
            ++v7;
          while ( String2[v7] );
        }
      }
    }
  }
  RtlInitUnicodeString(&String, L"DefaultFallback");
  v15 = KeyHandle;
  v22 = 1;
  ResultLength = 170;
  if ( (int)LdrpQueryValueKey(KeyHandle, &String, &v22, String1, &ResultLength) >= 0
    && v22 == 1
    && (!(_DWORD)v7
     || RtlCompareUnicodeStrings(String1, (unsigned __int64)ResultLength >> 1, String2, (unsigned int)v7, 1u))
    && (RtlInitUnicodeString(&String, String1),
        ResultLength = 512,
        NtQueryValueKey(v15, &String, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0)
    && v31 == 7
    && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v9, (__int64)KeyValueInformation, 0LL) >= 0 )
  {
    ++v9;
    do
      ++v14;
    while ( String1[v14] );
  }
  else
  {
    LODWORD(v14) = v24;
  }
  for ( i = Index;
        v9 < 4 && ZwEnumerateValueKey(v15, i, KeyValueFullInformation, KeyValueInformation, 0x200u, &v26) >= 0;
        i = ++Index )
  {
    if ( v31 == 7 && v32 <= 0x200 )
    {
      if ( !(_DWORD)v14 && !(_DWORD)v7 )
        goto LABEL_43;
      v17 = (unsigned __int64)v32 >> 1;
      v18 = v33[v17];
      v33[v17] = 0;
      if ( (!(_DWORD)v7 || RtlCompareUnicodeStrings(v33, (unsigned __int64)v32 >> 1, String2, (unsigned int)v7, 1u))
        && (!(_DWORD)v14 || RtlCompareUnicodeStrings(v33, (unsigned __int64)v32 >> 1, String1, (unsigned int)v14, 1u)) )
      {
        v33[v17] = v18;
LABEL_43:
        if ( (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v9, (__int64)KeyValueInformation, 0LL) >= 0 )
          ++v9;
      }
    }
    v15 = KeyHandle;
  }
  if ( v28 )
    *v28 = v9;
  return 0;
}
