/*
 * XREFs of ??R?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@QEBA@AEBUISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@23@AEBUSize@123@@Z @ 0x18026B5D8
 * Callers:
 *     ??$invoke@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@$$TUPoint@234@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@1@AEB$$TAEBUPoint@341@@Z @ 0x1800DCCE0 (--$invoke@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Wi.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@V_lambda_25b94d3f6c94d2237c3b33dc5b3eb37e_@@@impl@winrt@@UEAAHPEAXUSize@Foundation@Windows@3@@Z @ 0x1805BFB80 (-Invoke@-$delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@.c)
 *     ??$invoke@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@USharedDesktopBackgroundVisualHost@@USize@234@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@1@AEBUSharedDesktopBackgroundVisualHost@@AEBUSize@341@@Z @ 0x180608F78 (--$invoke@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>::operator()(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3)
{
  __m128 v3; // xmm1
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__m128)a3[1];
  v4 = *a1;
  v5 = *a2;
  v9 = 0LL;
  v8 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)v4 + 24LL))(
         v4,
         v5,
         _mm_unpacklo_ps((__m128)*a3, v3).m128_u64[0]);
  return winrt::check_hresult(&v10, v6, &v8);
}
