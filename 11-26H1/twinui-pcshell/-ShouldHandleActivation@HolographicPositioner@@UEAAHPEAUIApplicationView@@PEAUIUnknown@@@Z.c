/*
 * XREFs of ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18008DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x18007D220 (-IsVoiceActivation@PositionerPropertySetHelpers@@YAJV-$ComPtr@UIPropertySet@Collections@Foundati.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x18007D2D8 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008D104 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18008E6C8 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x18008E9A0 (-_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collection.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18008F440 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18008F520 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1801620B0 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x1802A5300 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _LogEventWithApplicationViewData_unsigned_int_ @ 0x1802B0F88 (_LogEventWithApplicationViewData_unsigned_int_.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802BF150 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1802C1168 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::ShouldHandleActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  char v6; // al
  struct IUnknownVtbl *lpVtbl; // rcx
  int (__fastcall *v9)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  unsigned __int8 IsViewContextHolographic; // si
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  PositionerPropertySetHelpers *v13; // rcx
  int DetailsForActivation; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rcx
  char v16; // bl
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v21; // rcx
  struct IUnknown v22; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v23[8]; // [rsp+28h] [rbp-48h] BYREF
  int v24[2]; // [rsp+30h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v25; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v24[0] = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, const wchar_t *, int *))(*(_QWORD *)a2 + 152LL))(
         a2,
         L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App",
         v24) < 0
    || (v6 = 1, !v24[0]) )
  {
    v6 = 0;
  }
  if ( v6 )
    return 0LL;
  v22.lpVtbl = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IUnknown *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v22);
  lpVtbl = v22.lpVtbl;
  if ( v22.lpVtbl )
  {
    v24[0] = 6;
    if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, v24) >= 0 && v24[0] == 1 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
      return 1LL;
    }
    lpVtbl = v22.lpVtbl;
  }
  if ( lpVtbl )
    (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
  if ( !IsHolographicWin32SlatesFeatureEnabled() )
  {
    v22.lpVtbl = 0LL;
    v9 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v22);
    if ( v9(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v10) < 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
      return 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  }
  IsViewContextHolographic = 0;
  v25 = 0LL;
  if ( !a3
    || (QueryInterface = a3->lpVtbl->QueryInterface,
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25),
        ((int (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))QueryInterface)(
          a3,
          &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
          &v25) < 0) )
  {
    if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
    {
      LODWORD(v22.lpVtbl) = 0;
      if ( HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), a2, (int *)&v22) >= 0 )
      {
        if ( LODWORD(v22.lpVtbl) )
        {
          LODWORD(v22.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
          v24[0] = 3;
          HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(v24, &v22);
          IsViewContextHolographic = 1;
        }
      }
    }
    goto LABEL_54;
  }
  LODWORD(v22.lpVtbl) = 0;
  v24[0] = 0;
  if ( (int)HolographicPositioner::_IsSelfActivation((HolographicPositioner *)((char *)this - 168), a2, v25, v24) >= 0
    && v24[0]
    && HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), a2, (int *)&v22) >= 0
    && LODWORD(v22.lpVtbl) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    return 1LL;
  }
  LODWORD(v22.lpVtbl) = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v13,
                           (struct IApplicationView *)a3,
                           &v22,
                           0LL,
                           (struct PositionerPropertySetHelpers::ViewSizePreferences *)v22.lpVtbl);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C1,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
  if ( ((__int64)v22.lpVtbl & 0x10) != 0 )
  {
    v15 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return 0LL;
  }
  v16 = 1;
  if ( ((__int64)v22.lpVtbl & 4) != 0 )
  {
    LODWORD(v22.lpVtbl) = 0;
    if ( HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), a2, (int *)&v22) >= 0
      && LODWORD(v22.lpVtbl) )
    {
      IsViewContextHolographic = 1;
      goto LABEL_48;
    }
    IsViewContextHolographic = 0;
  }
  else
  {
    if ( ((__int64)v22.lpVtbl & 1) != 0 )
    {
      *(_QWORD *)v24 = v25;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v24);
      string = 0LL;
      v17 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
      if ( v17 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
      if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)v24,
             string) )
      {
        LODWORD(v22.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
        LogEventWithApplicationViewData_unsigned_int_(a2, v20, &v22);
      }
      else
      {
        v16 = 0;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v24);
      IsViewContextHolographic = 0;
      if ( !v16 )
        goto LABEL_45;
    }
    IsViewContextHolographic = HolographicPositioner::_IsViewContextHolographic(
                                 (HolographicPositioner *)((char *)this - 168),
                                 a2,
                                 v25);
  }
  if ( IsViewContextHolographic )
    goto LABEL_48;
LABEL_45:
  if ( HolographicPositioner::_IsDisplayContextHolographic((HolographicPositioner *)((char *)this - 168)) )
  {
    v23[0] = 0;
    v22.lpVtbl = (struct IUnknownVtbl *)v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    PositionerPropertySetHelpers::IsVoiceActivation((__int64 *)&v22, v23);
    if ( v23[0] )
    {
      LODWORD(v22.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      v24[0] = 4;
      HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(v24, &v22);
      IsViewContextHolographic = 1;
LABEL_48:
      if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
        *((_BYTE *)this + 144) = 1;
    }
  }
LABEL_54:
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return IsViewContextHolographic;
}
