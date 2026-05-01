/*
 * XREFs of ??1KioskPositioner@@UEAA@XZ @ 0x1801A9A8C
 * Callers:
 *     ??_EKioskPositioner@@UEAAPEAXI@Z @ 0x1801A9A50 (--_EKioskPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x1800E4830 (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802C1CE0 (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall KioskPositioner::~KioskPositioner(KioskPositioner *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx

  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy((char *)this + 648);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 80);
  if ( v3 )
    std::default_delete<SnapLayoutBase>::operator()(v2, v3);
  SmartCookie::~SmartCookie((KioskPositioner *)((char *)this + 504));
  SmartCookie::~SmartCookie((KioskPositioner *)((char *)this + 376));
  SmartCookie::~SmartCookie((KioskPositioner *)((char *)this + 248));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 28);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 26);
  *((_DWORD *)this + 51) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IImmersiveLayoutChanges,IApplicationFrameEventHandler,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager,Windows::Internal::GamingOverlay::IGameBarWindowManager,Windows::Internal::GamingOverlay::IGameBarGameLauncher,Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>(this);
}
