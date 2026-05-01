/*
 * XREFs of ??1CImmersiveMode@@MEAA@XZ @ 0x1802F05B4
 * Callers:
 *     ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x1802F0850 (--_ECImmersiveMode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@QEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180027F20 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z @ 0x1802F0984 (-DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z.c)
 */

void __fastcall CImmersiveMode::~CImmersiveMode(CImmersiveMode *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CImmersiveMode::`vftable';
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 9) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 10) = &CImmersiveMode::`vftable'{for `IImmersiveSystemMode'};
  *((_QWORD *)this + 11) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 12) = &CImmersiveMode::`vftable'{for `IActiveZBand'};
  *((_QWORD *)this + 13) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IImmersiveSystemModeNotificationServicePrivate>,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 15) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 17) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 18) = &CImmersiveMode::`vftable'{for `IDesktopVisibilityService'};
  *((_QWORD *)this + 19) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDesktopVisibilityChangesNotification>'};
  v2 = (void *)*((_QWORD *)this + 52);
  if ( v2 )
  {
    CTContainer_PolicyLocalMem::DestroyMem(v2);
    *((_QWORD *)this + 52) = 0LL;
  }
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  v3 = (void *)*((_QWORD *)this + 48);
  if ( v3 )
  {
    CTContainer_PolicyLocalMem::DestroyMem(v3);
    *((_QWORD *)this + 48) = 0LL;
  }
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 41);
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v4, *((_QWORD *)this + 36));
    std::_Deallocate<16,0>(
      *((void **)this + 35),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 37) - *((_QWORD *)this + 35)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
  }
  v5 = *((_QWORD *)this + 30);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(v5, *((_QWORD *)this + 31));
    std::_Deallocate<16,0>(
      *((void **)this + 30),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 32) - *((_QWORD *)this + 30)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  *((_DWORD *)this + 45) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>((__int64)this);
}
