/*
 * XREFs of ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804F779C
 * Callers:
 *     ??1?$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ @ 0x1804F767C (--1-$module_count_wrapper@VGamingPosturePositioner@@@details@wil@@UEAA@XZ.c)
 *     ??_EGamingPosturePositioner@@UEAAPEAXI@Z @ 0x1804F89A4 (--_EGamingPosturePositioner@@UEAAPEAXI@Z.c)
 *     _wil::details::module_count_wrapper_GamingPosturePositioner_::module_count_wrapper_GamingPosturePositioner__::_1_::dtor$0 @ 0x1806F23C9 (_wil--details--module_count_wrapper_GamingPosturePositioner_--module_count_wrapper_GamingPosture.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018DD64 (--1-$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802C1CE0 (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180468A90 (--1-$unique_storage@U-$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1-UnhookWinEvent@@YAH0@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@P6AXPEAU1@@Z$1?UnregisterGamingFullScreenExperienceChangeNotification@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1804EA848 (--1-$unique_storage@U-$resource_policy@PEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@P6AXPEA.c)
 */

void __fastcall GamingPosturePositioner::~GamingPosturePositioner(GamingPosturePositioner *this)
{
  volatile int *v2; // rdx
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details *v4; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 99);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 98);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((GamingPosturePositioner *)((char *)this + 776));
  if ( *((_QWORD *)this + 96) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 96);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 95);
  wil::details::unique_storage<wil::details::resource_policy<GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,void (*)(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),&void UnregisterGamingFullScreenExperienceChangeNotification(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),wistd::integral_constant<unsigned __int64,0>,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,void (*)(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),&void UnregisterGamingFullScreenExperienceChangeNotification(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),wistd::integral_constant<unsigned __int64,0>,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,0,std::nullptr_t>>((_QWORD *)this + 94);
  wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
    (__int64 *)this + 93,
    v2);
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy((__int64)this + 712);
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy((__int64)this + 680);
  SmartCookie::~SmartCookie((GamingPosturePositioner *)((char *)this + 520));
  SmartCookie::~SmartCookie((GamingPosturePositioner *)((char *)this + 392));
  SmartCookie::~SmartCookie((GamingPosturePositioner *)((char *)this + 264));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 32);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 31);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 28);
  wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)this + 27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 22);
  wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>((HWINEVENTHOOK *)this + 20);
  v4 = (wil::details *)*((_QWORD *)this + 19);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, v3);
  winrt::immersive_shell_component::~immersive_shell_component((GamingPosturePositioner *)((char *)this + 64));
}
