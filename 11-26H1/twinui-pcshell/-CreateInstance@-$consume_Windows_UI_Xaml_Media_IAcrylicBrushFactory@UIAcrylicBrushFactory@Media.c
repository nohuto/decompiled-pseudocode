/*
 * XREFs of ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180598EDC
 * Callers:
 *     ??R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x180598984 (--R_lambda_9385b473f465738bc2d277d457f6f118_@@QEBA@AEBUIAcrylicBrushFactory@Media@Xaml@UI@Window.c)
 * Callees:
 *     ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x180209DE8 (--B-$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::CreateInstance(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64 *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  int v12; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = a2;
  v4 = *a1;
  v14 = 0LL;
  v12 = 0;
  v15 = a4;
  v6 = *v4;
  v13 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, __int64 *))(v6 + 48);
  v9 = winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(&v15);
  v10 = v8(v4, *a3, v9, &v14);
  winrt::check_hresult((int *)&v15, v10, (__int64)&v12);
  *a2 = v14;
  return a2;
}
