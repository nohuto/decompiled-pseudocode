/*
 * XREFs of ?GetRealizationSize@CSurfaceBrush@@QEBAJPEAUD2D_SIZE_F@@@Z @ 0x180083974
 * Callers:
 *     ?InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180083834 (-InferViewportTransform@CSurfaceBrush@@IEAAJAEBUtagRECT@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??1?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800835D0 (--1-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSurfaceBrush::GetRealizationSize(CSurfaceBrush *this, struct D2D_SIZE_F *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int (__fastcall ***v10)(_QWORD, GUID *, __int64); // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  int (__fastcall ***v13)(_QWORD, GUID *, __int64); // r9
  __int64 v14; // r9
  struct D2D_SIZE_F v16; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF

  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 96LL);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(&v20);
    v6 = v5(v3, &v20);
    v4 = v6;
    if ( v6 < 0 )
    {
      v7 = 112LL;
LABEL_15:
      v14 = (unsigned int)v6;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
        (const char *)v14,
        SLODWORD(v16.width));
      wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v18);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
      return v4;
    }
    v8 = v18;
    v18 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v18);
    if ( (**v10)(v10, &GUID_f26da89e_683d_4c67_aea7_ba29b2217a70, v9) < 0 )
    {
      v11 = v19;
      v19 = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v19);
      if ( (**v13)(v13, &GUID_a166c300_fad0_4d11_9e67_e433162ff49e, v12) < 0 )
      {
        v4 = -2147467262;
        v14 = 2147500034LL;
        v7 = 128LL;
        goto LABEL_19;
      }
      v16 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, struct D2D_SIZE_F *))(*(_QWORD *)v19 + 64LL))(v19, &v16);
      v4 = v6;
      if ( v6 < 0 )
      {
        v7 = 121LL;
        goto LABEL_15;
      }
      *a2 = v16;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, struct D2D_SIZE_F *))(*(_QWORD *)v18 + 48LL))(v18, a2);
      v4 = v6;
      if ( v6 < 0 )
      {
        v7 = 116LL;
        goto LABEL_15;
      }
    }
    wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
    return 0LL;
  }
  v4 = -2147020579;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)0x800710DDLL,
    SLODWORD(v16.width));
  return v4;
}
