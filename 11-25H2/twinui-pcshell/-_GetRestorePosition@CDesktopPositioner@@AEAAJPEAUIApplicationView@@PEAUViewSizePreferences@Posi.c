/*
 * XREFs of ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E576C
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180075A8C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x1804ED880 (_lambda_8b454e1137a63a08af271cf145abd5bf_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180054DFC (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800A5AE0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180114160 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     IsPeoplePane @ 0x180117380 (IsPeoplePane.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801F4AE0 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801FB804 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x1802263A0 (-_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180268220 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ??0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV?$shared_ptr@VPinRequestContext@@@std@@AEAV?$shared_ptr@VPinOperationContext@@@2@AEA_N@Z @ 0x1802961C4 (--0_lambda_2b94c938c284b16eb776d16960094630_@@QEAA@PEAV-$shared_ptr@VPinRequestContext@@@std@@AE.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1803CE604 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804F1678 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetRestorePosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct PositionerPropertySetHelpers::ViewSizePreferences *a3,
        struct IApplicationViewPosition **a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  bool v8; // dl
  struct IApplicationView *v9; // rdx
  int LaunchPosition; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v13)(struct IApplicationView *, unsigned int *); // rbx
  int v14; // eax
  CDesktopPositioner *v15; // rcx
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, _QWORD, struct IApplicationView **); // rbx
  int (__fastcall *v18)(struct IApplicationView *, __int64 *); // rbx
  struct IApplicationView *v19; // rbx
  int (__fastcall *v20)(struct IApplicationView *, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  int v22; // eax
  CDesktopPositioner *v23; // rcx
  int v24; // eax
  int v25; // eax
  struct IApplicationView *v26; // [rsp+20h] [rbp-79h] BYREF
  struct IApplicationView *v27; // [rsp+28h] [rbp-71h] BYREF
  __int64 v28; // [rsp+30h] [rbp-69h] BYREF
  int v29; // [rsp+38h] [rbp-61h] BYREF
  int v30; // [rsp+3Ch] [rbp-5Dh] BYREF
  struct IApplicationViewPosition **v31; // [rsp+40h] [rbp-59h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v32; // [rsp+48h] [rbp-51h] BYREF
  int v33; // [rsp+54h] [rbp-45h]
  unsigned int v34[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v35; // [rsp+60h] [rbp-39h]
  __int64 v36; // [rsp+68h] [rbp-31h]
  __int16 v37; // [rsp+70h] [rbp-29h]
  __int64 v38; // [rsp+78h] [rbp-21h] BYREF
  __int64 v39; // [rsp+80h] [rbp-19h]
  __int64 v40; // [rsp+88h] [rbp-11h]
  RECT rc; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v26 = a2;
  v31 = a4;
  *a4 = 0LL;
  v6 = _lambda_2b94c938c284b16eb776d16960094630_::_lambda_2b94c938c284b16eb776d16960094630_(&v38, &v26, this, &v31);
  *(_QWORD *)v34 = retaddr;
  v35 = (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v36 = 0LL;
  v37 = 1424;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    v7);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v32, v8);
  if ( IsPeoplePane(**(__int64 ***)v6)
    && (LaunchPosition = CDesktopPositioner::_GetLaunchPosition(
                           *(CDesktopPositioner **)(v6 + 8),
                           **(struct IApplicationView ***)v6,
                           **(struct IApplicationViewPosition ****)(v6 + 16)),
        v11 = LaunchPosition,
        LaunchPosition < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x594,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)LaunchPosition);
    wil::details::ReportFeatureError(
      (wil::details *)v11,
      (int)&v32,
      (struct wil::ThreadErrorContext *)0x60F183,
      (unsigned int)v34,
      (const struct DiagnosticsInfo *)v26);
  }
  else
  {
    v11 = 0;
  }
  if ( v32 )
    *((_DWORD *)v32 + 4) = v33;
  if ( (v11 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x599,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v11);
    return v11;
  }
  if ( !*v31 )
  {
    if ( !ApplicationViewHelpers::CanMaximizeView(v26, v9) )
      return 2147943568LL;
    rc = 0LL;
    v27 = 0LL;
    *(_QWORD *)v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v13 = *(__int64 (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)v26 + 488LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
    v35 = -1LL;
    v36 = -1LL;
    v14 = v13(v26, v34);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5AE,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v14);
LABEL_39:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      return v11;
    }
    if ( *(_QWORD *)v34 )
      goto LABEL_36;
    if ( a3 )
    {
      if ( *(_QWORD *)a3 )
      {
        v16 = *((_QWORD *)this + 37);
        v17 = *(int (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v16 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
        if ( v17(v16, *(_QWORD *)a3, &v27) >= 0 )
        {
          v29 = 0;
          v38 = 0LL;
          v39 = 0LL;
          v40 = 0LL;
          v18 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v26 + 136LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
          v39 = -1LL;
          v40 = -1LL;
          if ( v18(v26, &v38) >= 0 )
            (*(void (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)v27 + 152LL))(v27, v38, &v29);
          v30 = 0;
          v28 = 0LL;
          if ( v29 )
          {
            v19 = v27;
            v20 = *(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v27 + 104LL);
            v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v28);
            if ( v20(v19, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, v21) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 32LL))(v28, &v30) >= 0 )
            {
              if ( v30 == 2 )
              {
                v22 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v28 + 24LL))(v28, &rc);
                if ( v22 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x5CD,
                    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v22);
              }
              else
              {
                v32 = 0LL;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
                if ( (int)CDesktopPositioner::_GetFullPositionSnapshot(v23, v27, &v32) >= 0 )
                {
                  v24 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v32 + 56LL))(
                          v32,
                          &rc);
                  if ( v24 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x5D8,
                      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                      (const char *)(unsigned int)v24);
                }
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
              }
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
        }
      }
    }
    if ( *(_QWORD *)v34
      || CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(v15, v26)
      || IsRectEmpty(&rc)
      || CDesktopPositioner::_GetOffsetPosition(this, &rc, v31) < 0 )
    {
LABEL_36:
      v28 = 0LL;
      if ( (int)CDesktopPositioner::_GetPreferredPosition(this, v26, &rc, v31) < 0 )
      {
        v25 = CDesktopPositioner::_GetLaunchPosition(this, v26, v31);
        v11 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5EB,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v25);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
          goto LABEL_39;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v34);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  }
  return 0LL;
}
