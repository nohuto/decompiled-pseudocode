/*
 * XREFs of ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000DC70
 * Callers:
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 *     ?EnsureNoiseSurfaceBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180093EF8 (-EnsureNoiseSurfaceBrush@CNoiseSurfaceCache@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18000F6B8 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ @ 0x1800B5EAC (-SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CBitmapSource::CreateCompSurfaceFromWICBitmap(
        struct IWICBitmapSource *a1,
        struct Windows::UI::Composition::ICompositionSurface **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CGraphicsDeviceManager *v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, unsigned __int64, __int64); // rdi
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  int v12; // eax
  __int64 v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64); // r9
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, GUID *, __int64); // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  CGraphicsDeviceManager *v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  CGraphicsDeviceManager *v25; // rbx
  int v26; // eax
  struct Windows::UI::Composition::ICompositionSurface *v28; // rcx
  __int64 v29; // rax
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64); // r9
  int v31; // eax
  struct Windows::UI::Composition::ICompositionSurface *v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  CGraphicsDeviceManager *v35; // rbx
  int v36; // [rsp+20h] [rbp-69h]
  int *v37; // [rsp+20h] [rbp-69h]
  __int64 v38; // [rsp+40h] [rbp-49h] BYREF
  __int64 v39; // [rsp+48h] [rbp-41h] BYREF
  int v40[2]; // [rsp+50h] [rbp-39h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v41; // [rsp+58h] [rbp-31h] BYREF
  __int64 v42; // [rsp+60h] [rbp-29h] BYREF
  int v43; // [rsp+68h] [rbp-21h] BYREF
  int v44; // [rsp+6Ch] [rbp-1Dh] BYREF
  CGraphicsDeviceManager *v45; // [rsp+70h] [rbp-19h] BYREF
  int v46[2]; // [rsp+78h] [rbp-11h] BYREF
  CGraphicsDeviceManager **v47; // [rsp+80h] [rbp-9h]
  __int64 *v48; // [rsp+88h] [rbp-1h]
  char v49; // [rsp+90h] [rbp+7h]
  __int64 v50; // [rsp+98h] [rbp+Fh]
  float v51; // [rsp+A0h] [rbp+17h]
  float v52; // [rsp+A4h] [rbp+1Bh]
  float v53[4]; // [rsp+A8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v41 = 0LL;
  *(_QWORD *)v40 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, int *, int *))a1->lpVtbl->GetSize)(a1, &v43, &v44);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x183,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v4,
      v36);
    return v5;
  }
  v6 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  v7 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v6);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
      (const char *)(unsigned int)v7,
      v36);
    v33 = v5;
    v34 = 390LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)v33,
      (int)v37);
LABEL_50:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v42);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v39);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v38);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v40);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v41);
    return v5;
  }
  if ( g_simulateDeviceLost )
    CGraphicsDeviceManager::SimulateDeviceLost(v6);
  v45 = v6;
  v8 = *((_QWORD *)v6 + 7);
  v9 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v8 + 48LL);
  *(_QWORD *)v40 = 0LL;
  v10 = 0LL;
  v10.m128_f32[0] = (float)v43;
  v11 = 0LL;
  v11.m128_f32[0] = (float)v44;
  v37 = v40;
  v12 = v9(v8, _mm_unpacklo_ps(v10, v11).m128_u64[0], 87LL);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v12,
      (int)v40);
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    if ( *(_QWORD *)v40 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v40 + 16LL))(*(_QWORD *)v40);
    if ( v41 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v41 + 16LL))(v41);
    return v5;
  }
  v38 = 0LL;
  v13 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v38);
  v15 = (**v14)(v14, &GUID_fd04e6e3_fe0c_4c3c_ab19_a07601a576ee, v13);
  v5 = v15;
  if ( v15 < 0 )
  {
    v34 = 398LL;
LABEL_53:
    v33 = (unsigned int)v15;
    goto LABEL_49;
  }
  *(_QWORD *)v46 = 0LL;
  v16 = v38;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64))(*(_QWORD *)v38 + 24LL);
  v18 = v39;
  v39 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v39);
  v37 = v46;
  v15 = v17(v16, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, v19);
  v5 = v15;
  if ( v15 < 0 )
  {
    v34 = 402LL;
    goto LABEL_53;
  }
  v20 = v45;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v45 + 3) + 32LL))(*((_QWORD *)v45 + 3));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v20 + 9) + 24LL))(*((_QWORD *)v20 + 9));
  v47 = &v45;
  v48 = &v38;
  v49 = 1;
  v21 = v39;
  v22 = v42;
  v42 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, _QWORD, __int64 *))(*(_QWORD *)v21 + 40LL))(
          v21,
          a1,
          0LL,
          &v42);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v23,
      (int)v46);
    v35 = v45;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v45 + 9) + 32LL))(*((_QWORD *)v45 + 9));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v35 + 3) + 40LL))(*((_QWORD *)v35 + 3));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
    v5 = v24;
    goto LABEL_50;
  }
  v53[0] = (float)v46[0];
  v53[1] = (float)v46[1];
  v53[2] = (float)v46[0] + (float)v43;
  v53[3] = (float)v46[1] + (float)v44;
  v50 = 0LL;
  v51 = (float)v43;
  v52 = (float)v44;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 624LL))(v39, 1LL);
  (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v39 + 208LL))(v39, v42, v53);
  v25 = v45;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v45 + 9) + 32LL))(*((_QWORD *)v45 + 9));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v25 + 3) + 40LL))(*((_QWORD *)v25 + 3));
  v49 = 0;
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
  v5 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v26,
      0);
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    if ( *(_QWORD *)v40 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v40 + 16LL))(*(_QWORD *)v40);
    if ( v41 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v41 + 16LL))(v41);
    return v5;
  }
  v28 = v41;
  v41 = 0LL;
  if ( v28 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v41);
  v31 = (**v30)(v30, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, v29);
  v5 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)(unsigned int)v31,
      0);
    goto LABEL_50;
  }
  v32 = v41;
  v41 = 0LL;
  *a2 = v32;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( *(_QWORD *)v40 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v40 + 16LL))(*(_QWORD *)v40);
  if ( v41 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v41 + 16LL))(v41);
  return 0LL;
}
