/*
 * XREFs of ??0BroadcastDVRComponent@@QEAA@XZ @ 0x1802C6F80
 * Callers:
 *     ??$MakeAndInitialize@VBroadcastDVRComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801DE014 (--$MakeAndInitialize@VBroadcastDVRComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800BD898 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x1800D7384 (--0CGITRegistrationList@@QEAA@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x18022B740 (-clear@-$_Tree@V-$_Tmap_traits@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroad.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBroadcastDVRComponent@@UIBroadcastDVRCommand@@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationNotification@@UIApplicationViewChangeListener@@UIImmersiveSessionIdleNotification@@@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveShellHookNotification@@UIGameFocusNotificationService@@VFtmBase@23@@23@@WRL@Microsoft@@QEAA@XZ @ 0x18022EEF8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeC_ea_18022EEF8.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
BroadcastDVRComponent *__fastcall BroadcastDVRComponent::BroadcastDVRComponent(BroadcastDVRComponent *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>((__int64)this);
  *(_QWORD *)this = &BroadcastDVRComponent::`vftable'{for `IBroadcastDVRComponent'};
  *((_QWORD *)this + 1) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 2) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>'};
  *((_QWORD *)this + 7) = &BroadcastDVRComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 8) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 15) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>>'};
  *((_QWORD *)this + 16) = &BroadcastDVRComponent::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 17) = &BroadcastDVRComponent::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  *((_QWORD *)this + 19) = &BroadcastDVRComponent::`vftable';
  *((_QWORD *)this + 20) = &BroadcastDVRComponent::`vftable'{for `IGameFocusNotificationService'};
  *((_QWORD *)this + 21) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = SHTaskPoolGetUniqueContext(v2);
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 33) = v3;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 16842752;
  *(_QWORD *)((char *)this + 436) = 0LL;
  *(_QWORD *)((char *)this + 444) = 257LL;
  *((_BYTE *)this + 452) = 0;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = GetTickCount64();
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  CGITRegistrationList::CGITRegistrationList((BroadcastDVRComponent *)((char *)this + 512));
  *((_QWORD *)this + 70) = 0LL;
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::clear((_QWORD *)this + 33);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1808D50F0);
  return this;
}
