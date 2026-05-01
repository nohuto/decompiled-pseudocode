/*
 * XREFs of ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1801C10F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801D39FC (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804F7454 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::OnShellHookMessage(TabletModePositioner *this, __int64 a2, __int64 a3)
{
  __int64 *v4; // r15
  IUnknown *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // r14
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, ApplicationViewHelpers **); // rbx
  int v14; // eax
  struct IApplicationView *v15; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64 *); // rbx
  int v18; // eax
  int inited; // eax
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  ApplicationViewHelpers *v21; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v23; // [rsp+60h] [rbp+30h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v4 = (__int64 *)((char *)this + 120);
  if ( !*((_QWORD *)this + 15) )
    return 0LL;
  v6 = (IUnknown *)((char *)this - 168);
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 168)) )
  {
    v11 = (__int64 *)(v7 + 112);
    v12 = *(_QWORD *)(v7 + 112);
    if ( !v12 )
    {
      v8 = 1481LL;
      goto LABEL_6;
    }
    v21 = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v12 + 120LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    v14 = v13(v12, &v21);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CC,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_10;
    }
    if ( a3 == ApplicationViewHelpers::GetWindowForView(
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v21,
                 v15) )
    {
      v20 = *v11;
      v16 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v11);
      v24 = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v18 = v17(v16, &v24);
      v9 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D8,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v18);
        goto LABEL_9;
      }
      v23 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 v6,
                 &CLSID_TabletModePositionerOperation,
                 &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
                 (void **)&v23);
      v9 = inited;
      if ( inited < 0 )
      {
        v10 = 1499LL;
        goto LABEL_8;
      }
      inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v23->lpVtbl[2].AddRef)(v23, v24, 4LL);
      v9 = inited;
      if ( inited < 0 )
      {
        v10 = 1500LL;
        goto LABEL_8;
      }
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)v6, v23);
      v9 = inited;
      if ( inited < 0 )
      {
        v10 = 1501LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
LABEL_9:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
LABEL_10:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
        return v9;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v20);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    return 0LL;
  }
  v8 = 1480LL;
LABEL_6:
  v9 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)0x8007139FLL);
  return v9;
}
