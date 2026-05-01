/*
 * XREFs of ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x1803B8F20
 * Callers:
 *     ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x1803B8B00 (-SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B4308 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_1800B4308.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180187340 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_180187340.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180187544 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8af570e54697b9501e4d0fa797527737___ @ 0x1803A77A8 (Windows--Internal--ComTaskPool--QueueTask__lambda_8af570e54697b9501e4d0fa797527737___.c)
 *     ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@0@Z @ 0x1803B91DC (-StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceM_ea_1803B91DC.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v13; // [rsp+30h] [rbp-D0h]
  HWND v14; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v15; // [rsp+48h] [rbp-B8h]
  struct tagRECT v16; // [rsp+58h] [rbp-A8h]
  _QWORD v17[41]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v18[42]; // [rsp+1B0h] [rbp+B0h] BYREF

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"UndockedSearchAppExperienceManager_SetWindowRgn");
  v18[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v18,
    a3,
    a4);
  v12 = 0;
  v13 = 0LL;
  v14 = a2;
  v15 = *a3;
  v16 = *a4;
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v17,
    (__int64)v18);
  v17[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_8af570e54697b9501e4d0fa797527737___(
          v9,
          v8,
          *((_DWORD *)this + 2),
          (__int64)&v14);
  winrt::check_hresult(&v11, v10, (__int64)&v12);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v17);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v18);
}
