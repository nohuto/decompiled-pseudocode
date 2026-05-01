/*
 * XREFs of ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802F80F4
 * Callers:
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1802F03D0 (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a___1_long_::Invoke @ 0x1802F29B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F29B0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800AE0F8 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800AE0F8.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801B8CB0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801CAFF0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802EF970 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1802EF970.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_ @ 0x1802EFA74 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802EFA74.c)
 *     wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802EFB98 (wil--details--lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___--lambda_call__lambda_9532c.c)
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1802EFC64 (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_.c)
 *     wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::_lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802EFDF8 (wil--details--lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___--_lambda_call__lambda_9532.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F0090 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x1802F3BA0 (-Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F41A0 (-StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802F5CCC (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x1802F60BC (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAppViewManager::_SwitchAsyncWorker(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a5,
        void *a6)
{
  __int64 v10; // rcx
  int v11; // ebx
  void *v12; // rbx
  void *v13; // rax
  unsigned int v14; // ebx
  CAppViewManagerTelemetry::SwitchAsyncWorker *v15; // rax
  bool v17; // [rsp+40h] [rbp-C0h] BYREF
  void *v18; // [rsp+48h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[3]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v21[42]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v22[42]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v23[3]; // [rsp+310h] [rbp+210h] BYREF
  int v24; // [rsp+328h] [rbp+228h]
  void **v25; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v26[336]; // [rsp+478h] [rbp+378h] BYREF
  __int64 v27; // [rsp+5C8h] [rbp+4C8h] BYREF
  _QWORD v28[41]; // [rsp+5D0h] [rbp+4D0h] BYREF
  char v29; // [rsp+718h] [rbp+618h]
  volatile signed __int32 *v30[42]; // [rsp+720h] [rbp+620h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v21,
    (__int64)"SwitchAsyncWorker");
  v21[0] = (volatile signed __int32 *)&CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  CAppViewManagerTelemetry::SwitchAsyncWorker::StartActivity((CAppViewManagerTelemetry::SwitchAsyncWorker *)v21);
  v17 = 0;
  CIAMGlobals::AcquireExclusive(v10, &v19);
  v11 = CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(a1, a2, a3, a5, &v17);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
  if ( v11 >= 0 && v17 )
  {
    v19 = (RTL_SRWLOCK *)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    CAppViewManagerTelemetry::SwitchAsyncWorker::Split((__int64)v21, v22);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v30,
      (__int64)v22);
    v30[0] = (volatile signed __int32 *)&CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v28);
    v28[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
    v29 = 1;
    v18 = a6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v23[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v23);
    v23[1] = (__int64)a2;
    v23[2] = (__int64)a3;
    v24 = a4 | 2;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v25,
      (__int64)v22);
    v25 = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
    wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___(
      (__int64)v26,
      (__int64)v28);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v27, &v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::_lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___((CAppViewManagerTelemetry::SwitchAsyncWorker *)v28);
    v12 = 0LL;
    v13 = operator new(0x2D0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v13;
    if ( v13 )
    {
      v12 = (void *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_(
                      (__int64)v13,
                      (__int64)v23);
      v18 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v18);
    v18 = v12;
    v20[0] = 0LL;
    v20[1] = 0LL;
    v14 = CAppViewManager::_ShowViewAsyncWorker(
            a1,
            a3,
            a2,
            (const struct CAppViewManager::ShowViewAsyncOptions *)v20,
            0LL,
            (struct IAsyncCallback *)v12,
            0LL);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21, v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_(v23);
    CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(v30);
    CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  }
  else
  {
    v15 = (CAppViewManagerTelemetry::SwitchAsyncWorker *)CAppViewManagerTelemetry::SwitchAsyncWorker::Split(
                                                           (__int64)v21,
                                                           v22);
    v14 = CAppViewManager::_ContinueSwitchAsyncWorker(
            (__int64)a1,
            (__int64)a2,
            (__int64)a3,
            a4,
            v15,
            (struct IAsyncCallback *)a6);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21, v14);
  }
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(v21);
  return v14;
}
