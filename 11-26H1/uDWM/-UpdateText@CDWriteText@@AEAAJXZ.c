/*
 * XREFs of ?UpdateText@CDWriteText@@AEAAJXZ @ 0x18000723C
 * Callers:
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x180070B30 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x1800093C8 (--$GetBrush@UICompositionSurfaceBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompo.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x18000BE00 (-CreateTextLayout@CDWriteText@@AEAAJXZ.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18000F6B8 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x18008EEAC (_o_ceilf_0.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 *     ?SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ @ 0x1800B5EAC (-SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CDWriteText::UpdateText(CDWriteText *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int TextLayout; // eax
  int v5; // eax
  float v6; // xmm9_4
  float v7; // xmm10_4
  __m128 v8; // xmm0
  __m128 v9; // xmm7
  __m128 v10; // xmm0
  __m128 v11; // xmm8
  CGraphicsDeviceManager *v12; // rsi
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64); // r9
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 v21; // rcx
  CGraphicsDeviceManager *v22; // rbx
  int v23; // eax
  int v24; // esi
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  CGraphicsDeviceManager *v27; // rbx
  __int64 v28; // rax
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64); // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 (*v36)(void); // rax
  __int64 v37; // rax
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64); // r9
  int v39; // eax
  __m128 v40; // xmm0
  int v41; // eax
  __int64 v43; // rcx
  int v44; // eax
  unsigned __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  CGraphicsDeviceManager *v49; // rbx
  __int64 v50; // rdx
  int v51; // [rsp+28h] [rbp-E0h]
  int *v52; // [rsp+28h] [rbp-E0h]
  __int64 v53; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  CGraphicsDeviceManager *v60; // [rsp+70h] [rbp-98h] BYREF
  int v61[2]; // [rsp+78h] [rbp-90h] BYREF
  CGraphicsDeviceManager **v62; // [rsp+80h] [rbp-88h]
  __int64 *v63; // [rsp+88h] [rbp-80h]
  char v64; // [rsp+90h] [rbp-78h]
  __int128 v65; // [rsp+98h] [rbp-70h] BYREF
  __int128 v66; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v67; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-40h]
  int v69; // [rsp+D8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v55 = 0LL;
  v2 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionSurfaceBrush>(this, &v55);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v2,
      v51);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    return v3;
  }
  if ( !*((_DWORD *)this + 16) )
  {
    v43 = v55;
    if ( !v55 )
      goto LABEL_55;
    TextLayout = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 104LL))(v55, 0LL);
    v3 = TextLayout;
    if ( TextLayout >= 0 )
    {
      v43 = v55;
      goto LABEL_55;
    }
    v47 = 102LL;
    goto LABEL_126;
  }
  TextLayout = CDWriteText::CreateTextLayout(this);
  v3 = TextLayout;
  if ( TextLayout < 0 )
  {
    v47 = 110LL;
LABEL_126:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)TextLayout,
      v51);
    goto LABEL_123;
  }
  v53 = 0LL;
  v54 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0;
  v65 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 28) + 480LL))(*((_QWORD *)this + 28), &v67);
  v3 = v5;
  if ( v5 < 0 )
  {
    v46 = 119LL;
LABEL_129:
    v45 = (unsigned int)v5;
    goto LABEL_121;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 28) + 488LL))(*((_QWORD *)this + 28), &v65);
  v3 = v5;
  if ( v5 < 0 )
  {
    v46 = 120LL;
    goto LABEL_129;
  }
  v6 = floorf(COERCE_FLOAT(v65 ^ _xmm)) - 1.0;
  v7 = floorf(COERCE_FLOAT(DWORD1(v65) ^ _xmm)) - 1.0;
  v8 = (__m128)DWORD2(v65);
  v8.m128_f32[0] = o_ceilf_0(*((float *)&v65 + 2) + *((float *)&v68 + 1));
  v9 = v8;
  v9.m128_f32[0] = (float)(v8.m128_f32[0] + 1.0) - v6;
  v10 = (__m128)HIDWORD(v65);
  v10.m128_f32[0] = o_ceilf_0(*((float *)&v65 + 3) + *((float *)&v68 + 2));
  v11 = v10;
  v12 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  v13 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v12);
  v3 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
      (const char *)(unsigned int)v13,
      v51);
    v45 = v3;
    v46 = 136LL;
LABEL_121:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)v45,
      v51);
LABEL_122:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v54);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v53);
LABEL_123:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v55);
    return v3;
  }
  if ( g_simulateDeviceLost )
    CGraphicsDeviceManager::SimulateDeviceLost(v12);
  v60 = v12;
  v14 = (__int64 *)*((_QWORD *)v12 + 7);
  v56 = 0LL;
  v15 = *v14;
  v56 = 0LL;
  v52 = (int *)&v56;
  v11.m128_f32[0] = (float)(v10.m128_f32[0] + 1.0) - v7;
  v16 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64))(v15 + 48))(
          v14,
          _mm_unpacklo_ps(v9, v11).m128_u64[0],
          87LL);
  v3 = v16;
  if ( v16 < 0 )
  {
    v48 = 144LL;
LABEL_132:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v16,
      (int)v52);
LABEL_141:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v56);
    goto LABEL_122;
  }
  v53 = 0LL;
  v17 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v53);
  v16 = (**v18)(v18, &GUID_fd04e6e3_fe0c_4c3c_ab19_a07601a576ee, v17);
  v3 = v16;
  if ( v16 < 0 )
  {
    v48 = 147LL;
    goto LABEL_132;
  }
  *(_QWORD *)v61 = 0LL;
  v19 = v53;
  v20 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v53 + 24LL);
  v21 = v54;
  v54 = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v52 = v61;
  v16 = v20(v19, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, &v54);
  v3 = v16;
  if ( v16 < 0 )
  {
    v48 = 155LL;
    goto LABEL_132;
  }
  v57 = 0LL;
  v22 = v60;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v60 + 3) + 32LL))(*((_QWORD *)v60 + 3));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v22 + 9) + 24LL))(*((_QWORD *)v22 + 9));
  v62 = &v60;
  v63 = &v53;
  v64 = 1;
  v66 = 0LL;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v54 + 376LL))(v54, &v66);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 272LL))(v54, 2LL);
  *(float *)&v66 = (float)*((unsigned __int8 *)this + 448) / 255.0;
  *((float *)&v66 + 1) = (float)*((unsigned __int8 *)this + 449) / 255.0;
  *((float *)&v66 + 2) = (float)*((unsigned __int8 *)this + 450) / 255.0;
  HIDWORD(v66) = 1065353216;
  v23 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*(_QWORD *)v54 + 64LL))(
          v54,
          &v66,
          0LL,
          &v57);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v23,
      (int)v61);
    v49 = v60;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v60 + 9) + 32LL))(*((_QWORD *)v60 + 9));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v49 + 3) + 40LL))(*((_QWORD *)v49 + 3));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v57);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v56);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v54);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v53);
    v3 = v24;
    goto LABEL_123;
  }
  v25 = (__m128)COERCE_UNSIGNED_INT((float)v61[0]);
  v25.m128_f32[0] = v25.m128_f32[0] - v6;
  v26 = (__m128)COERCE_UNSIGNED_INT((float)v61[1]);
  v26.m128_f32[0] = v26.m128_f32[0] - v7;
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)v54 + 224LL))(
    v54,
    _mm_unpacklo_ps(v25, v26).m128_u64[0],
    *((_QWORD *)this + 28),
    v57);
  v27 = v60;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v60 + 9) + 32LL))(*((_QWORD *)v60 + 9));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v27 + 3) + 40LL))(*((_QWORD *)v27 + 3));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
  v58 = 0LL;
  v28 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v58);
  v30 = (**v29)(v29, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, v28);
  v3 = v30;
  if ( v30 < 0 )
  {
    v50 = 191LL;
LABEL_140:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v30,
      0);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v58);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v57);
    goto LABEL_141;
  }
  v31 = v55;
  if ( v55 )
    goto LABEL_22;
  v32 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v33 = *v32;
  v55 = 0LL;
  v34 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v33 + 184))(v32, &v55);
  v3 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v34,
      0);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    return v3;
  }
  v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 88LL))(v55, 0LL);
  v3 = v30;
  if ( v30 < 0 )
  {
    v50 = 198LL;
    goto LABEL_140;
  }
  v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 120LL))(v55);
  v3 = v30;
  if ( v30 < 0 )
  {
    v50 = 199LL;
    goto LABEL_140;
  }
  v30 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(this, v55);
  v3 = v30;
  if ( v30 < 0 )
  {
    v50 = 200LL;
    goto LABEL_140;
  }
  v31 = v55;
LABEL_22:
  v35 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 104LL))(v31, v58);
  v3 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v35,
      0);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    return v3;
  }
  v36 = *(__int64 (**)(void))(*(_QWORD *)v55 + 72LL);
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    v44 = v36();
    v3 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)v44,
        0);
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      if ( v53 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      if ( v55 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      return v3;
    }
    goto LABEL_25;
  }
  v30 = v36();
  v3 = v30;
  if ( v30 < 0 )
  {
    v50 = 212LL;
    goto LABEL_140;
  }
LABEL_25:
  v59 = 0LL;
  v37 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v59);
  v39 = (**v38)(v38, &GUID_d27174d5_64f5_4692_9dc7_71b61d7e5880, v37);
  v3 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v39,
      0);
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    return v3;
  }
  v40 = _mm_xor_ps((__m128)DWORD1(v65), (__m128)(unsigned int)_xmm);
  v40.m128_f32[0] = floorf(v40.m128_f32[0]);
  v40.m128_f32[0] = floorf(
                      (float)(v40.m128_f32[0] - 1.0)
                    + (float)((float)((float)*((int *)this + 17) - *(float *)&v68) * 0.5));
  v41 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v59 + 88LL))(
          v59,
          _mm_unpacklo_ps((__m128)0LL, v40).m128_u64[0]);
  v3 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v41,
      0);
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    return v3;
  }
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  v43 = v55;
LABEL_55:
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  return 0LL;
}
