/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180225190
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1803D8D20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1803D8D20.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1803D8D30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1803D8D30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WGI@EAAKXZ @ 0x1803D8D40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1803D8D40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x1803D8D50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1803D8D50.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WHI@EAAKXZ @ 0x1803D8D60 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1803D8D60.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@WJA@EAAKXZ @ 0x1804B1E30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 156), a2);
}
