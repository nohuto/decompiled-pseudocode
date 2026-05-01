/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___ @ 0x1804E15EC
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___::Release @ 0x1804E4990 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1804E4990.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
}
