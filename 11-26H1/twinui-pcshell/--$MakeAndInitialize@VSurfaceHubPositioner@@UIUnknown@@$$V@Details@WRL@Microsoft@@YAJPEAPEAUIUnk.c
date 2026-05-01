/*
 * XREFs of ??$MakeAndInitialize@VSurfaceHubPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18017FF5C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VSurfaceHubPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18017FEB0 (-CreateInstance@-$SimpleClassFactory@VSurfaceHubPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UISurfaceHubPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180180020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180180020.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UISurfaceHubPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UISurfaceHubPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180180098 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_180180098.c)
 *     ?RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ @ 0x1802BBB28 (-RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SurfaceHubPositioner@@QEAA@XZ @ 0x1804ED9EC (--0SurfaceHubPositioner@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SurfaceHubPositioner,IUnknown,>(_QWORD *a1)
{
  SurfaceHubPositioner *v2; // rax
  int v3; // edi
  SurfaceHubPositioner *v4; // rbx

  *a1 = 0LL;
  v2 = (SurfaceHubPositioner *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = SurfaceHubPositioner::SurfaceHubPositioner(v2);
    v3 = SurfaceHubPositioner::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<ISurfaceHubPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener>>(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<ISurfaceHubPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
