/*
 * XREFs of ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x18004EA14
 * Callers:
 *     ??0CApplicationManager@@QEAA@XZ @ 0x18004CC44 (--0CApplicationManager@@QEAA@XZ.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x18004E44C (--0CImmersiveMode@@QEAA@XZ.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x18004E814 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1802B1788 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x1802F13DC (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x1804857F8 (--0CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x18048F0E4 (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ??0?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ @ 0x18049DAC8 (--0-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18049E1B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0DesktopOperation@@QEAA@XZ @ 0x1804F1AC8 (--0DesktopOperation@@QEAA@XZ.c)
 *     ??0AppSwitchOperation@@QEAA@XZ @ 0x180500AEC (--0AppSwitchOperation@@QEAA@XZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x180501F38 (--0WindowArrangementOperation@@QEAA@XZ.c)
 *     ??0AppResizeOperation@@QEAA@XZ @ 0x180502B1C (--0AppResizeOperation@@QEAA@XZ.c)
 *     ??0BackOperation@@QEAA@XZ @ 0x18050361C (--0BackOperation@@QEAA@XZ.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x180503B38 (--0TabletModePositionerOperation@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1806816B4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UISnapAss.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1806840FC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIVirtual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = -2;
  *(_DWORD *)(a1 + 44) = a2;
  InitializeCriticalSection((LPCRITICAL_SECTION)a1);
  return a1;
}
