/*
 * XREFs of ?Initialize@CCompositor@@IEAAJXZ @ 0x180068B90
 * Callers:
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180068A74 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004911C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CoinitializeWrapper@CCompositor@@AEAAJXZ @ 0x180094140 (-CoinitializeWrapper@CCompositor@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CCompositor::Initialize(CCompositor *this)
{
  int v2; // eax
  __int64 v3; // rbx
  HRESULT v4; // eax
  int ActivationFactory; // eax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 (__fastcall *v8)(__int64, GUID *, __int64); // r10
  int v9; // eax
  __int64 (__fastcall *v10)(__int64, _QWORD, CCompositor *, GUID *); // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, GUID *, __int64); // r9
  __int64 v14; // r10
  __int64 v15; // rdx
  int v16; // eax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64); // rdi
  __int64 (__fastcall *v19)(_QWORD, GUID *, __int64); // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = CCompositor::CoinitializeWrapper(this);
  LODWORD(v3) = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v2,
      v24);
    return (unsigned int)v3;
  }
  v27 = 0LL;
  v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v27);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.UI.Composition.Compositor", 0x21u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    RaiseException(v4, 1u, 0, 0LL);
    goto LABEL_18;
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, v3);
  LODWORD(v3) = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v24);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    return (unsigned int)v3;
  }
  v26 = 0LL;
  v6 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v26);
  v9 = v8(v7, &GUID_b27006d1_d095_432c_9d79_038d269d7aa3, v6);
  LODWORD(v3) = v9;
  if ( v9 < 0 )
  {
    v23 = 54LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v9,
      v24);
LABEL_43:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v26);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v27);
    return (unsigned int)v3;
  }
  v3 = v26;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, CCompositor *, GUID *))(*(_QWORD *)v26 + 48LL);
  wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((__int64 *)this + 3);
  v11 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v24 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 40);
  v9 = v10(v3, 0LL, this, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8);
  LODWORD(v3) = v9;
  if ( v9 < 0 )
  {
    v23 = 58LL;
    goto LABEL_41;
  }
  v25 = 0LL;
  v12 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v25);
  LODWORD(v3) = v13(v14, &GUID_e42fe149_110c_481f_ba46_d398ccad5c79, v12);
  if ( (int)v3 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v3,
      v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    return (unsigned int)v3;
  }
  LOBYTE(v15) = 1;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 216LL))(v25, v15);
  LODWORD(v3) = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v16,
      v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    return (unsigned int)v3;
  }
  v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*((_QWORD *)this + 5);
  v19 = **v18;
  v20 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 32);
  v22 = v19(v18, &GUID_e01eb649_787e_4560_b398_0de7a2065d8b, v21);
  LODWORD(v3) = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v22,
      v24);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v25);
    goto LABEL_43;
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return 0LL;
}
