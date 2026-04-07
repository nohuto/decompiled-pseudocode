/*
 * XREFs of ?Initialize@CCompositor@@IEAAJXZ @ 0x180058D2C
 * Callers:
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180058C04 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?CoinitializeWrapper@CCompositor@@AEAAJXZ @ 0x180083384 (-CoinitializeWrapper@CCompositor@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CCompositor::Initialize(CCompositor *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  HRESULT v5; // eax
  int ActivationFactory; // eax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 (__fastcall *v9)(__int64, GUID *, __int64); // r10
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, CCompositor *, GUID *); // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, GUID *, __int64); // r9
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64); // rdi
  __int64 (__fastcall *v22)(_QWORD, GUID *, __int64); // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = CCompositor::CoinitializeWrapper(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v2,
      v27);
    return v3;
  }
  v30 = 0LL;
  v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v30);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.UI.Composition.Compositor", 0x21u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    RaiseException(v5, 1u, 0, 0LL);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, v4);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v27);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    return v3;
  }
  v29 = 0LL;
  v7 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v29);
  v10 = v9(v8, &GUID_b27006d1_d095_432c_9d79_038d269d7aa3, v7);
  v3 = v10;
  if ( v10 < 0 )
  {
    v26 = 54LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v10,
      v27);
LABEL_43:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v29);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v30);
    return v3;
  }
  v11 = v29;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, CCompositor *, GUID *))(*(_QWORD *)v29 + 48LL);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 3);
  v13 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v27 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 40);
  v10 = v12(v11, 0LL, this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8);
  v3 = v10;
  if ( v10 < 0 )
  {
    v26 = 58LL;
    goto LABEL_41;
  }
  v28 = 0LL;
  v14 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v28);
  v17 = v15(v16, &GUID_ddda6469_6c17_4be6_8c72_188063dea2ef, v14);
  v3 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v17,
      v27);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    return v3;
  }
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 184LL))(v28, v18);
  v3 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v19,
      v27);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    return v3;
  }
  v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*((_QWORD *)this + 5);
  v22 = **v21;
  v23 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 32);
  v25 = v22(v21, &GUID_e01eb649_787e_4560_b398_0de7a2065d8b, v24);
  v3 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v25,
      v27);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v28);
    goto LABEL_43;
  }
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return 0LL;
}
