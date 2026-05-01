/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802605C8
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801DA4B0 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x1800B074C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800CAA8C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800CB024 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180124B50 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180165FD0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1801DCD20 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ??$?4UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@12@@Z @ 0x1802B68C8 (--$-4UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsof.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18050E65C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18050E65C.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x180512844 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3)
{
  unsigned int v4; // r15d
  struct wil::details::IFunctorHost *v5; // r8
  __int64 (__fastcall *v6)(struct IApplicationView *, struct IApplicationView ***); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(struct IApplicationView *, DiagnosticsInfo *); // rbx
  int v10; // eax
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, struct IApplicationView **, DiagnosticsInfo, __int64 *); // rbx
  BOOL v13; // esi
  int (__fastcall *v14)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v15; // rax
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, __int64 *); // rdi
  int DefaultRect; // eax
  CDesktopPositioner *v19; // rcx
  __int64 v20; // rdx
  int fixed; // eax
  __int64 v23; // [rsp+30h] [rbp-99h] BYREF
  struct IApplicationView *v24; // [rsp+38h] [rbp-91h] BYREF
  __int64 v25; // [rsp+40h] [rbp-89h] BYREF
  __int64 v26; // [rsp+48h] [rbp-81h] BYREF
  int (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-79h] BYREF
  DiagnosticsInfo v28; // [rsp+58h] [rbp-71h] BYREF
  __int64 v29; // [rsp+60h] [rbp-69h]
  __int64 v30; // [rsp+68h] [rbp-61h]
  __int16 v31; // [rsp+70h] [rbp-59h]
  struct IApplicationView **v32; // [rsp+78h] [rbp-51h] BYREF
  __int64 v33; // [rsp+80h] [rbp-49h]
  __int64 v34; // [rsp+88h] [rbp-41h]
  __int64 *v35; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v36[8]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-29h]
  int v38; // [rsp+ACh] [rbp-1Dh]
  struct tagRECT v39; // [rsp+C0h] [rbp-9h] BYREF
  struct tagRECT v40; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v24 = a2;
  v35 = (__int64 *)a3;
  *a3 = 0LL;
  v32 = &v24;
  v33 = (__int64)this;
  v34 = (__int64)&v35;
  v28 = (DiagnosticsInfo)retaddr;
  v29 = (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v30 = 0LL;
  v31 = 1712;
  v4 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3);
  *(_QWORD *)&v39.left = &off_180750A18;
  *(_QWORD *)&v39.right = &v32;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v36, 6353283, &v28);
  wil::details::RunFunctor((wil::details *)&v39, (struct wil::details::IFunctor *)v36, v5);
  if ( v37 )
    *(_DWORD *)(v37 + 16) = v38;
  if ( !*v35 )
  {
    v27 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationView ***))(*(_QWORD *)v24 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
    v33 = -1LL;
    v34 = -1LL;
    v7 = v6(v24, &v32);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_29:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
      return v8;
    }
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IApplicationView *, DiagnosticsInfo *))(*(_QWORD *)v24 + 488LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
    v29 = -1LL;
    v30 = -1LL;
    v10 = v9(v24, &v28);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C3,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10);
LABEL_28:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
      goto LABEL_29;
    }
    v23 = 0LL;
    v11 = *((_QWORD *)this + 34);
    v12 = *(int (__fastcall **)(__int64, struct IApplicationView **, DiagnosticsInfo, __int64 *))(*(_QWORD *)v11 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    if ( ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v12)(v11, v32, v28, &v23) >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator=<IOcclusionBasedApplicationViewPosition>(&v27, &v23);
      v4 = 0;
    }
    else
    {
      v13 = 0;
      v25 = 0LL;
      v14 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v24;
      v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v25);
      if ( v14(v24, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v15) >= 0 )
      {
        v26 = 0LL;
        v16 = v25;
        v17 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
        if ( v17(v16, &v26) >= 0 )
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 328LL))(v26, 0LL) != 0;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      }
      v39 = 0LL;
      DefaultRect = CDesktopPositioner::_GetDefaultRect(this, 0LL, v13, &v39);
      v8 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v20 = 1756LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)DefaultRect);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        goto LABEL_28;
      }
      if ( *((_DWORD *)this + 136) )
      {
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                        (__int64 *)&v27,
                        (__int64)&v39);
        v8 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v20 = 1760LL;
          goto LABEL_15;
        }
      }
      else
      {
        v40 = 0LL;
        DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v19, &v39, &v40);
        v8 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v20 = 1765LL;
          goto LABEL_15;
        }
        LODWORD(v26) = 3;
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                        &v27,
                        &v26,
                        &v40);
        v8 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v20 = 1766LL;
          goto LABEL_15;
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
    fixed = CDesktopPositioner::_FixPosition((__int64)this, v4, v27, v35);
    v8 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F5,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
      goto LABEL_27;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  }
  return 0LL;
}
