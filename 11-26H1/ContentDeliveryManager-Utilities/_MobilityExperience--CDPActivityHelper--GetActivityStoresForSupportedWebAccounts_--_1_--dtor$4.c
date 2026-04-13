/*
 * XREFs of _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$4 @ 0x1800B9F3F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 160));
}
