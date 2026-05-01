/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___::Release @ 0x18067FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___ @ 0x18067EB28 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_18067EB28.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSourceChangedEventArgs___lambda_4a8a7dc7cd02ea679862027d610a88ad___((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
