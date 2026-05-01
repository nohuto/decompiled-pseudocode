/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbnailWindowFilter@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1804AB7C8
 * Callers:
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x1804AB7EC (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1804AB7A8 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChangeListener@@V-$.c)
 */

__int64 Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopThumbnailWindowFilter,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>()
{
  __int64 v0; // r10
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>();
  result = v0;
  *(_DWORD *)(v0 + 20) = 1;
  return result;
}
