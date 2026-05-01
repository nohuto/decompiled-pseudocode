/*
 * XREFs of ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1801B7F00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801C99B8 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180518C04 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::OnShellHookMessage(TabletModePositioner *this, __int64 a2, __int64 a3)
{
  IUnknown *v5; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, ApplicationViewHelpers **); // rbx
  int v12; // eax
  struct IApplicationView *v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  int inited; // eax
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  ApplicationViewHelpers *v19; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v5 = (IUnknown *)((char *)this - 168);
  if ( !*((_QWORD *)this + 15) )
    return 0LL;
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 168)) )
  {
    v10 = *((_QWORD *)this + 14);
    if ( !v10 )
    {
      v7 = 1481LL;
      goto LABEL_6;
    }
    v19 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v10 + 120LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    v12 = v11(v10, &v19);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CC,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_10;
    }
    if ( a3 == ApplicationViewHelpers::GetWindowForView(
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                 v13) )
    {
      v18 = *((_QWORD *)this + 14);
      v14 = v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 14);
      v22 = 0LL;
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      v16 = v15(v14, &v22);
      v8 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D8,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_9;
      }
      v21 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 v5,
                 &CLSID_TabletModePositionerOperation,
                 &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
                 (void **)&v21);
      v8 = inited;
      if ( inited < 0 )
      {
        v9 = 1499LL;
        goto LABEL_8;
      }
      inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v21->lpVtbl[2].AddRef)(v21, v22, 4LL);
      v8 = inited;
      if ( inited < 0 )
      {
        v9 = 1500LL;
        goto LABEL_8;
      }
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)v5, v21);
      v8 = inited;
      if ( inited < 0 )
      {
        v9 = 1501LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
LABEL_10:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        return v8;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    return 0LL;
  }
  v7 = 1480LL;
LABEL_6:
  v8 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)0x8007139FLL);
  return v8;
}
