/*
 * XREFs of ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x180518690
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18051D9EC (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800781E4 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802099B8 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804BC920 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TabletModePositioner::GetTopOperableView(
        TabletModePositioner *this,
        struct IObjectArray *a2,
        __int64 (__fastcall ****a3)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(ApplicationViewHelpers *, GUID *, __int64 *); // rdi
  __int64 *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  TabletModePositionerHelpers *v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+38h] [rbp-38h]
  unsigned int v21; // [rsp+40h] [rbp-30h] BYREF
  TabletModePositionerHelpers *v22[2]; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v26; // [rsp+A0h] [rbp+30h] BYREF
  int v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+48h] BYREF

  *a3 = 0LL;
  v28 = 0LL;
  v5 = *((_QWORD *)this + 47);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v7 = v6(v5, &v28);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x891,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      return v8;
    }
  }
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v19,
    (__int64)a2);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v21,
    (__int64)&v19,
    0);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v23,
    (__int64)&v19,
    v20);
  while ( 1 )
  {
    if ( v21 == v23 && v22[1] == (TabletModePositionerHelpers *)v24[1] )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v22);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      return 2147943568LL;
    }
    v10 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v22[0];
    v18 = v22[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v26 = 0;
    if ( TabletModePositionerHelpers::IsOperableView(v10, v11) )
    {
      v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), int *))(*v10)[11])(
              v10,
              &v26);
      v13 = retaddr;
      if ( v12 < 0 )
      {
        v14 = 2201LL;
LABEL_10:
        wil::details::in1diag3::_Log_Hr(
          v13,
          (void *)v14,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_20;
      }
      if ( v26 )
      {
        v27 = 0;
        if ( !v28 )
          break;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v28 + 24LL))(v28, v10, &v27);
        v13 = retaddr;
        if ( v12 < 0 )
        {
          v14 = 2222LL;
          goto LABEL_10;
        }
        if ( v27 )
          break;
      }
    }
LABEL_20:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
    ++v21;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
  }
  v17 = 0LL;
  v27 = 0;
  v15 = (*v10)[13];
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v17);
  if ( (int)v15((ApplicationViewHelpers *)v10, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, v16) < 0
    || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 32LL))(v17, &v27) < 0
    || v27 == 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  *a3 = v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  return 0LL;
}
