/*
 * XREFs of ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBNPEAPEAUICompositionEffectBrush@Composition@UI@Windows@@@Z @ 0x180093C10
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800945D0 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x180061C8C (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180062008 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006A5B8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180094318 (-GetBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@SAJPEAPEAUICompositionBrush@Composition@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(
        CAccentAcrylicBlurBehind *this,
        int a2,
        const double *a3,
        struct Windows::UI::Composition::ICompositionEffectBrush **a4)
{
  __int64 *v7; // rbx
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int LuminosityOpacityReference; // eax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD, __int64, int, char, struct Windows::UI::Composition::ICompositionEffectBrush **); // rdi
  int v20; // eax
  int Brush; // eax
  int v22; // eax
  struct Windows::UI::Composition::ICompositionEffectBrush *v23; // rax
  char v25; // [rsp+28h] [rbp-71h]
  unsigned int v26; // [rsp+44h] [rbp-55h]
  struct Windows::UI::Composition::ICompositionEffectBrush *v27; // [rsp+48h] [rbp-51h] BYREF
  __int64 v28; // [rsp+50h] [rbp-49h] BYREF
  __int64 v29; // [rsp+58h] [rbp-41h] BYREF
  struct Windows::UI::Composition::ICompositionBrush *v30; // [rsp+60h] [rbp-39h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-31h] BYREF
  HSTRING_HEADER v32; // [rsp+70h] [rbp-29h] BYREF
  __int64 v33; // [rsp+88h] [rbp-11h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-9h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v31 = 0LL;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>((__int64 *)&v31);
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Xaml.Media.AcrylicBrush",
    0x23u,
    0x22u);
  ActivationFactory = RoGetActivationFactory(v35, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v7);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v29 = 0LL;
    v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v31;
    v11 = **v31;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v29);
    v13 = v11(v10, &GUID_89c2d40e_e139_58af_b3ef_70f0c0abf608, v12);
    v9 = v13;
    if ( v13 >= 0 )
    {
      v28 = 0LL;
      if ( a3
        && (Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28),
            LuminosityOpacityReference = CAccentAcrylicBlurBehind::GetLuminosityOpacityReference(v15, v14, &v28),
            v9 = LuminosityOpacityReference,
            LuminosityOpacityReference < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48E,
          (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)LuminosityOpacityReference);
      }
      else
      {
        v27 = 0LL;
        v17 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
        v18 = v29;
        v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, char, struct Windows::UI::Composition::ICompositionEffectBrush **))(*(_QWORD *)v29 + 56LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        LOBYTE(v26) = HIBYTE(a2);
        *(_WORD *)((char *)&v26 + 1) = a2;
        HIBYTE(v26) = BYTE2(a2);
        v25 = 0;
        v20 = v19(v18, v17, v26, v28, 255, v25, &v27);
        v9 = v20;
        if ( v20 >= 0 )
        {
          v30 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
          Brush = CAccentAcrylicBlurBehind::CNoiseSurfaceCache::GetBrush(&v30);
          if ( Brush < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4A3,
              (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)Brush);
          v33 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v32, L"Noise", 6u, 5u);
          v22 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositionEffectBrush *, __int64, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v27 + 56LL))(
                  v27,
                  v33,
                  v30);
          v9 = v22;
          if ( v22 >= 0 )
          {
            v23 = v27;
            v27 = 0LL;
            *a4 = v23;
            v33 = 0LL;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
            v9 = 0;
            goto LABEL_18;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4A7,
            (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v22);
          v33 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49C,
            (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v20);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x489,
        (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x485,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  return v9;
}
