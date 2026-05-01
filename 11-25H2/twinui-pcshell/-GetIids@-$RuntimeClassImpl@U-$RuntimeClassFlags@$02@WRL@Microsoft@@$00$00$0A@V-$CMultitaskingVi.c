/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1806820F0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180682100 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CM_ea_180682100.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlSnapAssistViewHostInternal,ABI::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlSnapAssistViewHostInternal,ABI::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost,IXamlSnapAssistViewHostInternal,IImmersiveMonitorNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>>(
           a1,
           a2,
           a3);
}
