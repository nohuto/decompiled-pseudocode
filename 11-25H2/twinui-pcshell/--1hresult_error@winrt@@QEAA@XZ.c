/*
 * XREFs of ??1hresult_error@winrt@@QEAA@XZ @ 0x1802DC228
 * Callers:
 *     ??$try_get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@AEBUhstring@param@1@PEAUhresult_error@1@@Z @ 0x1802C3A3C (--$try_get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-AUIA.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1802DC254 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x180329DDC (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 *     _winrt::to_hresult_::_1_::catch$15 @ 0x1806B9955 (_winrt--to_hresult_--_1_--catch$15.c)
 *     _winrt::to_hresult_::_1_::catch$16 @ 0x1806B99F3 (_winrt--to_hresult_--_1_--catch$16.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1806B9A94 (_winrt--to_hresult_--_1_--catch$17.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

void __fastcall winrt::hresult_error::~hresult_error(OLECHAR **this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(this + 2);
  if ( *v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  winrt::handle_type<winrt::impl::bstr_traits>::close(this);
}
