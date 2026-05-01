/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileRemovedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ae55d667dee5f74db031bb94afbcc4c3_@@@impl@winrt@@UEAAIXZ @ 0x1800E9D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$implements_delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@V_lambda_6a7e9cbc3490d6ece0ee94480339df95_@@@impl@winrt@@QEAA@XZ @ 0x1800E9CF8 (--1-$implements_delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::TileRemovedEventArgs>,_lambda_ae55d667dee5f74db031bb94afbcc4c3_>::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference((winrt::impl::implements_delegate_base *)(a1 + 8));
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>((__int64)a1);
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}
