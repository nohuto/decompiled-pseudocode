/*
 * XREFs of ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18023ED68
 * Callers:
 *     ?SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18023EC50 (-SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT.c)
 * Callees:
 *     ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@00@Z @ 0x18007EC30 (-StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemet.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B4308 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_1800B4308.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180187340 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_180187340.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180187544 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180190074 (--0-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835_____lambda_7c31732deb1fbe728880e2f5434a1835___ @ 0x1803A7374 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7c31732deb1fb.c)
 *     _lambda_7c31732deb1fbe728880e2f5434a1835_::__lambda_7c31732deb1fbe728880e2f5434a1835_ @ 0x1803ADD94 (_lambda_7c31732deb1fbe728880e2f5434a1835_--__lambda_7c31732deb1fbe728880e2f5434a1835_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(
        __int64 a1,
        __int64 a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  void *v8; // r9
  unsigned __int64 v9; // rax
  struct tagRECT si128; // xmm0
  unsigned int v11; // edi
  __int64 *v12; // rax
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rcx
  unsigned int v15; // edi
  struct tagRECT v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v19; // [rsp+68h] [rbp-98h]
  _QWORD v20[3]; // [rsp+78h] [rbp-88h] BYREF
  void **v21; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v22[42]; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = *(void **)a4;
  v9 = (__int64)(*(_QWORD *)(a4 + 8) - (_QWORD)v8) >> 4;
  if ( v9 > 1 )
  {
    v16 = (struct tagRECT)*((_OWORD *)v8 + 1);
LABEL_4:
    *(_OWORD *)v17 = *(_OWORD *)v8;
    goto LABEL_6;
  }
  si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v16 = si128;
  if ( v9 )
    goto LABEL_4;
  *(struct tagRECT *)v17 = si128;
LABEL_6:
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"UndockedSearchAppExperienceManager_SetWindowRgn");
  v22[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v22,
    a3,
    (const struct tagRECT *)v17,
    &v16);
  *(_DWORD *)v17 = 0;
  *(_OWORD *)&v17[8] = 0LL;
  v18 = a2;
  v19 = *a3;
  std::vector<tagRECT>::vector<tagRECT>(v20, (void **)a4);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v21,
    (__int64)v22);
  v21 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  v11 = *(_DWORD *)(a1 + 8);
  v12 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835_____lambda_7c31732deb1fbe728880e2f5434a1835___(
                     &v16,
                     &v18);
  v13 = *v12;
  *v12 = 0LL;
  v14 = *(volatile signed __int32 **)&v16.left;
  if ( *(_QWORD *)&v16.left )
  {
    *(_QWORD *)&v16.left = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v14);
  }
  v15 = SHTaskPoolQueueTask(3LL, 2LL, v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  winrt::check_hresult(&v16, v15, v17);
  lambda_7c31732deb1fbe728880e2f5434a1835_::__lambda_7c31732deb1fbe728880e2f5434a1835_(&v18);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v22);
}
