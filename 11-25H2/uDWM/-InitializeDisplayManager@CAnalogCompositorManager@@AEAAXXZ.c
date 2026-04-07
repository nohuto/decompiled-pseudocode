/*
 * XREFs of ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A252C
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A2B0C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180067AF0 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ??$GetActivationFactory@UIDisplayManagerStatics@Core@Display@Devices@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDisplayManagerStatics@Core@Display@Devices@1@@Z @ 0x180071614 (--$GetActivationFactory@UIDisplayManagerStatics@Core@Display@Devices@Windows@@@Foundation@Window.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18007B7E0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009A248 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs_____lambda_b46eae7c97fd0c0221a3f2c2069b78bc___ @ 0x1800A1CA8 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_Windows--Devices--Display-.c)
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs_____lambda_4f72ee05bd0124e78352738e10539777___ @ 0x1800A1CC8 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_Windows--Devi_ea_1800A1CC8.c)
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerEnabledEventArgs_____lambda_77212a9e6487372bbfeab6a574df83fb___ @ 0x1800A1CE8 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_Windows--Devi_ea_1800A1CE8.c)
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs_____lambda_30e9d5213486065023276bc34b6ef1c0___ @ 0x1800A1D08 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_Windows--Devi_ea_1800A1D08.c)
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A2C40 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A35AC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAnalogCompositorManager::InitializeDisplayManager(CAnalogCompositorManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, char *); // rdi
  _QWORD *v6; // r15
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *v9; // r9
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *v13; // r9
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *v17; // r9
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  wil::details::in1diag3 *v21; // r9
  __int64 v22; // rdi
  int v23; // eax
  int v24; // eax
  CAnalogCompositorManager *Instance; // rax
  int v26; // eax
  __int64 v27; // [rsp+20h] [rbp-50h] BYREF
  __int64 v28; // [rsp+28h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h] BYREF
  __int64 v31; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v27 = 0LL;
  v33 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Devices.Display.Core.DisplayManager",
    0x2Cu,
    0x2Bu);
  v2 = v33;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  v3 = Windows::Foundation::GetActivationFactory<Windows::Devices::Display::Core::IDisplayManagerStatics>(
         v2,
         (__int64)&v27);
  if ( v3 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x100,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v3,
      v27);
  v4 = v27;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v27 + 48LL);
  v6 = (_QWORD *)((char *)this + 80);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 10);
  v7 = v5(v4, 0LL, (char *)this + 80);
  if ( v7 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x101,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v7,
      v27);
  wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs_____lambda_b46eae7c97fd0c0221a3f2c2069b78bc___(
    &v28,
    v8);
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v28) )
    wil::details::in1diag3::_FailFast_NullAlloc(
      v9,
      266LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)v9);
  v10 = v28;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v6 + 152LL))(*v6, v28, (char *)this + 88);
  if ( v11 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x10B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v11,
      v27);
  wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerEnabledEventArgs_____lambda_77212a9e6487372bbfeab6a574df83fb___(
    &v29,
    v12);
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v29) )
    wil::details::in1diag3::_FailFast_NullAlloc(
      v13,
      274LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)v13);
  v14 = v29;
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v6 + 120LL))(*v6, v29, (char *)this + 96);
  if ( v15 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x113,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v15,
      v27);
  wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs_____lambda_4f72ee05bd0124e78352738e10539777___(
    &v30,
    v16);
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v30) )
    wil::details::in1diag3::_FailFast_NullAlloc(
      v17,
      282LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)v17);
  v18 = v30;
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v6 + 136LL))(*v6, v30, (char *)this + 104);
  if ( v19 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x11B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v19,
      v27);
  wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs_____lambda_30e9d5213486065023276bc34b6ef1c0___(
    &v31,
    v20);
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v31) )
    wil::details::in1diag3::_FailFast_NullAlloc(
      v21,
      290LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)v21);
  v22 = v31;
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v6 + 168LL))(*v6, v31, (char *)this + 112);
  if ( v23 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v23,
      v27);
  v24 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 184LL))(*v6);
  if ( v24 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x125,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v24,
      v27);
  Instance = CAnalogCompositorManager::GetInstance();
  v26 = CAnalogCompositorManager::OnMonitorChangedNotification(Instance);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      296LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v26);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
}
