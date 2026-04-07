/*
 * XREFs of ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x18004124C
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x180040D50 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003D7C8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAccentAcrylicBlurBehind::GetLuminosityOpacityReference(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rbx
  HRESULT v5; // eax
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD); // rdi
  __int64 v13; // rdx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v20)(_QWORD, GUID *, __int64 *); // rdi
  int v21; // eax
  __int64 v22; // rax
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v26)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v29; // rcx
  __int64 (__fastcall ***v30)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v34; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v36; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-40h] BYREF
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( !a3 )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)0x80070057LL,
      (int)v33);
    return v7;
  }
  *a3 = 0LL;
  v33 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)&v33);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    RaiseException(v5, 1u, 0, 0LL);
  }
  else
  {
    ActivationFactory = RoGetActivationFactory(string, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v4);
    v7 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4DF,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)ActivationFactory,
        (int)v33);
      v26 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
      if ( v33 )
      {
        v33 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v26)[2])(v26);
      }
      return v7;
    }
    v34 = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
    v9 = **v33;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    v10 = v9(v8, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v34);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v10,
        (int)v33);
      v31 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
      if ( v33 )
      {
        v33 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v32)[2])(v32);
      }
      return v7;
    }
    v35 = 0LL;
    v11 = v34;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v34 + 120LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    v14 = v12(v11, v13, &v35);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v14,
        (int)v33);
      v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
      if ( v35 )
      {
        v35 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
      }
      v16 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
      if ( v33 )
      {
        v33 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v17)[2])(v17);
      }
      return v7;
    }
  }
  v36 = 0LL;
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  v20 = **v35;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  v21 = v20(v19, &GUID_2f2d6c29_5473_5f3e_92e7_96572bb990e2, &v36);
  v7 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v21,
      (int)v33);
    v27 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
    if ( v35 )
    {
      v35 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v28)[2])(v28);
    }
    v29 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v30)[2])(v30);
    }
    return v7;
  }
  v22 = v36;
  v36 = 0LL;
  *a3 = v22;
  v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  if ( v35 )
  {
    v35 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v23)[2])(v23);
  }
  v24 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
  if ( v33 )
  {
    v33 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v25)[2])(v25);
  }
  return 0LL;
}
