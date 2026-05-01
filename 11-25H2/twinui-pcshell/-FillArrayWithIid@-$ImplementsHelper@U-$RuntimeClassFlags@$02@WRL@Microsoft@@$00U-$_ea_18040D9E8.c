/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@WRL@Microsoft@@@Details@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18040D9E8
 * Callers:
 *     ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIWindowEventDispatcherInternal@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@UIWindowDispatcherConnectedStandby@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@UINtUserViewWrapperCollection@@@23@VFtmBase@23@@123@PEAKPEAPEAU_GUID@@@Z @ 0x180404640 (--$GetImplementedIIDS@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker,INtUserViewWrapperCollection>,Microsoft::WRL::FtmBase>::FillArrayWithIid(
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
  __int64 result; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_f3305f7e_8b9b_41f2_be95_4e832447c357;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = GUID_73d6c545_9771_4aba_bb8c_713133ed635a;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_030de2aa_3f4c_47de_9c7b_0bada6462586;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  v10 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v10) = GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db;
  v11 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v11) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  v12 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v12) = GUID_4637e79c_de03_4aef_8a87_e796659e5e8d;
  *(GUID *)(a3 + 16LL * v3) = GUID_8a6f7053_3035_4eb7_8020_551e80a67998;
  result = v3 + 1;
  *a2 = result;
  return result;
}
