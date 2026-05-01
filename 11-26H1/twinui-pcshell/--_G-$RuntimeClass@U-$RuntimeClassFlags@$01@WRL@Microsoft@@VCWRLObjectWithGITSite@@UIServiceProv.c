/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18039A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIServiceProvider@@UIShouldSwitchToDesktop@@UILayoutPreferencesOnAppLaunch@@UIExecuteCommandHost@@UILocalCopyDownloadSettings@@UIWakeOnRPCCalls@@UILaunchTargetMonitor@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18039A608 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_18039A608.c)
 */

CWRLObjectWithGITSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        CWRLObjectWithGITSite *a1,
        char a2)
{
  *((_DWORD *)a1 + 35) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,IUpdateViewValueSet,Microsoft::WRL::FtmBase>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
