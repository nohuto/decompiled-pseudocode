/*
 * XREFs of ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1805E4E1C
 * Callers:
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1805E4D68 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18007192C (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180161DE8 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1805E5928 (-ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall LoggingUtil::AppIdCensorUtility::CensorWebAppId(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  bool Domain; // di
  wchar_t *v6; // rax
  const WCHAR *v7; // rbx
  unsigned __int16 *v8; // rax
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  unsigned __int16 *v11[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  PWSTR pszUrl[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]

  v9 = 0uLL;
  v10 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (__int64)&v9,
    (__int64)L"Microsoft.Edge.",
    0xFFFFFFFFFFFFFFFFuLL);
  Domain = 0;
  v6 = wcsstr(a2, L"http");
  if ( !v6 )
    goto LABEL_10;
  pszUrl[0] = 0LL;
  pszUrl[1] = 0LL;
  v14 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (__int64)pszUrl,
    (__int64)v6,
    0xFFFFFFFFFFFFFFFFuLL);
  v7 = pszUrl[0];
  if ( pszUrl[0] && *pszUrl[0] )
  {
    if ( UrlUnescapeW(pszUrl[0], 0LL, 0LL, 0x100000u) < 0 )
      goto LABEL_9;
    pszUrl[1] = (PWSTR)-1LL;
  }
  v11[0] = 0LL;
  v11[1] = 0LL;
  v12 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
  v11[1] = (unsigned __int16 *)-1LL;
  v12 = -1LL;
  Domain = LoggingUtil::AppIdCensorUtility::ExtractDomain(v7, v11);
  if ( Domain )
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(&v9, (__int64 *)v11);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pszUrl);
  if ( !Domain )
LABEL_10:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
      &v9,
      (__int64)L"FailedToParseWebDomain",
      0x16uLL);
  v8 = (unsigned __int16 *)v9;
  v9 = 0uLL;
  v10 = 0LL;
  *a3 = v8;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
}
