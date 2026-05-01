/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_d61b288df26b99e0330e99e4b6525b65___ @ 0x18069E5F4
 * Callers:
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1802B8394 (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_d61b288df26b99e0330e99e4b6525b65___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 1));
  v4 = *a2;
  *a2 = 0LL;
  v7[2] = v4;
  v7[3] = a2[1];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v7 + 3);
  v5 = a2[2];
  a2[2] = 0LL;
  v7[4] = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *a1 = v7;
  *v7 = off_1808D1628;
  return a1;
}
