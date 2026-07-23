/*
 * XREFs of RtlpLangNameInMultiSzString_Size @ 0x180024F90
 * Callers:
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180024430 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180026C60 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18004F6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcsnlen @ 0x18012DAB0 (wcsnlen.c)
 *     Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNoInline @ 0x180141CC8 (Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNo.c)
 */

__int64 __fastcall RtlpLangNameInMultiSzString_Size(wchar_t *String1, wchar_t *String2, unsigned int a3)
{
  unsigned __int8 v3; // r15
  unsigned __int64 v4; // rsi
  wchar_t *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  wchar_t *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  wchar_t *v12; // rax
  size_t v13; // rax

  v3 = 0;
  v4 = 0LL;
  v6 = String1;
  if ( String1 && String2 )
  {
    v7 = a3;
    if ( (unsigned int)Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v7 )
      {
        do
        {
          if ( !v6 )
            break;
          if ( !*v6 )
            break;
          if ( v7 - v4 > 0x7FFFFFFF )
            break;
          v11 = v7 - v4;
          v12 = v6;
          if ( v7 == v4 )
            break;
          while ( *v12 )
          {
            ++v12;
            if ( !--v11 )
              return v3;
          }
          if ( !wcsicmp(v6, String2) )
            return 1;
          v13 = wcsnlen(v6, v7 - v4);
          v4 += v13 + 1;
          v6 += v13 + 1;
        }
        while ( v4 < v7 );
      }
    }
    else if ( v7 <= 0x7FFFFFFF )
    {
      v8 = (unsigned int)v7;
      v9 = v6;
      if ( v7 )
      {
        do
        {
          if ( !*v9 )
            break;
          ++v9;
          --v8;
        }
        while ( v8 );
      }
      if ( v8 && v7 )
      {
        while ( v6 && *v6 )
        {
          if ( !wcsicmp(v6, String2) )
            return 1;
          v10 = -1LL;
          do
            ++v10;
          while ( v6[v10] );
          v4 += v10 + 1;
          v6 += v10 + 1;
          if ( v4 >= v7 )
            return v3;
        }
      }
    }
  }
  return v3;
}
