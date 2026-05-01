/*
 * XREFs of ??1?$tuple@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@QEAA@XZ @ 0x1805EE214
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806FEE5F (_RequestNotificationPinConsentAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall std::tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
        __int64 a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 24);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
}
