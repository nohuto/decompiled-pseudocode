/*
 * XREFs of ??$emplace_back@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@QEAAAEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@$$QEAU234@@Z @ 0x18058CF28
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800B77DC (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@?$vector@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@AEAAPEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAU234@$$QEAU234@@Z @ 0x18058CBF8 (--$_Emplace_reallocate@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8t.c)
 */

char *__fastcall ___emplace_back_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt_____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__QEAAAEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt____QEAU234__Z(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = (__int64 *)a1[1];
  if ( v2 == (__int64 *)a1[2] )
    return ____Emplace_reallocate_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt_____vector_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__AEAAPEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAU234___QEAU234__Z(
             a1,
             a1[1],
             a2);
  v3 = *a2;
  *a2 = 0LL;
  *v2 = v3;
  v2[1] = a2[1];
  v4 = a1[1];
  a1[1] = v4 + 16;
  return (char *)v4;
}
