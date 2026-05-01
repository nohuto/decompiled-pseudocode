/*
 * XREFs of ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18024B4C8
 * Callers:
 *     ?SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18024B3B0 (-SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT.c)
 * Callees:
 *     ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@00@Z @ 0x1800D2C5C (-StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemet.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800D392C (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180192234 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_180192234.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019243C (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D8DC8 (--0-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6_____lambda_acc696b87ca0019872947d555e7575b6___ @ 0x18039EB4C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_acc696b87ca00.c)
 *     _lambda_acc696b87ca0019872947d555e7575b6_::__lambda_acc696b87ca0019872947d555e7575b6_ @ 0x1803A4B04 (_lambda_acc696b87ca0019872947d555e7575b6_--__lambda_acc696b87ca0019872947d555e7575b6_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(
        __int64 a1,
        __int64 a2,
        const struct tagRECT *a3,
        __int64 *a4)
{
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned int v10; // edi
  __int64 *v11; // rax
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rcx
  unsigned int v14; // edi
  struct tagRECT si128; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v18; // [rsp+68h] [rbp-98h]
  _QWORD v19[3]; // [rsp+78h] [rbp-88h] BYREF
  void **v20; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v21[42]; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = *a4;
  v9 = (a4[1] - v8) >> 4;
  if ( v9 > 1 )
  {
    si128 = *(struct tagRECT *)(v8 + 16);
LABEL_4:
    *(_OWORD *)v16 = *(_OWORD *)v8;
    goto LABEL_6;
  }
  si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( v9 )
    goto LABEL_4;
  *(__m128i *)v16 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
LABEL_6:
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"UndockedSearchAppExperienceManager_SetWindowRgn");
  v21[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v21,
    a3,
    (const struct tagRECT *)v16,
    &si128);
  *(_DWORD *)v16 = 0;
  *(_OWORD *)&v16[8] = 0LL;
  v17 = a2;
  v18 = *a3;
  std::vector<tagRECT>::vector<tagRECT>(v19, (__int64)a4);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v20,
    (__int64)v21);
  v20 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  v10 = *(_DWORD *)(a1 + 8);
  v11 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6_____lambda_acc696b87ca0019872947d555e7575b6___(
                     &si128,
                     &v17);
  v12 = *v11;
  *v11 = 0LL;
  v13 = *(volatile signed __int32 **)&si128.left;
  if ( *(_QWORD *)&si128.left )
  {
    *(_QWORD *)&si128.left = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v13);
  }
  v14 = SHTaskPoolQueueTask(3LL, 2LL, v10);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  winrt::check_hresult(&si128, v14, v16);
  lambda_acc696b87ca0019872947d555e7575b6_::__lambda_acc696b87ca0019872947d555e7575b6_(&v17);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v21);
}
