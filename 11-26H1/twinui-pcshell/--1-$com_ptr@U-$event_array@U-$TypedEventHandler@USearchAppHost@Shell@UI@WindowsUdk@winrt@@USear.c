/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800DCA84
 * Callers:
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs___::operator()_winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs__::_1_::dtor$0 @ 0x1806D336D (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--Search.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs___::add_agile_::_1_::dtor$1 @ 0x1806E89E3 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--_ea_1806E89E3.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs___::remove_::_1_::dtor$0 @ 0x1806E8A19 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--_ea_1806E8A19.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs___::remove_::_1_::dtor$2 @ 0x1806E8A2B (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--_ea_1806E8A2B.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800DCBA8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchApp_ea_1800DCBA8.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>>::unconditional_release_ref();
  return result;
}
