/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::_implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___ @ 0x1803A4E58
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::Release @ 0x1803AE6D0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--DeferralCompletedHandl_ea_1803AE6D0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___::_implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe___(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  v2 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
