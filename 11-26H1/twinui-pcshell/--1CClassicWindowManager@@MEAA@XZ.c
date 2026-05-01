/*
 * XREFs of ??1CClassicWindowManager@@MEAA@XZ @ 0x1802EC108
 * Callers:
 *     ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x1802EC470 (--_GCClassicWindowManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall CClassicWindowManager::~CClassicWindowManager(CClassicWindowManager *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi

  *(_QWORD *)this = &CClassicWindowManager::`vftable';
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>>'};
  *((_QWORD *)this + 9) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>>'};
  *((_QWORD *)this + 10) = &CClassicWindowManager::`vftable'{for `IApplicationActivationHistory'};
  *((_QWORD *)this + 11) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 12) = &CClassicWindowManager::`vftable'{for `IClassicWindowPresentation'};
  *((_QWORD *)this + 13) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 14) = &CClassicWindowManager::`vftable'{for `ITaskListChangeListener'};
  *((_QWORD *)this + 15) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowOwnershipQuery>'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 33);
  *((_QWORD *)this + 28) = &CClassicWindowActivationBasedCollection::`vftable';
  v2 = (unsigned __int64 *)((char *)this + 240);
  if ( *((_QWORD *)this + 29) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 29) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 23) = &CClassicWindowActivationBasedCollection::`vftable';
  if ( *((_QWORD *)this + 24) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 25); ++j )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 24) + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 24));
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  *((_DWORD *)this + 33) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>((__int64)this);
}
