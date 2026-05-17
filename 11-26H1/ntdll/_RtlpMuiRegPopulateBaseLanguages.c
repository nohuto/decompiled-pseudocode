/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014D2C4 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x18000144C (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     LdrpQueryValueKey @ 0x1800D9FF0 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014DCB4 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014E750 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     ZwEnumerateValueKey @ 0x18015F1A0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180161AD0 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegPopulateBaseLanguages(__int64 a1, __int64 a2, _WORD *a3, unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r15
  __int16 v10; // ax
  unsigned int v11; // edi
  __int64 result; // rax
  unsigned __int16 v13; // si
  unsigned __int16 v14; // r14
  bool v15; // sf
  __int64 v16; // r12
  __int64 v17; // r14
  unsigned int i; // eax
  unsigned __int64 v19; // rsi
  unsigned __int16 v20; // r14
  __int16 v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v23[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  unsigned int *v30; // [rsp+70h] [rbp-90h]
  WCHAR SourceString[88]; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+130h] [rbp+30h] BYREF
  int v33; // [rsp+134h] [rbp+34h]
  unsigned int v34; // [rsp+140h] [rbp+40h]
  unsigned __int16 v35[246]; // [rsp+144h] [rbp+44h] BYREF
  wchar_t v36[88]; // [rsp+330h] [rbp+230h] BYREF
  wchar_t String2[88]; // [rsp+3E0h] [rbp+2E0h] BYREF

  v29 = a2;
  v30 = a4;
  v28 = 0;
  DestinationString = 0LL;
  memset_thunk_772440563353939046(SourceString, 0, 0xAAuLL);
  memset_thunk_772440563353939046(v36, 0, 0xAAuLL);
  memset_thunk_772440563353939046(String2, 0, 0xAAuLL);
  LODWORD(v26) = 0;
  LODWORD(v9) = 0;
  v21[0] = 0;
  v23[0] = 0;
  LOWORD(v24) = 0;
  v22 = 0;
  if ( !a1 || !a3 || !a2 )
    return 3221225485LL;
  v10 = *(_WORD *)(a1 + 4);
  v11 = 0;
  v25 = 0;
  if ( v10 )
  {
    v13 = *(_WORD *)(a1 + 6);
    v14 = *(_WORD *)(a1 + 8);
    v21[0] = v10;
  }
  else
  {
    result = NtQueryInstallUILanguage(v21, v7, v8);
    if ( (int)result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback(a1, v23, &v24) >= 0 )
    {
      v13 = v23[0];
      v14 = v24;
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    v15 = (int)NtIsUILanguageComitted() < 0;
    v10 = v21[0];
    if ( !v15 )
    {
      *(_WORD *)(a1 + 8) = v14;
      *(_WORD *)(a1 + 6) = v13;
      *(_WORD *)(a1 + 4) = v10;
    }
  }
  v16 = -1LL;
  if ( a3[2] == v10 )
  {
    if ( v13 )
    {
      DestinationString.Buffer = v36;
      v22 = 512;
      DestinationString.MaximumLength = 170;
      if ( (unsigned __int8)RtlLCIDToCultureName(v13, (__int64)&DestinationString) )
      {
        if ( (int)NtQueryValueKey(v29, &DestinationString, 1LL, &v32, 512, &v22) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, &v32, v14, String2) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, 0, (__int64)&v32, String2) >= 0 )
        {
          v11 = 1;
          v9 = -1LL;
          do
            ++v9;
          while ( v36[v9] );
        }
      }
    }
  }
  RtlInitUnicodeString(&DestinationString, L"DefaultFallback");
  v17 = v29;
  v24 = 1;
  v22 = 170;
  if ( (int)LdrpQueryValueKey(v29, (__int64)&DestinationString, &v24, SourceString, &v22) >= 0
    && v24 == 1
    && (!(_DWORD)v9
     || (unsigned int)RtlCompareUnicodeStrings(SourceString, (unsigned __int64)v22 >> 1, v36, (unsigned int)v9, 1))
    && (RtlInitUnicodeString(&DestinationString, SourceString),
        v22 = 512,
        (int)NtQueryValueKey(v17, &DestinationString, 1LL, &v32, 512, &v22) >= 0)
    && v33 == 7
    && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v11, (__int64)&v32, 0LL) >= 0 )
  {
    ++v11;
    do
      ++v16;
    while ( SourceString[v16] );
  }
  else
  {
    LODWORD(v16) = v26;
  }
  for ( i = v25; v11 < 4 && (int)ZwEnumerateValueKey(v17, i, 1LL, &v32, 512, &v28) >= 0; i = ++v25 )
  {
    if ( v33 == 7 && v34 <= 0x200 )
    {
      if ( !(_DWORD)v16 && !(_DWORD)v9 )
        goto LABEL_43;
      v19 = (unsigned __int64)v34 >> 1;
      v20 = v35[v19];
      v35[v19] = 0;
      if ( (!(_DWORD)v9
         || (unsigned int)RtlCompareUnicodeStrings(v35, (unsigned __int64)v34 >> 1, v36, (unsigned int)v9, 1))
        && (!(_DWORD)v16
         || (unsigned int)RtlCompareUnicodeStrings(v35, (unsigned __int64)v34 >> 1, SourceString, (unsigned int)v16, 1)) )
      {
        v35[v19] = v20;
LABEL_43:
        if ( (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v11, (__int64)&v32, 0LL) >= 0 )
          ++v11;
      }
    }
    v17 = v29;
  }
  if ( v30 )
    *v30 = v11;
  return 0LL;
}
