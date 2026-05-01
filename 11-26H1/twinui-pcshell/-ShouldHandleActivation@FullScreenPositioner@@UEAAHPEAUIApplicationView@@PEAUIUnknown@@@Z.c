/*
 * XREFs of ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180234170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18008D3BC (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18008D4B0 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18008E6C8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@5@PEA_N@Z @ 0x1801CB020 (-GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@W.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FullScreenPositioner::ShouldHandleActivation(
        FullScreenPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))
{
  int (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  struct IApplicationView *v8; // rdx
  PositionerPropertySetHelpers *v9; // rcx
  int DetailsForActivation; // eax
  struct IApplicationView *v11; // rdx
  BOOL v12; // edi
  int (__fastcall *v13)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int (__fastcall *v14)(struct IApplicationView *, struct IUnknown *); // rbx
  HRESULT (__stdcall *v15)(IUnknown *, const IID *const, void **); // rbx
  int TargetPresenterKind; // eax
  bool *v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // rdx
  ViewModePreferencesHelpers *v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  __int64 v25; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown v27; // [rsp+88h] [rbp+38h] BYREF
  int v28; // [rsp+98h] [rbp+48h] BYREF

  v22 = 0LL;
  v6 = **a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v22);
  if ( v6((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v7) < 0
    || FullScreenPositionerHelpers::IsFullScreenModeDisabledForView((FullScreenPositionerHelpers *)a2, v8) )
  {
    goto LABEL_30;
  }
  LODWORD(v27.lpVtbl) = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(v9, a3, &v27, 0LL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16A,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
  if ( ((__int64)v27.lpVtbl & 0x10) != 0
    || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    && (unsigned int)IsGamingFullScreenExperienceActive() )
  {
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    return 0LL;
  }
  else
  {
    if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(a2, v11) )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v13 = (*a2)[17];
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
      v24 = -1LL;
      v25 = -1LL;
      if ( ((int (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), __int64 *))v13)(
             a2,
             &v23) >= 0 )
      {
        LODWORD(v27.lpVtbl) = 0;
        if ( (*(int (__fastcall **)(_QWORD, __int64, struct IUnknown *))(**((_QWORD **)this + 18) + 24LL))(
               *((_QWORD *)this + 18),
               v23,
               &v27) >= 0 )
          LOBYTE(v12) = LODWORD(v27.lpVtbl) == 2;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
      if ( !v12 )
      {
        v27.lpVtbl = 0LL;
        v14 = (int (__fastcall *)(struct IApplicationView *, struct IUnknown *))(*a2)[33];
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
        if ( v14((struct IApplicationView *)a2, &v27) >= 0 )
          LOBYTE(v12) = (*((unsigned int (__fastcall **)(struct IUnknownVtbl *))v27.lpVtbl->QueryInterface + 3))(v27.lpVtbl) == 4;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
      }
    }
    if ( a3 && !v12 )
    {
      v21 = 0LL;
      v15 = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))**a3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      TargetPresenterKind = ((__int64 (__fastcall *)(_QWORD, GUID *, ViewModePreferencesHelpers **))v15)(
                              a3,
                              &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                              &v21);
      v18 = TargetPresenterKind;
      if ( TargetPresenterKind < 0 )
      {
        v19 = 413LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
          (const char *)(unsigned int)TargetPresenterKind);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        return v18;
      }
      v28 = 0;
      LOBYTE(v27.lpVtbl) = 0;
      TargetPresenterKind = ViewModePreferencesHelpers::GetTargetPresenterKind(
                              v21,
                              (struct Windows::Foundation::Collections::IPropertySet *)&v28,
                              (enum Windows::Internal::ApplicationModel::WindowingEnvironment::ApplicationWindowPresenterKindInternal *)&v27,
                              v17);
      v18 = TargetPresenterKind;
      if ( TargetPresenterKind < 0 )
      {
        v19 = 417LL;
        goto LABEL_23;
      }
      v12 = LOBYTE(v27.lpVtbl) && v28 == 2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    return v12;
  }
}
