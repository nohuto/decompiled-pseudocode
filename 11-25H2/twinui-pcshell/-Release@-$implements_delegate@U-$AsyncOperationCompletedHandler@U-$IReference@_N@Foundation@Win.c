/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_985bae7315308d415c04588d298dcf5f_@@@impl@winrt@@UEAAIXZ @ 0x18034DC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$implements_delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@V_lambda_6a7e9cbc3490d6ece0ee94480339df95_@@@impl@winrt@@QEAA@XZ @ 0x1800E9CF8 (--1-$implements_delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EAE8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,_lambda_985bae7315308d415c04588d298dcf5f_>::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(Block + 2);
  if ( !v2 && Block )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>((__int64)Block);
    operator delete((void *)Block);
  }
  return v2;
}
