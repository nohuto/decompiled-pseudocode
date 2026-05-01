/*
 * XREFs of ?subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x1804E5570
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802BEBF4 (-reset@-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@P6AXPEAU1@@Z$1?UnregisterGamingFullScreenExperienceChangeNotification@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@@Z @ 0x1804DAD88 (-reset@-$unique_storage@U-$resource_policy@PEAUGAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__@@P6A.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVGamingPosturePositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVGamingPosturePositioner@@@Z @ 0x1804E0734 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1804E0734.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVGamingPosturePositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVGamingPosturePositioner@@@Z @ 0x1804E0814 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_1804E0814.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVGamingPosturePositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVGamingPosturePositioner@@@Z @ 0x1804E08F4 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1804E08F4.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingPosturePositioner::subscribe_to_services(
        GamingPosturePositioner *this,
        struct IServiceProvider *a2)
{
  const struct _tlgProvider_t *v4; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v6; // eax
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v16; // eax
  __int64 v17; // r8
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v19; // eax
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v21; // eax
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v23; // eax
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v25; // rcx
  int v26; // eax
  HRESULT (__stdcall *v27)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v28; // eax
  int v29; // [rsp+20h] [rbp-28h]
  int v30; // [rsp+20h] [rbp-28h]
  int v31; // [rsp+20h] [rbp-28h]
  int v32; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v34; // [rsp+50h] [rbp+8h] BYREF

  v4 = GamingPosturePositionerTraceProvider::Provider((__int64)this);
  if ( *(_DWORD *)v4 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v4,
      byte_1807DCD71,
      0LL);
  QueryService = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 11);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 88);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13B,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v6,
      v29);
  v7 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 12);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 96);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v8,
      v29);
  v30 = (_DWORD)this - 64;
  v10 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),GamingPosturePositioner *>(
          (__int64)this + 168,
          *((_QWORD *)this + 12),
          v9);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x141,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v10,
      v30);
  lpVtbl = a2->lpVtbl;
  v34 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          &v34);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x144,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v12,
      v30);
  v31 = (_DWORD)this - 64;
  v14 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),GamingPosturePositioner *>(
          (__int64)this + 296,
          v34,
          v13);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x148,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v14,
      v31);
  v15 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 13);
  v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
          a2,
          &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
          &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
          (char *)this + 104);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x14A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v16,
      v31);
  v32 = (_DWORD)this - 64;
  SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),GamingPosturePositioner *>(
    (__int64)this + 424,
    *((_QWORD *)this + 13),
    v17);
  v18 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 14);
  v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v18)(
          a2,
          &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
          &GUID_4aa32b90_a324_4d8b_aa7e_c8a4b13e5b90,
          (char *)this + 112);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x150,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v19,
      v32);
  v20 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 15);
  v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v20)(
          a2,
          &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6,
          &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6,
          (char *)this + 120);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x151,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v21,
      v32);
  v22 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 16);
  v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v22)(
          a2,
          &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8,
          &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8,
          (char *)this + 128);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v23,
      v32);
  v24 = a2->lpVtbl->QueryService;
  v25 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v26 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v24)(
          a2,
          &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
          &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
          (char *)this + 136);
  if ( v26 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x153,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v26,
      v32);
  v27 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 81);
  v28 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v27)(
          a2,
          &SID_GamingPostureController,
          &GUID_b525603c_e3b6_51fa_bdfc_1ac36cf03dc8,
          (char *)this + 648);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x154,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v28,
      v32);
  wil::details::unique_storage<wil::details::resource_policy<GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,void (*)(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),&void UnregisterGamingFullScreenExperienceChangeNotification(GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *),wistd::integral_constant<unsigned __int64,0>,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,GAMING_FULL_SCREEN_EXPERIENCE_REGISTRATION__ *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 80,
    0LL);
  RegisterGamingFullScreenExperienceChangeNotification(
    lambda_7403f855236cea0e6d88639637f0f4a5_::_lambda_invoker_cdecl_,
    (char *)this - 64,
    (char *)this + 640);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
}
