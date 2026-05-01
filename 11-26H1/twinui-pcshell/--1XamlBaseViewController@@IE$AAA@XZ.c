/*
 * XREFs of ??1XamlBaseViewController@@IE$AAA@XZ @ 0x18009B22C
 * Callers:
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18009B69C (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x18009B724 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x1806B3094 (--1XamlAllUpViewController@@AE$AAA@XZ.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x1806C0B64 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x1806C1AC0 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 *     _VirtualDesktopSwitcherController::_VirtualDesktopSwitcherController_::_1_::dtor$0 @ 0x1806D1214 (_VirtualDesktopSwitcherController--_VirtualDesktopSwitcherController_--_1_--dtor$0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x1800A0720 (--1-$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8t.c)
 *     ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018DD64 (--1-$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall XamlBaseViewController::~XamlBaseViewController(__int64 *a1)
{
  __1__event_revoker_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt___MP8type___abi_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ(a1 + 13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 12));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 11));
  wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(a1 + 10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 6);
}
