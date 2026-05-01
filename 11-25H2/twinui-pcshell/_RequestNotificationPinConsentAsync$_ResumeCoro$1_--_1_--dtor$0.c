/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806D6BD4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$tuple@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@QEAA@XZ @ 0x1805CA208 (--1-$tuple@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 264) = *(_QWORD *)(a2 + 48) + 16LL;
  std::tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(*(_QWORD *)(a2 + 264));
}
