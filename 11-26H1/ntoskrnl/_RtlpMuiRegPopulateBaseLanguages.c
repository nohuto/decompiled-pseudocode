/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x1408B01E4
 * Callers:
 *     _RtlpMuiRegInitPartialLanguage @ 0x1408B0058 (_RtlpMuiRegInitPartialLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x140728220 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1408ADCD8 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1408AFCF4 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1408B09C0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     NtQueryInstallUILanguage @ 0x140B29800 (NtQueryInstallUILanguage.c)
 *     LdrpQueryValueKey @ 0x140B3E948 (LdrpQueryValueKey.c)
 *     RtlLCIDToCultureName @ 0x140B60060 (RtlLCIDToCultureName.c)
 */

NTSTATUS __fastcall RtlpMuiRegPopulateBaseLanguages(__int64 a1, void *a2, _WORD *a3, unsigned int *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // r14
  LANGID v9; // ax
  unsigned int v10; // edi
  NTSTATUS result; // eax
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // si
  __int64 v14; // r15
  HANDLE v15; // rsi
  ULONG i; // eax
  unsigned __int64 v17; // rsi
  WCHAR v18; // r15
  LANGID InstallUILanguageId[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v21[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG Index; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v25; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h]
  unsigned int *v27; // [rsp+68h] [rbp-98h]
  WCHAR String1[88]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+120h] [rbp+20h] BYREF
  int v30; // [rsp+124h] [rbp+24h]
  unsigned int v31; // [rsp+130h] [rbp+30h]
  WCHAR v32[246]; // [rsp+134h] [rbp+34h] BYREF
  WCHAR String2[88]; // [rsp+320h] [rbp+220h] BYREF
  wchar_t Str2[88]; // [rsp+3D0h] [rbp+2D0h] BYREF

  KeyHandle = a2;
  v27 = a4;
  v25 = 0;
  String = 0LL;
  memset_0(String1, 0, 0xAAuLL);
  memset_0(String2, 0, 0xAAuLL);
  memset_0(Str2, 0, 0xAAuLL);
  InstallUILanguageId[0] = 0;
  v7 = 0;
  v21[0] = 0;
  LODWORD(v8) = 0;
  LOWORD(v22) = 0;
  ResultLength = 0;
  if ( !a1 || !a3 || !a2 )
    return -1073741811;
  v9 = *(_WORD *)(a1 + 4);
  v10 = 0;
  Index = 0;
  if ( v9 )
  {
    v12 = *(_WORD *)(a1 + 6);
    v13 = *(_WORD *)(a1 + 8);
    InstallUILanguageId[0] = v9;
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback(a1, v21, &v22) >= 0 )
    {
      v12 = v21[0];
      v13 = v22;
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v9 = InstallUILanguageId[0];
    if ( PspSiloMonitorLock.CurrentRunTime )
    {
      *(_WORD *)(a1 + 8) = v13;
      *(_WORD *)(a1 + 6) = v12;
      *(_WORD *)(a1 + 4) = v9;
    }
  }
  v14 = -1LL;
  if ( a3[2] == v9 )
  {
    if ( v12 )
    {
      String.Buffer = String2;
      ResultLength = 512;
      String.MaximumLength = 170;
      if ( RtlLCIDToCultureName(v12, &String) )
      {
        if ( ZwQueryValueKey(KeyHandle, &String, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, KeyValueInformation, v13, Str2) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, 0, (__int64)KeyValueInformation, Str2) >= 0 )
        {
          v10 = 1;
          v8 = -1LL;
          do
            ++v8;
          while ( String2[v8] );
        }
      }
    }
  }
  RtlInitUnicodeString(&String, L"DefaultFallback");
  v15 = KeyHandle;
  v22 = 1;
  ResultLength = 170;
  if ( (int)LdrpQueryValueKey(KeyHandle, &String, (__int64)&ResultLength) >= 0
    && v22 == 1
    && (!(_DWORD)v8
     || RtlCompareUnicodeStrings(String1, (unsigned __int64)ResultLength >> 1, String2, (unsigned int)v8, 1u)) )
  {
    RtlInitUnicodeString(&String, String1);
    ResultLength = 512;
    if ( ZwQueryValueKey(v15, &String, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
      && v30 == 7
      && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v10, (__int64)KeyValueInformation, 0LL) >= 0 )
    {
      ++v10;
      do
        ++v14;
      while ( String1[v14] );
      v7 = v14;
    }
  }
  for ( i = Index;
        v10 < 4 && ZwEnumerateValueKey(v15, i, KeyValueFullInformation, KeyValueInformation, 0x200u, &v25) >= 0;
        i = ++Index )
  {
    if ( v30 == 7 && v31 <= 0x200 )
    {
      if ( !v7 && !(_DWORD)v8 )
        goto LABEL_42;
      v17 = (unsigned __int64)v31 >> 1;
      v18 = v32[v17];
      v32[v17] = 0;
      if ( (!(_DWORD)v8 || RtlCompareUnicodeStrings(v32, (unsigned __int64)v31 >> 1, String2, (unsigned int)v8, 1u))
        && (!v7 || RtlCompareUnicodeStrings(v32, (unsigned __int64)v31 >> 1, String1, v7, 1u)) )
      {
        v32[v17] = v18;
LABEL_42:
        if ( (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v10, (__int64)KeyValueInformation, 0LL) >= 0 )
          ++v10;
      }
    }
    v15 = KeyHandle;
  }
  if ( v27 )
    *v27 = v10;
  return 0;
}
