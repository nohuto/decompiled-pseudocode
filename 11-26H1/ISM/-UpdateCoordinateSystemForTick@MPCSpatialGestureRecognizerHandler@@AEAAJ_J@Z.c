/*
 * XREFs of ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x1800C4584
 * Callers:
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800C25EC (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x1800C3680 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800682D8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(
        MPCSpatialGestureRecognizerHandler *this,
        __int64 a2)
{
  __int64 *v4; // r14
  __int64 v5; // rbx
  int ActivationFactory; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  const char *v10; // r9
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, __int64 *); // rbx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64, __int64 *); // rbx
  int v20; // eax
  __int64 v22; // rbx
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v25 = 0LL;
  v4 = (__int64 *)((char *)this + 112);
  if ( !*((_QWORD *)this + 14) )
  {
    v23 = 0LL;
    v26 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Perception.Spatial.SpatialLocator",
      0x2Au,
      0x29u);
    v5 = v28;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    ActivationFactory = RoGetActivationFactory(v5, &GUID_b76e3340_a7c2_361b_bb82_56e93b89b1bb, &v23);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v23);
    v7 = v23;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    v9 = v8(v7, &v26);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v9,
        v23);
    v11 = v26;
    if ( !v26 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        v10);
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    v13 = v12(v11, v4);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v13,
        v23);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  }
  v14 = *((_QWORD *)this + 15);
  v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  v16 = v15(v14, a2, &v25);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v16);
LABEL_15:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    return v17;
  }
  v24 = 0LL;
  v18 = *v4;
  v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)*v4 + 88LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  v20 = v19(v18, v25, &v24);
  v17 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    goto LABEL_15;
  }
  v22 = v24;
  if ( *((_QWORD *)this + 16) != v24 )
  {
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v23 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v22;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  return 0LL;
}
