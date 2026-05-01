/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6df262792ed19d9f37b8132f1161a915_@@CA@PEAX@Z @ 0x180325150
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180330BB0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--WindowsUdk--UI--Sh.c)
 */

void __fastcall _lambda_6df262792ed19d9f37b8132f1161a915_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v4; // [rsp+48h] [rbp+10h]
  _QWORD *v5; // [rsp+50h] [rbp+18h]

  v3 = *a1[1];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v3);
  v4 = &v3;
  v1 = operator new(0x20uLL);
  v5 = v1;
  v2 = v3;
  v3 = 0LL;
  v1[3] = v2;
  *v1 = winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously__ResumeCoro_1;
  *((_DWORD *)v1 + 2) = 65538;
  *((_BYTE *)v1 + 16) = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously__ResumeCoro_1(v1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
}
