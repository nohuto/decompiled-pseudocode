/*
 * XREFs of ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x180467F80
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801E7788 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800D54D4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_1800D54D4.c)
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180177AEC (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 *     ??$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4AnimationType@@@Details@WRL@Microsoft@@YAJPEAPEAVHostingAnimationListener@@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAW4AnimationType@@@Z @ 0x1801CF40C (--$MakeAndInitialize@VHostingAnimationListener@@V1@PEAVTouchKeyboardExperienceManager@@W4Animati.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ @ 0x1802BEF24 (--0TouchKeyboardThemeInfo@TouchKeyboardExperienceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=61
TouchKeyboardExperienceManager *__fastcall TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(
        TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager *v1; // rdi
  _QWORD *v2; // rax
  TouchKeyboardExperienceManager *v3; // r8
  CExperienceManagerAnimationHelper *v4; // r14
  CExperienceManagerAnimationHelper *v5; // r15
  CExperienceManagerAnimationHelper *v6; // r12
  CExperienceManagerAnimationHelper *v7; // r13
  HostingAnimationListener **v8; // rbx
  HostingAnimationListener **v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  int UniqueContext; // eax
  TouchKeyboardExperienceManager *v16; // rcx
  struct TouchKeyboardExperienceManager *v17; // r14
  unsigned int v19; // [rsp+68h] [rbp+48h] BYREF
  TouchKeyboardExperienceManager *v20; // [rsp+70h] [rbp+50h] BYREF

  v1 = this;
  v20 = this;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>(this);
  *(_QWORD *)v1 = &TouchKeyboardExperienceManager::`vftable';
  *((_QWORD *)v1 + 1) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v1 + 6) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)v1 + 7) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)v1 + 14) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v1 + 15) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationFrameEventHandler'};
  *((_QWORD *)v1 + 16) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v1 + 17) = &TouchKeyboardExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)v1 + 18) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v1 + 19) = &TouchKeyboardExperienceManager::`vftable'{for `IApplicationStateChangeHandler'};
  *((_QWORD *)v1 + 20) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v1 + 21) = &TouchKeyboardExperienceManager::`vftable'{for `IGlobalRudeWindowNotifications'};
  *((_QWORD *)v1 + 22) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v1 + 23) = &TouchKeyboardExperienceManager::`vftable'{for `IDWMStoryboardListener'};
  *((_QWORD *)v1 + 24) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v1 + 25) = &TouchKeyboardExperienceManager::`vftable'{for `Windows::Internal::Shell::Text::IInputExperienceHost'};
  *((_QWORD *)v1 + 26) = &TouchKeyboardExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)v1 + 33) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)v1 + 32) = v2;
  *((_QWORD *)v1 + 34) = 0LL;
  *((_QWORD *)v1 + 35) = 0LL;
  *((_QWORD *)v1 + 36) = 0LL;
  *((_QWORD *)v1 + 37) = 0LL;
  *((_QWORD *)v1 + 38) = 0LL;
  *((_QWORD *)v1 + 39) = 0LL;
  *((_QWORD *)v1 + 40) = 0LL;
  *((_QWORD *)v1 + 41) = 0LL;
  *((_QWORD *)v1 + 42) = 0LL;
  *((_QWORD *)v1 + 43) = 0LL;
  *((_QWORD *)v1 + 44) = 0LL;
  *((_QWORD *)v1 + 45) = 0LL;
  *((_QWORD *)v1 + 46) = 0LL;
  *((_QWORD *)v1 + 47) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v1 + 384), 0, 0);
  InitializeSRWLock((PSRWLOCK)v1 + 53);
  *((_QWORD *)v1 + 54) = 0LL;
  *((_QWORD *)v1 + 55) = 0LL;
  *((_QWORD *)v1 + 56) = 0LL;
  *((_QWORD *)v1 + 57) = 0LL;
  *(_OWORD *)((char *)v1 + 488) = 0LL;
  *((_QWORD *)v1 + 63) = 0LL;
  *((_QWORD *)v1 + 64) = 7LL;
  *((_WORD *)v1 + 244) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)v1 + 13, 0, 0);
  v3 = v1;
  *((_BYTE *)v1 + 560) = 0;
  *((_DWORD *)v1 + 141) = 0;
  *((_BYTE *)v1 + 568) = 0;
  *((_QWORD *)v1 + 72) = 0LL;
  *((_QWORD *)v1 + 73) = 0LL;
  *((_QWORD *)v1 + 75) = 0LL;
  *((_QWORD *)v1 + 74) = 0LL;
  *((_DWORD *)v1 + 152) = -1;
  *(_QWORD *)((char *)v1 + 612) = 0LL;
  *((_DWORD *)v1 + 155) = 0;
  *((_QWORD *)v1 + 78) = 0LL;
  *((_QWORD *)v1 + 79) = 0LL;
  *((_QWORD *)v1 + 80) = 0LL;
  v4 = (TouchKeyboardExperienceManager *)((char *)v1 + 648);
  *((_BYTE *)v1 + 648) = 0;
  *((_DWORD *)v1 + 163) = 103;
  *((GUID *)v1 + 41) = GUID_NULL;
  *((_QWORD *)v1 + 84) = 0LL;
  v5 = (TouchKeyboardExperienceManager *)((char *)v1 + 680);
  *((_BYTE *)v1 + 680) = 0;
  *((_DWORD *)v1 + 171) = 105;
  *((GUID *)v1 + 43) = GUID_NULL;
  *((_QWORD *)v1 + 88) = 0LL;
  v6 = (TouchKeyboardExperienceManager *)((char *)v1 + 712);
  *((_BYTE *)v1 + 712) = 0;
  *((_DWORD *)v1 + 179) = 106;
  *((GUID *)v1 + 45) = GUID_NULL;
  *((_QWORD *)v1 + 92) = 0LL;
  v7 = (TouchKeyboardExperienceManager *)((char *)v1 + 744);
  *((_BYTE *)v1 + 744) = 0;
  *((_DWORD *)v1 + 187) = 107;
  *((GUID *)v1 + 47) = GUID_NULL;
  *((_QWORD *)v1 + 96) = 0LL;
  v8 = (HostingAnimationListener **)((char *)v1 + 776);
  *((_QWORD *)v1 + 97) = 0LL;
  v1 = (TouchKeyboardExperienceManager *)((char *)v1 + 784);
  *(_QWORD *)v1 = 0LL;
  v9 = (HostingAnimationListener **)((char *)v3 + 792);
  *((_QWORD *)v3 + 99) = 0LL;
  *((_QWORD *)v3 + 100) = 0LL;
  *((_QWORD *)v3 + 101) = 0LL;
  *((_QWORD *)v3 + 102) = 0LL;
  *((_QWORD *)v3 + 103) = 0LL;
  *((_QWORD *)v3 + 104) = 0LL;
  *((_DWORD *)v3 + 210) = 0;
  *(_OWORD *)((char *)v3 + 844) = 0LL;
  *((_QWORD *)v3 + 115) = 0LL;
  *((_QWORD *)v3 + 116) = 0LL;
  *((_WORD *)v3 + 468) = 0;
  *((_BYTE *)v3 + 938) = 0;
  *((_DWORD *)v3 + 235) = 0;
  *((_BYTE *)v3 + 944) = 0;
  *(_QWORD *)((char *)v3 + 948) = 0LL;
  *((_QWORD *)v3 + 120) = 0LL;
  *((_BYTE *)v3 + 968) = 0;
  *((_QWORD *)v3 + 122) = 0LL;
  *((_BYTE *)v3 + 984) = 0;
  *((_QWORD *)v3 + 124) = 0LL;
  *((_QWORD *)v3 + 125) = 0LL;
  *((_DWORD *)v3 + 252) = -2147023728;
  *((_WORD *)v3 + 506) = 0;
  *((_DWORD *)v3 + 254) = 0;
  TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::TouchKeyboardThemeInfo((TouchKeyboardExperienceManager *)((char *)v3 + 1024));
  TouchKeyboardExperienceManager::TouchKeyboardThemeInfo::TouchKeyboardThemeInfo((TouchKeyboardExperienceManager::TouchKeyboardThemeInfo *)(v10 + 1552));
  *(_OWORD *)(v11 + 2080) = 0LL;
  *(_QWORD *)(v11 + 2096) = v12;
  v13 = (unsigned int)(v12 + 7);
  *(_QWORD *)(v11 + 2104) = v13;
  *(_WORD *)(v11 + 2080) = v12;
  *(_OWORD *)(v11 + 2112) = 0LL;
  *(_QWORD *)(v11 + 2128) = v12;
  *(_QWORD *)(v11 + 2136) = v13;
  *(_WORD *)(v11 + 2112) = v12;
  *(_DWORD *)(v11 + 2144) = v12;
  *(_QWORD *)(v11 + 2148) = 1LL;
  *(_QWORD *)(v11 + 2156) = v12;
  *(_DWORD *)(v11 + 2164) = v12;
  *(_BYTE *)(v11 + 2168) = v12;
  *(_QWORD *)(v11 + 2176) = v12;
  *(_QWORD *)(v11 + 2184) = v12;
  *(_QWORD *)(v11 + 2192) = v12;
  *(_QWORD *)(v11 + 2200) = v12;
  *(_QWORD *)(v11 + 2208) = v12;
  *(_QWORD *)(v11 + 2216) = v12;
  *(_QWORD *)(v11 + 2224) = v12;
  *(_QWORD *)(v11 + 2232) = v12;
  *(_QWORD *)(v11 + 2240) = v12;
  *(_QWORD *)(v11 + 2248) = v12;
  *(_QWORD *)(v11 + 2256) = v12;
  *(_QWORD *)(v11 + 2264) = v12;
  *(_QWORD *)(v11 + 2272) = v12;
  *(_QWORD *)(v11 + 2280) = v12;
  *(_QWORD *)(v11 + 2288) = v12;
  *(_QWORD *)(v11 + 2296) = v12;
  *(_QWORD *)(v11 + 2304) = v12;
  *(_QWORD *)(v11 + 2312) = v12;
  *(_QWORD *)(v11 + 2320) = v12;
  *(_QWORD *)(v11 + 2328) = v12;
  *(_QWORD *)(v11 + 2336) = v12;
  *(_QWORD *)(v11 + 2344) = v12;
  *(_QWORD *)(v11 + 2352) = v12;
  *(_QWORD *)(v11 + 2360) = v12;
  *(_QWORD *)(v11 + 2368) = v12;
  UniqueContext = SHTaskPoolGetUniqueContext(v14);
  v16 = v20;
  *((_DWORD *)v20 + 243) = UniqueContext;
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    v4,
    (TouchKeyboardExperienceManager *)((char *)v16 + 184));
  v19 = 1;
  v17 = v20;
  Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
    v8,
    &v20,
    &v19);
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    v5,
    (struct IDWMStoryboardListener *)(((unsigned __int64)*v8 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v8 >> 64)));
  v19 = 2;
  v20 = v17;
  Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
    (HostingAnimationListener **)v1,
    &v20,
    &v19);
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    v6,
    (struct IDWMStoryboardListener *)((*(_QWORD *)v1 + 8LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)v1 >> 64)));
  v19 = 3;
  v20 = v17;
  Microsoft::WRL::Details::MakeAndInitialize<HostingAnimationListener,HostingAnimationListener,TouchKeyboardExperienceManager *,enum AnimationType>(
    v9,
    &v20,
    &v19);
  CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
    v7,
    (struct IDWMStoryboardListener *)(((unsigned __int64)*v9 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v9 >> 64)));
  TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager = v17;
  return v17;
}
