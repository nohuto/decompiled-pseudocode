/*
 * XREFs of ?InputGestureStarted@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShellViewGestureReportedArgs@2345@@Foundation@Windows@3@@Z @ 0x18058D898
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800B77DC (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ??$make_event_revoker@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x1801F323C (--$make_event_revoker@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@U-$event_revoker@UIShellV.c)
 *     ?InputGestureStarted@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShellViewGestureReportedArgs@2345@@Foundation@Windows@3@@Z @ 0x180267B24 (-InputGestureStarted@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::InputGestureStarted(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v6; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v6 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::InputGestureStarted(
         a1,
         &v8,
         a4);
  ___make_event_revoker_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt__U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_IShellViewCoordinator3_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_01_PEBU__consume_WindowsUdk_UI_Shell_IShellViewCoordinator3_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
    a2,
    (void (__fastcall ****)(_QWORD, void *, _QWORD))a1,
    *v6);
  return a2;
}
