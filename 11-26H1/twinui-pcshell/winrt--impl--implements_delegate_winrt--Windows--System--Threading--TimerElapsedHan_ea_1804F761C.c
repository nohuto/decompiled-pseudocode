/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___ @ 0x1804F761C
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::Release @ 0x1805023C0 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1805023C0.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_f24517619e04b8c6c046d1f7bd6f10fb___(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
}
