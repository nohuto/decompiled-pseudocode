/*
 * XREFs of ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801C6A58
 * Callers:
 *     _lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator() @ 0x1802F5638 (_lambda_a5b8d4cd5e95e3c20f6ae71426157a21_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::Invoke @ 0x1802F7830 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F7830.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FBE50 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802FCEF4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180032444 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003E32C (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003F660 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F730 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800402F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180084F98 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18010B75C (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010CA98 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801C71DC (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D70D0 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     WPP_SF_d @ 0x180228808 (WPP_SF_d.c)
 *     WPP_SF_ @ 0x18022DA04 (WPP_SF_.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802AD9F8 (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x1802F8570 (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1802F884C (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1802FA824 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802FB520 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802FD2EC (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1802FD8C0 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     WPP_SF_ll @ 0x1802FD924 (WPP_SF_ll.c)
 *     WPP_SF_qqLL @ 0x1802FD9E4 (WPP_SF_qqLL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAppViewManager::_ShowViewAsyncWorker(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        const struct CAppViewManager::ShowViewAsyncOptions *a4,
        struct Windows::Foundation::Collections::IPropertySet *a5,
        struct IAsyncCallback *a6,
        struct IPresentationRequestedArgs *a7)
{
  CAppViewManager *v10; // r12
  __int64 v11; // r15
  bool v12; // bl
  __int64 v13; // r8
  bool v14; // sf
  int v15; // eax
  bool v16; // zf
  char v17; // r14
  char v18; // r15
  unsigned int v19; // esi
  RTL_SRWLOCK *v20; // rbx
  __int64 v21; // r8
  int GlomForWindow; // edi
  bool v23; // r12
  CAppViewManager *v24; // rcx
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // r14
  CAppViewManager *v29; // rdx
  const struct CAppViewManager::ShowViewAsyncOptions *v30; // rbx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v31; // rdx
  unsigned __int8 v32; // r8
  int v33; // eax
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(__int64, HWND, struct IImmersiveApplicationInternal *, CAppViewManager *, struct IImmersiveApplicationInternal **); // rdi
  unsigned int v36; // eax
  int v37; // r14d
  RTL_SRWLOCK *v38; // rbx
  struct IAsyncCallback *v39; // r13
  struct IImmersiveApplicationInternal *v40; // rcx
  struct IImmersiveApplicationInternal *v41; // rcx
  struct IImmersiveApplicationInternal *v42; // rcx
  struct IIAMServiceProvider *v43; // rcx
  bool v45; // [rsp+40h] [rbp-C0h] BYREF
  bool v46; // [rsp+41h] [rbp-BFh] BYREF
  char v47; // [rsp+42h] [rbp-BEh]
  CAppViewManager *v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveApplicationInternal *v50; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveApplicationInternal *v51; // [rsp+60h] [rbp-A0h] BYREF
  struct IImmersiveApplicationInternal *v52; // [rsp+68h] [rbp-98h] BYREF
  struct IAsyncCallback *v53; // [rsp+70h] [rbp-90h]
  struct IIAMServiceProvider *v54; // [rsp+78h] [rbp-88h] BYREF
  HWND v55; // [rsp+80h] [rbp-80h]
  PSRWLOCK v56; // [rsp+88h] [rbp-78h] BYREF
  CAppViewManager *v57; // [rsp+90h] [rbp-70h]
  const struct CAppViewManager::ShowViewAsyncOptions *v58; // [rsp+98h] [rbp-68h]
  HWND v59; // [rsp+A0h] [rbp-60h]
  PSRWLOCK v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62[2]; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-20h]
  _QWORD v65[42]; // [rsp+F0h] [rbp-10h] BYREF

  v58 = a4;
  v59 = a3;
  v55 = a2;
  v10 = this;
  v48 = this;
  v57 = a5;
  v53 = a6;
  v60 = (PSRWLOCK)a7;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v65,
    (__int64)"ShowViewAsyncWorker");
  v65[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  CAppViewManagerTelemetry::ShowViewAsyncWorker::StartActivity((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v65);
  v11 = *((_QWORD *)a4 + 1);
  v61 = v11;
  v12 = 0;
  if ( a5 )
  {
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v56,
      a5);
    v64 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    LODWORD(v49) = 0;
    v14 = (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v56, v64, v13, &v49) < 0;
    v15 = 0;
    if ( !v14 )
      v15 = v49;
    v12 = v15 == 2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
  }
  if ( !v11 && !v12 || (v16 = a2 == a3, v17 = 1, !v16) )
    v17 = 0;
  v54 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
  (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))v10 + 15))(
    *((_QWORD *)v10 + 15),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v54);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v62,
    v54);
  v18 = 1;
  v19 = 0;
  LODWORD(v49) = 0;
  v52 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v20 = CApplicationManagerUtility::g_pIAMGlobals;
  v56 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_qqLL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      v58,
      v21,
      v55,
      a3,
      *(_DWORD *)v58,
      *((_DWORD *)v58 + 1));
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v51);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v10, a3, &v51, &v45);
  if ( GlomForWindow < 0 )
    goto LABEL_23;
  v23 = v45;
  if ( v17 && !v45 )
    v59 = (HWND)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v51 + 384LL))(v51);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v52);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v48, v55, &v52, &v46);
  if ( GlomForWindow < 0 )
    goto LABEL_22;
  if ( !v23 && !v17 )
  {
    v18 = 0;
    v19 = 1;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v25 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v51 + 416LL))(v51);
      WPP_SF_ll(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v26, v27, 0LL, v25);
    }
LABEL_22:
    v10 = v48;
    goto LABEL_23;
  }
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v24, v52) )
  {
    v18 = 0;
    v19 = -2147024891;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        12LL,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
    }
    goto LABEL_22;
  }
  if ( v46 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v50, &v52);
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        13LL,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
    }
    v19 = v49;
    v10 = v48;
  }
  else
  {
    v10 = v48;
    v34 = *((_QWORD *)v48 + 15);
    v35 = *(__int64 (__fastcall **)(__int64, HWND, struct IImmersiveApplicationInternal *, CAppViewManager *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v34 + 88LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v50);
    v36 = v35(v34, v55, v52, v57, &v50);
    GlomForWindow = v36;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        14LL,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        v36);
    }
    v19 = v49;
    if ( GlomForWindow < 0 )
      goto LABEL_23;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)v50 + 368LL))(v50, 2LL);
    v47 = 1;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v51 + 416LL))(v51) )
  {
LABEL_23:
    v28 = 0;
    goto LABEL_24;
  }
  v28 = 1;
LABEL_24:
  if ( v20 )
    ReleaseSRWLockExclusive(v20);
  if ( GlomForWindow >= 0 && v18 )
  {
    v48 = v57;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v48);
    v29 = v48;
    if ( !v48 )
    {
      v64 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      GlomForWindow = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                        v64,
                        (__int64 *)&v48);
      v64 = 0LL;
      if ( GlomForWindow < 0 )
      {
LABEL_58:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v48);
        goto LABEL_59;
      }
      v29 = v48;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v49,
      v29);
    v30 = v58;
    GlomForWindow = ViewSizePreferenceHelpers::SetTargetViewSizePreference(&v49, *(unsigned int *)v58);
    if ( GlomForWindow >= 0 )
    {
      if ( v61 )
      {
        LOBYTE(v31) = 1;
        v33 = PositionerPropertySetHelpers::SetAppActivationResponse((PositionerPropertySetHelpers *)&v49, v31, v32);
      }
      else
      {
        v33 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v49,
                (int)v59,
                *((_DWORD *)v30 + 1));
      }
      GlomForWindow = v33;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
    if ( GlomForWindow >= 0 )
    {
      if ( v28 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
      if ( !v47
        || (GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, CAppViewManager *, PSRWLOCK, struct IImmersiveApplicationInternal *))(**((_QWORD **)v10 + 15) + 152LL))(
                              *((_QWORD *)v10 + 15),
                              v50,
                              v48,
                              v60,
                              v51),
            GlomForWindow >= 0) )
      {
        GlomForWindow = CAppViewManager::_TrySwitchToApplication(v10, v50, v48);
      }
    }
    goto LABEL_58;
  }
LABEL_59:
  v37 = 0;
  LODWORD(v49) = 0;
  v38 = CApplicationManagerUtility::g_pIAMGlobals;
  v60 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow < 0 )
  {
    if ( v50 && v52 && v52 != v50 )
      (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v10 + 15) + 104LL))(
        *((_QWORD *)v10 + 15),
        v50,
        v52,
        0LL);
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        15LL,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        (unsigned int)GlomForWindow);
    }
    goto LABEL_67;
  }
  if ( !v18 )
  {
LABEL_67:
    v39 = v53;
    goto LABEL_68;
  }
  v39 = v53;
  if ( v53 && (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v50 + 472LL))(v50) )
  {
    GlomForWindow = CAppViewManager::_AddPresentedWindowCallbackTrigger(v10, 1LL, v50, v55, v39, &v49);
    v37 = v49;
  }
LABEL_68:
  if ( v38 )
    ReleaseSRWLockExclusive(v38);
  if ( v39 && !v37 )
  {
    if ( GlomForWindow < 0 )
      v19 = GlomForWindow;
    CAppViewManager::_s_QueueCallback(v51, v39, v19);
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        16LL,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        v19);
    }
  }
  if ( GlomForWindow >= 0 )
    GlomForWindow = v18 != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v65, GlomForWindow);
  v40 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v42 + 16LL))(v42);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v62[0] + 48LL))(v62[0]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v62);
  v43 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v65[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v65);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v65);
  return (unsigned int)GlomForWindow;
}
