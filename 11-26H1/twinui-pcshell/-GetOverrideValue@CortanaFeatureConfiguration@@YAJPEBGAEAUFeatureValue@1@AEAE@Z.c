/*
 * XREFs of ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180389220
 * Callers:
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180388EF8 (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetOverrideValue(
        LPCWSTR lpValue,
        const unsigned __int16 *a2,
        struct CortanaFeatureConfiguration::FeatureValue *a3,
        unsigned __int8 *a4)
{
  HRESULT String; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  DWORD pcbData; // [rsp+40h] [rbp-248h] BYREF
  DWORD v12[3]; // [rsp+44h] [rbp-244h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  *(_BYTE *)a3 = 0;
  if ( *(_DWORD *)a2 < 2u )
  {
    pcbData = 0;
    v12[0] = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
            lpValue,
            0x10u,
            0LL,
            &pcbData,
            v12) )
    {
      *((_DWORD *)a2 + 1) = pcbData;
LABEL_12:
      *(_BYTE *)a3 = 1;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      String = -2147024809;
      v8 = 301LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
        (const char *)(unsigned int)String);
      return (unsigned int)String;
    }
    memset_0(sourceString, 0, 0x208uLL);
    pcbData = 520;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
            lpValue,
            2u,
            0LL,
            sourceString,
            &pcbData) )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( sourceString[v9] );
      String = WindowsCreateString(sourceString, v9, (HSTRING *)a2 + 1);
      if ( String < 0 )
      {
        v8 = 294LL;
        goto LABEL_9;
      }
      goto LABEL_12;
    }
  }
  return 0LL;
}
