/*
 * XREFs of ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x18031F954
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18031FDF8 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180320E20 (-PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18008D36C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802BFE00 (--0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall FullScreenPositioner::ApplyPresentationChanges(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IPresentationRequestedArgs *a3)
{
  struct IApplicationView *v4; // rdx
  BOOL v5; // esi
  struct IImmersiveApplication *ApplicationFromView; // rdi
  __int64 (__fastcall *v7)(struct IImmersiveApplication *, _QWORD, GUID *, struct IPropertyStore **); // rbx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int16 v13; // [rsp+38h] [rbp-18h] BYREF
  BOOL v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  int v17; // [rsp+74h] [rbp+24h]
  struct IPropertyStore *v18; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveApplication *v19; // [rsp+88h] [rbp+38h] BYREF

  v17 = HIDWORD(this);
  v16 = 0;
  if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a3 + 112LL))(a3, &v16) >= 0 )
  {
    v5 = v16 != 0;
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, v4);
    v19 = ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    if ( !ApplicationFromView )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x473,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)0x80004001LL,
        v11);
    v18 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, struct IPropertyStore **))(*(_QWORD *)ApplicationFromView + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    v8 = v7(ApplicationFromView, 0LL, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &v18);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x476,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8,
        v11);
    CPropertyStoreHelper::CPropertyStoreHelper((CPropertyStoreHelper *)&v12, v18);
    v13 = 3;
    v14 = v5;
    v9 = v12;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v12 + 48LL))(
            v12,
            &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
            &v13);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x479,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v10,
        v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  }
}
