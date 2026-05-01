/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___ @ 0x180499C28
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Release @ 0x18049CD90 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_18049CD90.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
}
