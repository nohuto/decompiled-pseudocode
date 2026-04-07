/*
 * XREFs of ?Show@CIconicSprite@@QEAAJ_N@Z @ 0x18004C224
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004C0D8 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?WUColorFromD2DColor@@YA?AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004D000 (-WUColorFromD2DColor@@YA-AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$GetBrush@UICompositionLinearGradientBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionLinearGradientBrush@Composition@UI@Windows@@@Z @ 0x180082ED0 (--$GetBrush@UICompositionLinearGradientBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CIconicSprite::Show(CIconicSprite *this, char a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, GUID *, __int64); // r9
  __int64 v9; // r10
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64); // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64); // r9
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64, _QWORD, __int64 *); // rdi
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64, _QWORD, __int64 *); // rdi
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, __int64 *); // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64); // r9
  int v39; // eax
  int v41; // [rsp+20h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  __int64 v44; // [rsp+40h] [rbp-40h] BYREF
  __int64 v45; // [rsp+48h] [rbp-38h] BYREF
  __int64 v46; // [rsp+50h] [rbp-30h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v49; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v50; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  v47 = 0LL;
  if ( a2 )
  {
    v47 = 0LL;
    v5 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionLinearGradientBrush>(this, &v47);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowiconic.cpp",
        (const char *)(unsigned int)v5,
        v41);
LABEL_102:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v47);
      return v6;
    }
    v4 = v47;
    if ( !v47 )
    {
      v49 = 0LL;
      v46 = 0LL;
      v45 = 0LL;
      v44 = 0LL;
      v43 = 0LL;
      v50 = 0LL;
      v42 = 0LL;
      v7 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v42);
      v10 = v8(v9, &GUID_ae47e78a_7910_4425_a482_a05b758adce9, v7);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 42LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowiconic.cpp",
          (const char *)(unsigned int)v10,
          v41);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v50);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v43);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v44);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v45);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v46);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v49);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v42);
        goto LABEL_102;
      }
      v12 = v42;
      v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v42 + 64LL);
      v14 = v47;
      v47 = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v15 = v13(v12, &v47);
      v6 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowiconic.cpp",
          (const char *)(unsigned int)v15,
          v41);
        if ( v50 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        if ( v43 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        if ( v45 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
        if ( v46 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
        if ( v49 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        if ( v47 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
        return v6;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v47 + 72LL))(
              v47,
              _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0]);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 45LL;
        goto LABEL_7;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v47 + 56LL))(
              v47,
              _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 46LL;
        goto LABEL_7;
      }
      v16 = v49;
      v49 = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v17 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v49);
      v10 = (**v18)(v18, &GUID_1d9709e0_ffc6_4c0e_a9ab_34144d4c9098, v17);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 48LL;
        goto LABEL_7;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v49 + 96LL))(v49, 0LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 49LL;
        goto LABEL_7;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 112LL))(v49, 4LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 50LL;
        goto LABEL_7;
      }
      v19 = v46;
      v46 = 0LL;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v46);
      v10 = (**v21)(v21, &GUID_899dd5a1_b4c7_4b33_a1b6_264addc26d10, v20);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 52LL;
        goto LABEL_7;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 56LL))(v46, 1LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 53LL;
        goto LABEL_7;
      }
      v22 = v42;
      v23 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 56LL);
      v24 = v45;
      v45 = 0LL;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      WUColorFromD2DColor(&unk_1800F5BF0);
      v27 = v23(v22, v26, v25, &v45);
      v6 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowiconic.cpp",
          (const char *)(unsigned int)v27,
          v41);
        if ( v50 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        if ( v43 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        if ( v45 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
        if ( v46 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
        if ( v49 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
        if ( v47 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
        return v6;
      }
      v28 = v42;
      v29 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 56LL);
      v30 = v44;
      v44 = 0LL;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      WUColorFromD2DColor(&unk_1800F5C20);
      v10 = v29(v28, v32, v31, &v44);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 62LL;
        goto LABEL_7;
      }
      v33 = v49;
      v34 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 80LL);
      v35 = v43;
      v43 = 0LL;
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      v10 = v34(v33, &v43);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 64LL;
        goto LABEL_7;
      }
      v36 = v50;
      v50 = 0LL;
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      v37 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v50);
      v10 = (**v38)(v38, &GUID_bf2e107e_f3db_56cd_91ed_c1129406d552, v37);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 65LL;
        goto LABEL_7;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 104LL))(v50, v45);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 66LL;
        goto LABEL_7;
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 104LL))(v50, v44);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 67LL;
        goto LABEL_7;
      }
      if ( v50 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
      if ( v43 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      if ( v44 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      if ( v45 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      if ( v46 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      if ( v49 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      v4 = v47;
    }
  }
  v39 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)this, v4);
  v6 = v39;
  if ( v39 >= 0 )
  {
    v6 = 0;
    goto LABEL_102;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowiconic.cpp",
    (const char *)(unsigned int)v39,
    v41);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  return v6;
}
