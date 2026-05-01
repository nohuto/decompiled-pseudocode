/*
 * XREFs of ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x180666FD0
 * Callers:
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x18066E81C (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@.c)
 *     ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18066EAE4 (-PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLE.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806716AC (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18009E5B8 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18016F098 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1805C1804 (-ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall LoggingUtil::AppIdCensorUtility::CensorUnescapedUrl(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  unsigned __int16 *v5; // rax
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v8[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-18h]

  *a3 = 0LL;
  v7 = 0LL;
  v6 = 0uLL;
  v9 = 0LL;
  v8[0] = 0LL;
  v8[1] = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (__int64)&v6,
    (__int64)L"Microsoft.Edge.",
    0xFFFFFFFFFFFFFFFFuLL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  v8[1] = (unsigned __int16 *)-1LL;
  v9 = -1LL;
  if ( LoggingUtil::AppIdCensorUtility::ExtractDomain(a2, v8) )
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(&v6, (__int64 *)v8);
  else
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
      &v6,
      (__int64)L"FailedToParseWebDomain",
      0x16uLL);
  v5 = (unsigned __int16 *)v6;
  v6 = 0uLL;
  v7 = 0LL;
  *a3 = v5;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v6);
}
