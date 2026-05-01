/*
 * XREFs of ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800BD010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ??$com_copy@UIMultitaskingViewTaskScheduler@@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800BD628 (--$com_copy@UIMultitaskingViewTaskScheduler@@AEAV-$ComPtr@UIMultitaskingViewServiceProvider@@@WR.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BD680 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIWindowManag.c)
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1800BD6CC (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VGuidedSnapAssistControl@@@?$shared_ptr@VGuidedSnapAssistControl@@@std@@AEAAXQEAVGuidedSnapAssistControl@@QEAV_Ref_count_base@1@@Z @ 0x1800BD7D8 (--$_Set_ptr_rep_and_enable_shared@VGuidedSnapAssistControl@@@-$shared_ptr@VGuidedSnapAssistContr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@VCSnapAssistControllerBase@@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@@01@PEAVCSnapAssistControllerBase@@P83@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@5678@@Z@Z @ 0x1805817EC (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Inte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSnapAssistControllerBase::Initialize(
        CSnapAssistControllerBase *this,
        const struct SnapAssistControllerInitParams *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  char v10; // dl
  unsigned int v11; // ebx
  _DWORD *v12; // rbx
  char *v13; // r8
  const char *v14; // r9
  std::_Ref_count_base *v15; // rcx
  __int64 result; // rax
  _OWORD *v17; // rax
  _OWORD *v18; // rbx
  int v19; // eax
  unsigned int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // eax
  int v24[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v28; // [rsp+78h] [rbp+10h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, *(_QWORD *)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, *((_QWORD *)a2 + 2));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, *((_QWORD *)a2 + 4));
  v4 = *((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, *((_QWORD *)a2 + 6));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 13, *((_QWORD *)a2 + 7));
  v6 = *((_QWORD *)a2 + 8);
  if ( *((_QWORD *)this + 14) != v6 )
  {
    v27 = *((_QWORD *)a2 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
    v27 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 15, *((_QWORD *)a2 + 9));
  v7 = *((_QWORD *)a2 + 11);
  v8 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 14) + 24LL))(
         *((_QWORD *)this + 14),
         ((unsigned __int64)this + 16) & -(__int64)(this != (CSnapAssistControllerBase *)8),
         (char *)this + 296);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x154,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  if ( *((_QWORD *)a2 + 10) )
  {
    *(_QWORD *)v24 = (char *)this - 8;
    *(_QWORD *)&v24[2] = CSnapAssistControllerBase::OnWindowArrangementEvent;
    LODWORD(v25) = 0;
    HIDWORD(v25) = (unsigned __int64)CSnapAssistControllerBase::OnWindowArrangementEvent >> 32;
    v17 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>(v17);
      v18[1] = *(_OWORD *)v24;
      *((_QWORD *)v18 + 4) = v25;
      *(_QWORD *)v18 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_bc6a996c5f9ff2cfd33224138910e618_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::`vftable';
    }
    else
    {
      v18 = 0LL;
    }
    v28 = v18;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)a2 + 10) + 48LL))(
            *((_QWORD *)a2 + 10),
            v18,
            (char *)this + 248);
    v20 = v19;
    if ( v19 >= 0 )
    {
      *(_QWORD *)v24 = CSnapAssistControllerBase::OnWindowMigrationEvent;
      v24[2] = 0;
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,CSnapAssistControllerBase,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>(
        &v27,
        (char *)this - 8,
        v24);
      v21 = *((_QWORD *)a2 + 10);
      v22 = v27;
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v21 + 112LL))(v21, v27, (char *)this + 256);
      v20 = v23;
      if ( v23 >= 0 )
      {
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v18 )
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v18 + 16LL))(v18);
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v23);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      if ( v18 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v19);
      if ( v18 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v20;
  }
LABEL_13:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v10);
  try
  {
    wil::com_copy<IMultitaskingViewTaskScheduler,Microsoft::WRL::ComPtr<IMultitaskingViewServiceProvider> &>(
      &v27,
      (char *)this + 48);
    v12 = operator new(0x48uLL);
    v28 = v12;
    v12[2] = 1;
    v12[3] = 1;
    *(_QWORD *)v12 = &std::_Ref_count_obj2<GuidedSnapAssistControl>::`vftable';
    if ( this == (CSnapAssistControllerBase *)8 )
      v13 = 0LL;
    else
      v13 = (char *)this + 8;
    GuidedSnapAssistControl::GuidedSnapAssistControl(v12 + 4, &v27, v13);
    *(_OWORD *)v24 = 0LL;
    std::shared_ptr<GuidedSnapAssistControl>::_Set_ptr_rep_and_enable_shared<GuidedSnapAssistControl>(v24, v12 + 4, v12);
    *((_QWORD *)this + 35) = *(_QWORD *)v24;
    v15 = (std::_Ref_count_base *)*((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = *(_QWORD *)&v24[2];
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x168,
                     (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                     v14);
    return (unsigned int)v27;
  }
  return result;
}
