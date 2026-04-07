/*
 * XREFs of ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x180036B68
 * Callers:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180064ACC (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800371D4 (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@@012@@Z @ 0x180037200 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@_ea_180037200.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@E.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowsInternal::UI::CreateHostBackdropBrush(
        HSTRING **this,
        struct IDCompositionDesktopDevicePartner *a2,
        struct Windows::UI::Composition::ICompositionBrush **a3)
{
  HRESULT v5; // eax
  HSTRING v6; // rbx
  __int64 (__fastcall *v7)(HSTRING, HSTRING, _QWORD); // rdi
  HRESULT v8; // eax
  __int64 v9; // rdx
  HSTRING v10; // rcx
  HSTRING v11; // rcx
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  HSTRING v16; // rcx
  int v18; // eax
  __int64 (__fastcall *v19)(HSTRING, GUID *, __int64 *); // rdi
  int v20; // eax
  HSTRING *v21; // rax
  __int64 (__fastcall *v22)(_QWORD, _QWORD); // rdi
  int v23; // eax
  __int64 (__fastcall *v24)(HSTRING, GUID *, __int64 *); // rdi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  HSTRING *v30; // rax
  int v31; // eax
  __int64 (__fastcall *v32)(HSTRING, __int64, HSTRING *); // rdi
  __int64 (__fastcall *v33)(HSTRING, _QWORD **); // rdi
  __int64 v34; // rdi
  __int64 (__fastcall **v35)(_QWORD *, GUID *, __int64); // rax
  __int64 (__fastcall *v36)(HSTRING, GUID *, __int64); // rsi
  HRESULT v37; // eax
  __int64 v38; // rax
  HSTRING v39; // rcx
  HSTRING v40; // rcx
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v41; // rcx
  __int64 (__fastcall ***v42)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v43; // rcx
  __int64 (__fastcall ***v44)(_QWORD, _QWORD, _QWORD); // rcx
  HSTRING v45; // rcx
  HSTRING v46; // [rsp+20h] [rbp-49h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-41h] BYREF
  __int64 v48; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall ***v49)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-31h] BYREF
  __int64 v50; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v51; // [rsp+48h] [rbp-21h] BYREF
  HSTRING v52; // [rsp+50h] [rbp-19h] BYREF
  HSTRING v53; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-9h] BYREF
  __int64 v55; // [rsp+68h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+7h] BYREF
  HSTRING string; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)a2 = 0LL;
  v46 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.UI.Composition.CompositionEffectSourceParameter",
         0x37u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
    RaiseException(v5, 1u, 0, 0LL);
    __debugbreak();
  }
  v6 = string;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v46);
  LODWORD(v6) = RoGetActivationFactory(v6, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c, &v46);
  if ( (int)v6 < 0 )
    goto LABEL_6;
  v6 = v46;
  v47 = 0LL;
  v7 = *(__int64 (__fastcall **)(HSTRING, HSTRING, _QWORD))(*(_QWORD *)v46 + 48LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v47);
  string = 0LL;
  v8 = WindowsCreateStringReference(L"source", 6u, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    RaiseException(v8, 1u, 0, 0LL);
    __debugbreak();
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v6,
      (int)v46);
LABEL_23:
    v16 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return (unsigned int)v6;
  }
  v18 = v7(v6, string, &v47);
  LODWORD(v6) = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v18,
      (int)v46);
LABEL_21:
    v15 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
    }
    goto LABEL_23;
  }
  v6 = (HSTRING)v47;
  v48 = 0LL;
  v19 = (__int64 (__fastcall *)(HSTRING, GUID *, __int64 *))**v47;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v48);
  v20 = v19(v6, &GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2, &v48);
  LODWORD(v6) = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v20,
      (int)v46);
LABEL_19:
    v14 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_21;
  }
  v21 = *this;
  v53 = 0LL;
  v6 = *v21;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
  LODWORD(v6) = ((__int64 (__fastcall *)(HSTRING **, GUID *, HSTRING *))v6)(
                  this,
                  &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0,
                  &v53);
  if ( (int)v6 < 0 )
    goto LABEL_42;
  v6 = v53;
  v49 = 0LL;
  v22 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v53 + 64LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v49);
  v23 = v22(v6, &v49);
  LODWORD(v6) = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v23,
      (int)v46);
LABEL_16:
    v13 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v13)[2])(v13);
    }
    goto LABEL_18;
  }
  v6 = (HSTRING)v49;
  v55 = 0LL;
  v24 = (__int64 (__fastcall *)(HSTRING, GUID *, __int64 *))**v49;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
  v25 = v24(v6, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v55);
  LODWORD(v6) = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v25,
      (int)v46);
LABEL_15:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
    goto LABEL_16;
  }
  v54 = 0LL;
  v50 = 0LL;
  v26 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(&v50);
  LODWORD(v6) = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v26,
      (int)v46);
LABEL_12:
    v12 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)v50;
    if ( v50 )
    {
      v50 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v54);
    goto LABEL_15;
  }
  *(_DWORD *)(v50 + 76) = 1;
  *(_DWORD *)(v50 + 72) = 1106247680;
  v27 = v50;
  v28 = v48;
  if ( *(_QWORD *)(v50 + 64) != v48 )
  {
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
    v29 = *(_QWORD *)(v27 + 64);
    *(_QWORD *)(v27 + 64) = v28;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = *this;
  v51 = 0LL;
  v6 = *v30;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v51);
  v31 = ((__int64 (__fastcall *)(HSTRING **, GUID *, HSTRING *))v6)(
          this,
          &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
          &v51);
  LODWORD(v6) = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v31,
      (int)v46);
LABEL_10:
    v11 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_12;
  }
  v6 = v51;
  v52 = 0LL;
  v32 = *(__int64 (__fastcall **)(HSTRING, __int64, HSTRING *))(*(_QWORD *)v51 + 88LL);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease(&v52);
  LODWORD(v6) = v32(v6, v50, &v52);
  if ( (int)v6 < 0 )
  {
    v9 = 50LL;
    goto LABEL_8;
  }
  v6 = v52;
  v33 = *(__int64 (__fastcall **)(HSTRING, _QWORD **))(*(_QWORD *)v52 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v54);
  LODWORD(v6) = v33(v6, &v54);
  if ( (int)v6 < 0 )
  {
    v9 = 51LL;
    goto LABEL_8;
  }
  v6 = (HSTRING)v54;
  v34 = v55;
  v35 = (__int64 (__fastcall **)(_QWORD *, GUID *, __int64))*v54;
  string = 0LL;
  v36 = (__int64 (__fastcall *)(HSTRING, GUID *, __int64))v35[7];
  v37 = WindowsCreateStringReference(L"source", 6u, &hstringHeader, &string);
  if ( v37 < 0 )
  {
    RaiseException(v37, 1u, 0, 0LL);
    __debugbreak();
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v6,
      (int)v46);
LABEL_18:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
    goto LABEL_19;
  }
  LODWORD(v6) = v36(v6, (GUID *)string, v34);
  if ( (int)v6 < 0 )
  {
    v9 = 53LL;
    goto LABEL_8;
  }
  v38 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
  LODWORD(v6) = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64))*v54)(
                  v54,
                  &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
                  v38);
  if ( (int)v6 < 0 )
  {
    v9 = 55LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\restricted\\shell\\inc\\windowacrylicbackdrop.h",
      (const char *)(unsigned int)v6,
      (int)v46);
    v10 = v52;
    if ( v52 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_10;
  }
  v39 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)v50;
  if ( v50 )
  {
    v50 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v41);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v54);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
  v42 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v42)[2])(v42);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
  v43 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v44)[2])(v44);
  }
  v45 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v45 + 16LL))(v45);
  }
  return 0LL;
}
