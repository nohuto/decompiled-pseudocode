/*
 * XREFs of ?SubscribeToServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800900B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1801FEE14 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1801FEE14.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x180232E50 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNot_ea_180232E50.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1804ED908 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP8_ea_1804ED908.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::SubscribeToServices(SurfaceHubPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // ebx
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v7; // rax
  __int64 v8; // rdx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v11; // r15
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v13; // r8d
  int v14; // r9d
  int v15; // r8d
  int v16; // r9d
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 120);
  if ( v5 < 0 )
  {
    v8 = 121LL;
    goto LABEL_4;
  }
  v6 = a2->lpVtbl->QueryService;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 16);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v6)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v7);
  if ( v5 >= 0 )
  {
    v10 = a2->lpVtbl->QueryService;
    v11 = (_QWORD *)((char *)this + 136);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
           a2,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (char *)this + 136);
    if ( v5 < 0 )
    {
      v8 = 123LL;
      goto LABEL_4;
    }
    v12 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
           a2,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           (char *)this + 144);
    if ( v5 < 0 )
    {
      v8 = 124LL;
      goto LABEL_4;
    }
    v5 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),SurfaceHubPositioner *>(
           (int)this + 152,
           *((_QWORD *)this + 16),
           v13,
           v14,
           (__int64)this - 40);
    if ( v5 < 0 )
    {
      v8 = 129LL;
      goto LABEL_4;
    }
    v5 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),SurfaceHubPositioner *>(
           (int)this + 280,
           *v11,
           v15,
           v16,
           (__int64)this - 40);
    if ( v5 < 0 )
    {
      v8 = 134LL;
      goto LABEL_4;
    }
    v23 = 0LL;
    v17 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v17)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            &v23);
    v5 = v18;
    if ( v18 >= 0 )
    {
      v18 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),SurfaceHubPositioner *>(
              (int)this + 408,
              v23,
              v19,
              v20,
              (__int64)this - 40);
      v5 = v18;
      if ( v18 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v11 + 24LL))(*v11, (char *)this + 112);
        if ( *((_DWORD *)this + 28) != 1 )
          *((_BYTE *)this + 536) = 0;
        v5 = 0;
        goto LABEL_23;
      }
      v21 = 141LL;
    }
    else
    {
      v21 = 137LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v18);
LABEL_23:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    return (unsigned int)v5;
  }
  v8 = 122LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
