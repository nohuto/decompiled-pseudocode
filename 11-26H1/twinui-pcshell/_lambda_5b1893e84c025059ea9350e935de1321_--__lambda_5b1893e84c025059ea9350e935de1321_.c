/*
 * XREFs of _lambda_5b1893e84c025059ea9350e935de1321_::__lambda_5b1893e84c025059ea9350e935de1321_ @ 0x1802C2398
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___ @ 0x1806BB858 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--Display_ea_1806BB858.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321___ @ 0x1806BC5E4 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1806BC5E4.c)
 *     _TaskViewFrame::RegisterForEvents_::_1_::dtor$31 @ 0x1806D8DA1 (_TaskViewFrame--RegisterForEvents_--_1_--dtor$31.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs___lambda_5b1893e84c025059ea9350e935de1321____::_1_::dtor$0 @ 0x180708083 (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--DisplayMonitorInfoC.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall lambda_5b1893e84c025059ea9350e935de1321_::__lambda_5b1893e84c025059ea9350e935de1321_(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*a1);
}
