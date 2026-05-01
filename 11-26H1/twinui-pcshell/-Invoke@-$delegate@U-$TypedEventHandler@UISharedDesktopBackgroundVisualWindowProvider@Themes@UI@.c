/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@V_lambda_25b94d3f6c94d2237c3b33dc5b3eb37e_@@@impl@winrt@@UEAAHPEAXUSize@Foundation@Windows@3@@Z @ 0x1805BFB80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??R?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@QEBA@AEBUISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@23@AEBUSize@123@@Z @ 0x18026B5D8 (--R-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>,_lambda_25b94d3f6c94d2237c3b33dc5b3eb37e_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, void **); // rbx
  void **v6; // rax
  __int64 result; // rax
  unsigned int v8[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  *(_QWORD *)v8 = a3;
  v9 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v4 + 24LL);
  v6 = winrt::put_abi((winrt *)&v9, a2);
  v5(v4, a1 + 24, v6);
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>::operator()(
      &v9,
      (__int64 *)&v10,
      v8);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
