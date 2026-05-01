/*
 * XREFs of ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800E40C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18006BCF0 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ??$com_copy@UIMultitaskingViewTaskScheduler@@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@Z @ 0x1800E494C (--$com_copy@UIMultitaskingViewTaskScheduler@@AEAV-$ComPtr@UIMultitaskingViewServiceProvider@@@WR.c)
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1800E498C (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VGuidedSnapAssistControl@@@?$shared_ptr@VGuidedSnapAssistControl@@@std@@AEAAXQEAVGuidedSnapAssistControl@@QEAV_Ref_count_base@1@@Z @ 0x1800E4AA8 (--$_Set_ptr_rep_and_enable_shared@VGuidedSnapAssistControl@@@-$shared_ptr@VGuidedSnapAssistContr.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@V_lambda_21a5f5bdfea0e4d43c48176adfebca6f_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_21a5f5bdfea0e4d43c48176adfebca6f_@@@Z @ 0x1802BFCBC (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEven_ea_1802BFCBC.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@V_lambda_b32e4a41fb6f1ee8d8a9f26563f2c380_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_b32e4a41fb6f1ee8d8a9f26563f2c380_@@@Z @ 0x1805A54CC (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEven_ea_1805A54CC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v10; // ebx
  char *v11; // rbx
  const char *v12; // r9
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rcx
  char *v22; // rdi
  int v23; // eax
  int v24[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v25[72]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  char *v28; // [rsp+88h] [rbp+10h] BYREF

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
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  if ( !*((_QWORD *)a2 + 10) )
    goto LABEL_13;
  *(_QWORD *)v24 = CSnapAssistControllerBase::OnWindowArrangementEvent;
  v24[2] = 0;
  v27 = (__int64)this - 8;
  v16 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_(v25, &v27, v24);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_21a5f5bdfea0e4d43c48176adfebca6f_>(
    &v27,
    v16);
  v17 = v27;
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)a2 + 10) + 48LL))(
          *((_QWORD *)a2 + 10),
          v27,
          (char *)this + 248);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v18);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v19;
  }
  *(_QWORD *)v24 = CSnapAssistControllerBase::OnWindowMigrationEvent;
  v24[2] = 0;
  v28 = (char *)this - 8;
  v20 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_(v25, &v28, v24);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,_lambda_b32e4a41fb6f1ee8d8a9f26563f2c380_>(
    &v28,
    v20);
  v21 = *((_QWORD *)a2 + 10);
  v22 = v28;
  v23 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v21 + 112LL))(v21, v28, (char *)this + 256);
  v19 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15F,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v23);
    if ( v22 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return v19;
  }
  if ( v22 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_13:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck((unsigned int *)`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl);
  try
  {
    wil::com_copy<IMultitaskingViewTaskScheduler,Microsoft::WRL::ComPtr<IMultitaskingViewServiceProvider> &>(
      &v27,
      (char *)this + 48);
    v11 = (char *)operator new(0x48uLL);
    v28 = v11;
    *((_DWORD *)v11 + 2) = 1;
    *((_DWORD *)v11 + 3) = 1;
    *(_QWORD *)v11 = &std::_Ref_count_obj2<GuidedSnapAssistControl>::`vftable';
    GuidedSnapAssistControl::GuidedSnapAssistControl(
      v11 + 16,
      &v27,
      ((unsigned __int64)this + 8) & -(__int64)(this != (CSnapAssistControllerBase *)8));
    *(_OWORD *)v24 = 0LL;
    std::shared_ptr<GuidedSnapAssistControl>::_Set_ptr_rep_and_enable_shared<GuidedSnapAssistControl>(
      v24,
      v11 + 16,
      v11);
    v13 = *(_QWORD *)&v24[2];
    *((_QWORD *)this + 35) = *(_QWORD *)v24;
    v14 = (std::_Ref_count_base *)*((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = v13;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x169,
                     (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                     v12);
    return (unsigned int)v27;
  }
  return result;
}
