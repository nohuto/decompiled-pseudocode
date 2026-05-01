/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAA@XZ @ 0x18067EAA4
 * Callers:
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$0 @ 0x1806DDF18 (_TaskViewHost--TaskViewHost_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 148) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>(a1);
}
