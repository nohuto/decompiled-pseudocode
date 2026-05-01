/*
 * XREFs of ??1_Reallocation_guard@?$vector@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@QEAA@XZ @ 0x1806129D4
 * Callers:
 *     ??$_Emplace_reallocate@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@?$vector@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@AEAAPEAU?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAU234@$$QEAU234@@Z @ 0x180027528 (--$_Emplace_reallocate@U-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@U.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAU123@AEAV?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@0@@Z @ 0x180027818 (--$_Destroy_range@V-$allocator@U-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall __1_Reallocation_guard___vector_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__V__allocator_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___std___std__QEAA_XZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    ____Destroy_range_V__allocator_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___std___std__YAXPEAU__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAU123_AEAV__allocator_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___0__Z(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(16LL * *(_QWORD *)(a1 + 16)));
  }
}
