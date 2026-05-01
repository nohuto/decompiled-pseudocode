/*
 * XREFs of ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1805C1804
 * Callers:
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1805C0D5C (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x180666FD0 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x18001FF50 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

char __fastcall LoggingUtil::AppIdCensorUtility::ExtractDomain(LPCWSTR lpszUrl, unsigned __int16 **a2)
{
  char v2; // bl
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  $2B4FDC4BF487E67F052937EE78FAE255 UrlComponents; // [rsp+20h] [rbp-298h] BYREF
  WCHAR v10[264]; // [rsp+90h] [rbp-228h] BYREF

  v2 = 0;
  *a2 = 0LL;
  if ( lpszUrl )
  {
    memset_0(&UrlComponents, 0, sizeof(UrlComponents));
    UrlComponents.dwStructSize = 104;
    memset_0(v10, 0, 0x202uLL);
    UrlComponents.dwHostNameLength = 257;
    UrlComponents.lpszHostName = v10;
    v5 = -1LL;
    do
      ++v5;
    while ( lpszUrl[v5] );
    if ( InternetCrackUrlW(lpszUrl, v5, 0, &UrlComponents) || ResultFromKnownLastError() >= 0 )
    {
      v2 = 1;
      _AllocString<CTCoAllocPolicy>(v7, v6, v10, a2);
    }
  }
  return v2;
}
