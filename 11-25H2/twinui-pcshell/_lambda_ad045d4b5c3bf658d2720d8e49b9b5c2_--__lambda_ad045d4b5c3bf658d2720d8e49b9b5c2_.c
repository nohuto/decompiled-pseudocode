/*
 * XREFs of _lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_::__lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_ @ 0x1806426A0
 * Callers:
 *     winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___ @ 0x1806421C8 (winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_-_ea_1806421C8.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::_implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___ @ 0x180642734 (winrt--impl--implements_delegate_winrt--Windows--Foundation--EventHandler_winrt--Wi_ea_180642734.c)
 *     _winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2____::_1_::dtor$0 @ 0x1806DC1A2 (_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable__ea_1806DC1A2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_::__lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 3));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 2));
  v2 = (std::_Ref_count_base *)a1[1];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
