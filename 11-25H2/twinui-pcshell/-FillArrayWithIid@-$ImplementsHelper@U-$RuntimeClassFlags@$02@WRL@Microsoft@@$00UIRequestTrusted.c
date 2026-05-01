/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1802E5E90
 * Callers:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1802E5D30 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationMan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_2a239388_fc85_4077_981e_9e4205cf9451;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = GUID_8332fbec_5803_4461_be72_91b106e7af8a;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe;
  v10 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v10) = GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8;
  v11 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v11) = GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275;
  v12 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v12) = GUID_b706dded_208c_4795_b610_e7c002c31edc;
  v13 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v13) = GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee;
  *(GUID *)(a3 + 16LL * v3) = GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc;
  result = v3 + 1;
  *a2 = result;
  return result;
}
