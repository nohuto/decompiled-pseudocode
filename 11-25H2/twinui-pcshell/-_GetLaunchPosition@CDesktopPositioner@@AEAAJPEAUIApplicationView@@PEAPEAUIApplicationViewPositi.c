/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180268220
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E576C (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800A5A94 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800A5E00 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180114230 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x180114E58 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1801E7118 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801FB804 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ??$?4UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@12@@Z @ 0x1802BFA3C (--$-4UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsof.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1804ED064 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1804ED064.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1804F11EC (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3,
        __int64 a4)
{
  unsigned int v5; // r15d
  struct wil::details::IFunctorHost *v6; // r8
  __int64 (__fastcall *v7)(struct IApplicationView *, struct IApplicationView ***); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(struct IApplicationView *, DiagnosticsInfo *); // rbx
  int v11; // eax
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, struct IApplicationView **, DiagnosticsInfo, __int64 *); // rbx
  BOOL v14; // esi
  int (__fastcall *v15)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v16; // rax
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, __int64 *); // rdi
  int DefaultRect; // eax
  CDesktopPositioner *v20; // rcx
  __int64 v21; // rdx
  int fixed; // eax
  __int64 v24; // [rsp+30h] [rbp-99h] BYREF
  struct IApplicationView *v25; // [rsp+38h] [rbp-91h] BYREF
  __int64 v26; // [rsp+40h] [rbp-89h] BYREF
  __int64 v27; // [rsp+48h] [rbp-81h] BYREF
  int (__fastcall ***v28[2])(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-79h] BYREF
  DiagnosticsInfo v29; // [rsp+60h] [rbp-69h] BYREF
  __int64 v30; // [rsp+68h] [rbp-61h]
  __int64 v31; // [rsp+70h] [rbp-59h]
  __int16 v32; // [rsp+78h] [rbp-51h]
  struct IApplicationView **v33; // [rsp+80h] [rbp-49h] BYREF
  __int64 v34; // [rsp+88h] [rbp-41h]
  __int64 v35; // [rsp+90h] [rbp-39h]
  __int64 *v36; // [rsp+98h] [rbp-31h] BYREF
  _BYTE v37[8]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-21h]
  int v39; // [rsp+B4h] [rbp-15h]
  struct tagRECT v40; // [rsp+C8h] [rbp-1h] BYREF
  struct tagRECT v41; // [rsp+D8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v25 = a2;
  v36 = (__int64 *)a3;
  *a3 = 0LL;
  v33 = &v25;
  v34 = (__int64)this;
  v35 = (__int64)&v36;
  v29 = (DiagnosticsInfo)retaddr;
  v30 = (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v31 = 0LL;
  v32 = 1712;
  v5 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  v28[0] = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))&off_180726D30;
  v28[1] = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))&v33;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v37, 6353283, &v29);
  wil::details::RunFunctor((wil::details *)v28, (struct wil::details::IFunctor *)v37, v6);
  if ( v38 )
    *(_DWORD *)(v38 + 16) = v39;
  if ( !*v36 )
  {
    v28[0] = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationView ***))(*(_QWORD *)v25 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v33);
    v34 = -1LL;
    v35 = -1LL;
    v8 = v7(v25, &v33);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_29:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v33);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
      return v9;
    }
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IApplicationView *, DiagnosticsInfo *))(*(_QWORD *)v25 + 488LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
    v30 = -1LL;
    v31 = -1LL;
    v11 = v10(v25, &v29);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C3,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
LABEL_28:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
      goto LABEL_29;
    }
    v24 = 0LL;
    v12 = *((_QWORD *)this + 34);
    v13 = *(int (__fastcall **)(__int64, struct IApplicationView **, DiagnosticsInfo, __int64 *))(*(_QWORD *)v12 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    if ( ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v13)(v12, v33, v29, &v24) >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator=<IOcclusionBasedApplicationViewPosition>(v28, &v24);
      v5 = 0;
    }
    else
    {
      v14 = 0;
      v26 = 0LL;
      v15 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v25;
      v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v26);
      if ( v15(v25, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v16) >= 0 )
      {
        v27 = 0LL;
        v17 = v26;
        v18 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        if ( v18(v17, &v27) >= 0 )
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 328LL))(v27, 0LL) != 0;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      }
      v40 = 0LL;
      DefaultRect = CDesktopPositioner::_GetDefaultRect(this, 0LL, v14, &v40);
      v9 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v21 = 1756LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)DefaultRect);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        goto LABEL_28;
      }
      if ( *((_DWORD *)this + 136) )
      {
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                        (__int64 *)v28,
                        (__int64)&v40);
        v9 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v21 = 1760LL;
          goto LABEL_15;
        }
      }
      else
      {
        v41 = 0LL;
        DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v20, &v40, &v41);
        v9 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v21 = 1765LL;
          goto LABEL_15;
        }
        LODWORD(v27) = 3;
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                        v28,
                        &v27,
                        &v41);
        v9 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v21 = 1766LL;
          goto LABEL_15;
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    }
    fixed = CDesktopPositioner::_FixPosition((__int64)this, v5, v28[0], v36);
    v9 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F5,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
      goto LABEL_27;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
  }
  return 0LL;
}
