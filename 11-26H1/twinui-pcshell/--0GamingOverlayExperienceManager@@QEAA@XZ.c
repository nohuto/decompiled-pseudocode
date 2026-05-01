/*
 * XREFs of ??0GamingOverlayExperienceManager@@QEAA@XZ @ 0x180234D14
 * Callers:
 *     ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1802348D0 (--$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGa.c)
 * Callees:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180136284 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x1801A3A40 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1801A3A40.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIApplicationFrameEventHandler@@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@UIGameBarWindowManager@89Windows@@UIGameBarGameLauncher@89Windows@@UIGameBarProtocolForResultsLauncher@89Windows@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1803413D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponent_ea_1803413D8.c)
 */

// Hidden C++ exception states: #wind=60
GamingOverlayExperienceManager *__fastcall GamingOverlayExperienceManager::GamingOverlayExperienceManager(
        GamingOverlayExperienceManager *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &GamingOverlayExperienceManager::`vftable';
  *((_QWORD *)this + 1) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = &GamingOverlayExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 15) = &GamingOverlayExperienceManager::`vftable'{for `IImmersiveLayoutChanges'};
  *((_QWORD *)this + 16) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 17) = &GamingOverlayExperienceManager::`vftable'{for `Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager'};
  *((_QWORD *)this + 18) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 19) = &GamingOverlayExperienceManager::`vftable'{for `Windows::Internal::GamingOverlay::IGameBarGameLauncher'};
  *((_QWORD *)this + 20) = &GamingOverlayExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 21) = &GamingOverlayExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 22) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_BYTE *)this + 328) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_BYTE *)this + 344) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 500LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 100LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 584), 0, 0);
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 80);
  InitializeSRWLock((PSRWLOCK)this + 81);
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(56LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 85) = v2;
  *((_DWORD *)this + 174) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(56LL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 88) = v3;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 7LL;
  *((_QWORD *)this + 94) = 8LL;
  *((_DWORD *)this + 174) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 90,
    0x10uLL,
    *((_QWORD *)this + 88));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 19, 0, 0);
  *((_QWORD *)this + 100) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 808), 0, 0);
  *((_QWORD *)this + 106) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 107);
  InitializeSRWLock((PSRWLOCK)this + 108);
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 888), 0, 0);
  *((_QWORD *)this + 116) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 117);
  InitializeSRWLock((PSRWLOCK)this + 118);
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_BYTE *)this + 1008) = 1;
  *((_QWORD *)this + 127) = 0LL;
  *((_WORD *)this + 512) = 0;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_BYTE *)this + 1052) = 0;
  *((_DWORD *)this + 264) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1064), 0, 0);
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_DWORD *)this + 282) = 0;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1184), 0, 0);
  *((_QWORD *)this + 153) = 0LL;
  *((_QWORD *)this + 154) = 0LL;
  *((_QWORD *)this + 155) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1264), 0, 0);
  *((_QWORD *)this + 163) = 0LL;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 165) = 0LL;
  *((_QWORD *)this + 166) = 0LL;
  *((_QWORD *)this + 167) = 0LL;
  *((_BYTE *)this + 1344) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1352), 0, 0);
  *((_QWORD *)this + 174) = 0LL;
  *((_QWORD *)this + 175) = 0LL;
  *((_QWORD *)this + 176) = 0LL;
  *((_QWORD *)this + 177) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 1424), 0, 0);
  *((_QWORD *)this + 183) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 184);
  InitializeSRWLock((PSRWLOCK)this + 185);
  *((_QWORD *)this + 186) = 0LL;
  *((_QWORD *)this + 187) = 0LL;
  *((_QWORD *)this + 188) = 0LL;
  *((_DWORD *)this + 378) = -1;
  *(_QWORD *)((char *)this + 1532) = 0LL;
  *((_QWORD *)this + 193) = 0LL;
  *((_QWORD *)this + 194) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 195);
  InitializeSRWLock((PSRWLOCK)this + 196);
  *((_WORD *)this + 788) = 256;
  *((_DWORD *)this + 395) = SHTaskPoolGetUniqueContext(v4);
  *((_QWORD *)this + 198) = 0LL;
  *((_QWORD *)this + 199) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((GamingOverlayExperienceManager *)((char *)this + 1600));
  *((_BYTE *)this + 1616) = 0;
  *((_QWORD *)this + 203) = 0LL;
  *((_QWORD *)this + 204) = 0LL;
  *((_QWORD *)this + 205) = 0LL;
  *((_QWORD *)this + 206) = 0LL;
  *((_QWORD *)this + 207) = 0LL;
  *((_QWORD *)this + 208) = 0LL;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 210) = 0LL;
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 212) = 0LL;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 215) = 0LL;
  *((_QWORD *)this + 216) = 0LL;
  *((_QWORD *)this + 217) = 0LL;
  return this;
}
