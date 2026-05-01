/*
 * XREFs of ??1SwitcherCommandingBridge@@QEAA@XZ @ 0x18049FFC8
 * Callers:
 *     ??R?$default_delete@VSwitcherCommandingBridge@@@std@@QEBAXPEAVSwitcherCommandingBridge@@@Z @ 0x1804A0238 (--R-$default_delete@VSwitcherCommandingBridge@@@std@@QEBAXPEAVSwitcherCommandingBridge@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$event_revoker@UIMessageReceiver@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIMessageReceiver@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x18049FF38 (--1-$event_revoker@UIMessageReceiver@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIMessageReceiver.c)
 */

void __fastcall SwitcherCommandingBridge::~SwitcherCommandingBridge(SwitcherCommandingBridge *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 3);
  __1__event_revoker_UIMessageReceiver_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIMessageReceiver_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
}
