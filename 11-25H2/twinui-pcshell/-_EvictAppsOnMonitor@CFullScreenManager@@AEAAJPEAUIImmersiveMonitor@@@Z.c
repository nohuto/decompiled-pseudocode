/*
 * XREFs of ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180205A44
 * Callers:
 *     ?DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180227B50 (-DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800F44C8 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18012EBA8 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180217F3C (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::_EvictAppsOnMonitor(IUnknown **this, struct IImmersiveMonitor *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  void *v6; // rbx
  __int64 (__fastcall *v7)(void *, __int64, struct IImmersiveMonitor *, __int64 *); // rdi
  int v8; // eax
  HRESULT v9; // eax
  __int64 v10; // rax
  HMONITOR v11; // rax
  void *v12; // rbx
  HMONITOR v13; // rsi
  int (__fastcall *v14)(void *, HMONITOR, __int64 *); // rdi
  void *v15; // rbx
  void (__fastcall *v16)(void *, _QWORD, GUID *, GUID *, __int64 *); // rdi
  __int64 (__fastcall ***v17)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v18; // rdx
  __int64 v19; // rbx
  __int64 v21; // [rsp+30h] [rbp-49h] BYREF
  void *v22; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveApplication *ApplicationFromView; // [rsp+50h] [rbp-29h] BYREF
  ApplicationViewHelpers *v26; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-19h] BYREF
  ApplicationViewHelpers *v28[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v29; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+7h]
  int v31; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v32[2]; // [rsp+90h] [rbp+17h] BYREF
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AB,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_16;
  }
  v6 = ppvOut;
  v23 = 0LL;
  v7 = *(__int64 (__fastcall **)(void *, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)ppvOut + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v8 = v7(v6, 4LL, a2, &v23);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_5:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    goto LABEL_16;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  v9 = IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &v22);
  v5 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    goto LABEL_5;
  }
  v10 = *(_QWORD *)a2;
  v21 = 0LL;
  rc = 0LL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, RECT *))(v10 + 72))(a2, &rc) < 0
    || (v11 = MonitorFromRect(&rc, 2u),
        v12 = v22,
        v13 = v11,
        v14 = *(int (__fastcall **)(void *, HMONITOR, __int64 *))(*(_QWORD *)v22 + 48LL),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21),
        v14(v12, v13, &v21) < 0) )
  {
    v15 = v22;
    v16 = *(void (__fastcall **)(void *, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v22 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    v16(v15, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v21);
  }
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v29,
    v23);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    &v27,
    &v29,
    0LL);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    &v31,
    &v29,
    v30);
  while ( v27 != v31 || v28[1] != (ApplicationViewHelpers *)v32[1] )
  {
    v17 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v28[0];
    v26 = v28[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(v17, v18);
    v19 = (__int64)ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ApplicationFromView);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 360LL))(v19, v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ApplicationFromView);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    ++v27;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v5 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
