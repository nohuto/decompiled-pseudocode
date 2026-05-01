/*
 * XREFs of ?Hide@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18059DACC
 * Callers:
 *     ?Hide@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x180240890 (-Hide@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@3@@Z @ 0x1801CB1B8 (-revoke_impl@-$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@-$.c)
 *     ?get@?$weak_ref@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18022397C (-get@-$weak_ref@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ?Hide@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027440C (-Hide@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$SnapFlyoutInstance_Hide@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1802CC28C (--$SnapFlyoutInstance_Hide@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Hide(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 93) != 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA5,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  if ( *((_BYTE *)this + 340) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA6,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  if ( !*((_BYTE *)this + 339) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA7,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      a4);
  SnapFlyoutTelemetry::SnapFlyoutInstance_Hide<unsigned int &>((int *)this + 80);
  v8 = 0LL;
  v5 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  v9 = v5;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 28, &v8);
  v6 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::WindowsUdk::UI::Shell::ISnapLayoutPickerExtension2>::get(
                                                                                             &v9,
                                                                                             &v10);
  _revoke_impl___event_revoker_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_3__Z(
    (__int64)this + 224,
    v6);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension>::Hide((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 36);
  *((_BYTE *)this + 339) = 0;
  *((_BYTE *)this + 342) = 1;
}
