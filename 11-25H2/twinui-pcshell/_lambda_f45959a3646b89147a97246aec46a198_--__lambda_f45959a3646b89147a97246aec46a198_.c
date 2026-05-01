/*
 * XREFs of _lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_ @ 0x1804D8218
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f45959a3646b89147a97246aec46a198___::_CTaskWrapper__lambda_f45959a3646b89147a97246aec46a198___ @ 0x1804D8270 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f45959a3646b89147a97246aec46a198___--_CTask.c)
 *     _lambda_de87d9780560173c9d125f808a86f278_::operator() @ 0x1804D8640 (_lambda_de87d9780560173c9d125f808a86f278_--operator().c)
 *     _lambda_0210cdf410b43223d5bb003804109f20_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_ @ 0x1804E00B0 (_lambda_0210cdf410b43223d5bb003804109f20_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 *     CreationThreadDispatcher::RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___ @ 0x1804E09D4 (CreationThreadDispatcher--RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___.c)
 *     _lambda_7403f855236cea0e6d88639637f0f4a5_::operator() @ 0x1804E1840 (_lambda_7403f855236cea0e6d88639637f0f4a5_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
