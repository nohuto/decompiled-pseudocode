/*
 * XREFs of ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000E35C
 * Callers:
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000D360 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000DBF4 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?CreateCompatibleRenderTarget@ID2D1RenderTarget@@QEAAJUD2D_SIZE_F@@PEAPEAUID2D1BitmapRenderTarget@@@Z @ 0x18000E320 (-CreateCompatibleRenderTarget@ID2D1RenderTarget@@QEAAJUD2D_SIZE_F@@PEAPEAUID2D1BitmapRenderTarge.c)
 *     _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator() @ 0x18000F610 (_CWindowBorder--CCachedBorderBrush--CreateBorderSurface_--_2_--_lambda_1_--operator().c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18000F6B8 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x180010240 (-GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CombineWithGeometry@ID2D1Geometry@@QEBAJPEAU1@W4D2D1_COMBINE_MODE@@PEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18006EC8C (-CombineWithGeometry@ID2D1Geometry@@QEBAJPEAU1@W4D2D1_COMBINE_MODE@@PEBUD2D_MATRIX_3X2_F@@PEAUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ @ 0x1800B5EAC (-SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=29
__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderSurface(
        float a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        _QWORD *a6)
{
  CGraphicsDeviceManager *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  __m128 v16; // xmm6
  int v17; // eax
  __int64 v18; // rax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64); // r9
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 (__fastcall *v23)(__int64, _QWORD, GUID *, __int64); // r11
  int v24; // eax
  CGraphicsDeviceManager *v25; // rbx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  ID2D1DeviceContext *v29; // rbx
  __int64 (__fastcall *v30)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  struct ID2D1Effect *v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  float v35; // xmm8_4
  __int64 *v36; // rbx
  int v37; // eax
  int v38; // edi
  __m128 v39; // xmm2
  __m128 v40; // xmm2
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // edi
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  enum D2D1_COMBINE_MODE v48; // r8d
  const struct D2D_MATRIX_3X2_F *v49; // r9
  int v50; // eax
  int v51; // eax
  const struct D2D_POINT_2F *v52; // r8
  const struct D2D_RECT_F *v53; // r9
  const struct D2D_POINT_2F *v54; // r8
  const struct D2D_RECT_F *v55; // r9
  __int64 v56; // rax
  __int64 (__fastcall ***v57)(_QWORD, GUID *, __int64); // r9
  int v58; // eax
  __int64 v59; // rax
  ID2D1DeviceContext *v61; // rbx
  __int64 (__fastcall *v62)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **); // rdi
  struct ID2D1Effect *v63; // rcx
  int v64; // eax
  int v65; // eax
  int v66; // [rsp+28h] [rbp-E0h]
  int *v67; // [rsp+28h] [rbp-E0h]
  int v68; // [rsp+28h] [rbp-E0h]
  int v69; // [rsp+28h] [rbp-E0h]
  ID2D1DeviceContext *v70; // [rsp+38h] [rbp-D0h] BYREF
  struct ID2D1Effect *v71; // [rsp+40h] [rbp-C8h] BYREF
  struct ID2D1Effect *v72; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1BitmapRenderTarget *v73; // [rsp+50h] [rbp-B8h] BYREF
  ID2D1Geometry *v74; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v75; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v76; // [rsp+68h] [rbp-A0h] BYREF
  enum D2D1_INTERPOLATION_MODE v77[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v78; // [rsp+78h] [rbp-90h] BYREF
  float v79; // [rsp+80h] [rbp-88h] BYREF
  float v80; // [rsp+84h] [rbp-84h] BYREF
  _QWORD v81[3]; // [rsp+88h] [rbp-80h] BYREF
  char v82; // [rsp+A0h] [rbp-68h]
  __int64 v83; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-58h] BYREF
  enum D2D1_COMPOSITE_MODE v85[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-48h] BYREF
  int v87[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int32 v88; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v89; // [rsp+D8h] [rbp-30h] BYREF
  CGraphicsDeviceManager *v90; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v91[40]; // [rsp+F8h] [rbp-10h]
  __int64 v92; // [rsp+120h] [rbp+18h]
  __int64 v93; // [rsp+128h] [rbp+20h]
  __m128i si128; // [rsp+130h] [rbp+28h] BYREF
  float v95; // [rsp+140h] [rbp+38h]
  float v96; // [rsp+144h] [rbp+3Ch]
  float v97; // [rsp+148h] [rbp+40h] BYREF
  float v98; // [rsp+14Ch] [rbp+44h]
  __m128 v99; // [rsp+150h] [rbp+48h]
  float v100[2]; // [rsp+160h] [rbp+58h] BYREF
  __m128 v101; // [rsp+168h] [rbp+60h]
  _OWORD v102[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v103; // [rsp+1B8h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  v9 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
  v10 = CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\GraphicsDeviceManager.h",
      (const char *)(unsigned int)v10,
      v66);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)v11,
      v69);
    return v11;
  }
  if ( g_simulateDeviceLost )
    CGraphicsDeviceManager::SimulateDeviceLost(v9);
  v90 = v9;
  v12 = *((_QWORD *)v9 + 7);
  v79 = 0.0;
  v80 = 0.0;
  v88 = 0;
  v85[0] = D2D1_COMPOSITE_MODE_SOURCE_OVER;
  CWindowBorder::GetShadowParameters(a5, (unsigned int)a2, &v79, &v80, &v88, v85);
  v13 = (float)a2 / 96.0;
  v14 = v79;
  v15 = fmaxf((float)((float)(v13 * a1) + 2.0) + (float)((float)(v13 * a1) + 2.0), v79);
  v16 = (__m128)LODWORD(v79);
  v16.m128_f32[0] = (float)(v79 * 2.0) + v15;
  v78 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64))(*(_QWORD *)v12 + 48LL))(
          v12,
          _mm_unpacklo_ps(v16, v16).m128_u64[0],
          87LL,
          1LL);
  v11 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v17,
      (int)&v78);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    return v11;
  }
  v84 = 0LL;
  v18 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v84);
  v20 = (**v19)(v19, &GUID_fd04e6e3_fe0c_4c3c_ab19_a07601a576ee, v18);
  v11 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v20,
      (int)&v78);
LABEL_135:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v84);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v78);
    return v11;
  }
  *(_QWORD *)v87 = 0LL;
  v70 = 0LL;
  v21 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v70);
  v67 = v87;
  v24 = v23(v22, 0LL, &GUID_e8f7fe7a_191c_466d_ad95_975678bda998, v21);
  v11 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v24,
      (int)v87);
    goto LABEL_134;
  }
  v25 = v90;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v90 + 3) + 32LL))(*((_QWORD *)v90 + 3));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v25 + 9) + 24LL))(*((_QWORD *)v25 + 9));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v95 = (float)v87[0];
  v96 = (float)v87[1];
  (*(void (__fastcall **)(ID2D1DeviceContext *, __m128i *))(*(_QWORD *)v70 + 240LL))(v70, &si128);
  v81[0] = &v70;
  v81[1] = &v90;
  v81[2] = &v84;
  v82 = 1;
  v72 = 0LL;
  v71 = 0LL;
  v97 = v14;
  v98 = v14;
  v99.m128_f32[0] = v15 + v14;
  v99.m128_f32[1] = v15 + v14;
  v99.m128_f32[2] = v13 * a1;
  v99.m128_f32[3] = v13 * a1;
  if ( !a5 )
    goto LABEL_22;
  v73 = 0LL;
  v26 = ID2D1RenderTarget::CreateCompatibleRenderTarget(
          v70,
          (struct D2D_SIZE_F)*(_OWORD *)&_mm_unpacklo_ps(v16, v16),
          &v73);
  v11 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v26,
      (int)v87);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v73);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
    v82 = 0;
    CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
    goto LABEL_134;
  }
  v83 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v27 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __m128i *, _QWORD, __int64 *))(*(_QWORD *)v70 + 64LL))(
          v70,
          &si128,
          0LL,
          &v83);
  v11 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x171,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v27,
      (int)v87);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v83);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v73);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
    v82 = 0;
    CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
    goto LABEL_134;
  }
  (*(void (__fastcall **)(struct ID2D1BitmapRenderTarget *))(*(_QWORD *)v73 + 384LL))(v73);
  si128 = 0LL;
  (*(void (__fastcall **)(struct ID2D1BitmapRenderTarget *, __m128i *))(*(_QWORD *)v73 + 376LL))(v73, &si128);
  (*(void (__fastcall **)(struct ID2D1BitmapRenderTarget *, float *, __int64))(*(_QWORD *)v73 + 152LL))(v73, &v97, v83);
  v28 = (*(__int64 (__fastcall **)(struct ID2D1BitmapRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v73 + 392LL))(
          v73,
          0LL,
          0LL);
  v11 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v28,
      (int)v87);
    if ( v83 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
    if ( v73 )
      (*(void (__fastcall **)(struct ID2D1BitmapRenderTarget *))(*(_QWORD *)v73 + 16LL))(v73);
    if ( v71 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v71 + 16LL))(v71);
    if ( v72 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v72 + 16LL))(v72);
    v82 = 0;
    CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
    if ( v70 )
      (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v70 + 16LL))(v70);
    if ( v84 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    return v11;
  }
  v29 = v70;
  v30 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v70 + 504LL);
  v31 = v72;
  v72 = 0LL;
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v31 + 16LL))(v31);
  v32 = v30(v29, &CLSID_D2D1Shadow, &v72);
  v11 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x179,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v32,
      (int)v87);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v83);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v73);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
    v82 = 0;
    CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
    goto LABEL_134;
  }
  v86 = 0LL;
  v33 = *(_QWORD *)v73;
  v86 = 0LL;
  v34 = (*(__int64 (__fastcall **)(struct ID2D1BitmapRenderTarget *, __int64 *))(v33 + 456))(v73, &v86);
  v11 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v34,
      (int)v87);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v86);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v83);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v73);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
    v82 = 0;
    CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
    goto LABEL_134;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v72 + 112LL))(v72, 0LL, v86, 1LL);
  v79 = v14 / 3.0;
  LODWORD(v67) = 4;
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, float *, int *))(*(_QWORD *)v72 + 72LL))(
    v72,
    0LL,
    0LL,
    &v79,
    v67);
  si128.m128i_i64[0] = 0LL;
  si128.m128i_i32[2] = 0;
  si128.m128i_i32[3] = v88;
  LODWORD(v67) = 16;
  (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __m128i *))(*(_QWORD *)v72 + 72LL))(
    v72,
    1LL,
    0LL,
    &si128);
  if ( a5 != 1 )
  {
    v61 = v70;
    v62 = *(__int64 (__fastcall **)(ID2D1DeviceContext *, GUID *, struct ID2D1Effect **))(*(_QWORD *)v70 + 504LL);
    v63 = v71;
    v71 = 0LL;
    if ( v63 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v63 + 16LL))(v63);
    v64 = v62(v61, &CLSID_D2D1Shadow, &v71);
    v11 = v64;
    if ( v64 >= 0 )
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v71 + 112LL))(
        v71,
        0LL,
        v86,
        1LL);
      v80 = v80 / 3.0;
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, float *, int))(*(_QWORD *)v71 + 72LL))(
        v71,
        0LL,
        0LL,
        &v80,
        4);
      si128.m128i_i64[0] = 0LL;
      si128.m128i_i32[2] = 0;
      si128.m128i_i32[3] = v85[0];
      LODWORD(v67) = 16;
      (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __m128i *))(*(_QWORD *)v71 + 72LL))(
        v71,
        1LL,
        0LL,
        &si128);
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x184,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v64,
      16);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v86);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v83);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v73);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
    v82 = 0;
    CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
LABEL_134:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v70);
    goto LABEL_135;
  }
LABEL_16:
  if ( v86 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
  if ( v83 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
  if ( v73 )
    (*(void (__fastcall **)(struct ID2D1BitmapRenderTarget *))(*(_QWORD *)v73 + 16LL))(v73);
LABEL_22:
  si128 = 0LL;
  (*(void (__fastcall **)(ID2D1DeviceContext *, __m128i *))(*(_QWORD *)v70 + 376LL))(v70, &si128);
  v35 = v14 * 0.5;
  v98 = v98 - v35;
  v99.m128_f32[1] = v99.m128_f32[1] - v35;
  v74 = 0LL;
  v36 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 16LL);
  v74 = 0LL;
  si128.m128i_i64[0] = 0LL;
  si128.m128i_i32[2] = v16.m128_i32[0];
  si128.m128i_i32[3] = v16.m128_i32[0];
  v37 = (*(__int64 (__fastcall **)(__int64 *, __m128i *, ID2D1Geometry **))(*v36 + 40))(v36, &si128, &v74);
  v38 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v37,
      (int)v67);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v74);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
    v82 = 0;
    CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v70);
    v11 = v38;
    goto LABEL_135;
  }
  v39 = (__m128)COERCE_UNSIGNED_INT((float)((a2 + 48) / 96));
  if ( !a4 )
    v39.m128_f32[0] = v39.m128_f32[0] + 1.0;
  v40 = _mm_shuffle_ps(v39, v39, 0);
  v100[0] = v40.m128_f32[0] + v97;
  v100[1] = v40.m128_f32[0] + v98;
  v101 = _mm_sub_ps(v99, v40);
  v76 = 0LL;
  v41 = *v36;
  v76 = 0LL;
  v42 = (*(__int64 (__fastcall **)(__int64 *, float *, struct ID2D1Geometry **))(v41 + 48))(v36, v100, &v76);
  v43 = v42;
  if ( v42 >= 0 )
  {
    v75 = 0LL;
    v44 = *v36;
    v75 = 0LL;
    v45 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v44 + 80))(v36, &v75);
    v11 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v45,
        (int)v67);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v75);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v76);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v74);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
      v82 = 0;
      CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
    }
    else
    {
      *(_QWORD *)v77 = 0LL;
      v46 = *v75;
      *(_QWORD *)v77 = 0LL;
      v47 = (*(__int64 (__fastcall **)(__int64 *, enum D2D1_INTERPOLATION_MODE *))(v46 + 136))(v75, v77);
      v11 = v47;
      if ( v47 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B6,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)v47,
          (int)v67);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v77);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v75);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v76);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v74);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
        v82 = 0;
        CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
      }
      else
      {
        v50 = ID2D1Geometry::CombineWithGeometry(v74, v76, v48, v49, *(struct ID2D1SimplifiedGeometrySink **)v77);
        v11 = v50;
        if ( v50 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BA,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v50,
            v68);
          wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v77);
          wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v75);
          wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v76);
          wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v74);
          wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
          wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
          v82 = 0;
          CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
        }
        else
        {
          v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v77 + 72LL))(*(_QWORD *)v77);
          v11 = v51;
          if ( v51 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1BB,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
              (const char *)(unsigned int)v51,
              v68);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v77);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v75);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v76);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v74);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
            v82 = 0;
            CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
          }
          else
          {
            si128.m128i_i64[0] = 0LL;
            si128.m128i_i32[2] = v16.m128_i32[0];
            si128.m128i_i32[3] = v16.m128_i32[0];
            v93 = 0LL;
            *(_QWORD *)v91 = v75;
            *(_DWORD *)&v91[8] = 0;
            *(__m128i *)&v91[12] = _mm_load_si128((const __m128i *)&_xmm);
            *(_QWORD *)&v91[28] = 0LL;
            *(_DWORD *)&v91[36] = 1065353216;
            v92 = 0LL;
            v102[0] = si128;
            v102[1] = *(_OWORD *)v91;
            v102[2] = *(_OWORD *)&v91[16];
            v102[3] = *(unsigned __int64 *)&v91[32];
            v103 = 0LL;
            (*(void (__fastcall **)(ID2D1DeviceContext *, _OWORD *, _QWORD))(*(_QWORD *)v70 + 320LL))(v70, v102, 0LL);
            if ( v72 )
            {
              ID2D1DeviceContext::DrawImage(v70, v72, v52, v53);
              if ( v71 )
              {
                si128 = _mm_load_si128((const __m128i *)&_xmm);
                v95 = (float)v87[0];
                v96 = (float)((float)v87[1] - v35) + (float)(v13 + v13);
                (*(void (__fastcall **)(ID2D1DeviceContext *, __m128i *))(*(_QWORD *)v70 + 240LL))(v70, &si128);
                ID2D1DeviceContext::DrawImage(v70, v71, v54, v55);
                si128 = _mm_load_si128((const __m128i *)&_xmm);
                v95 = (float)v87[0];
                v96 = (float)v87[1];
                (*(void (__fastcall **)(ID2D1DeviceContext *, __m128i *))(*(_QWORD *)v70 + 240LL))(v70, &si128);
              }
            }
            if ( *(float *)(a3 + 12) > 0.0 )
            {
              *(_QWORD *)v85 = 0LL;
              v65 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int64, _QWORD, enum D2D1_COMPOSITE_MODE *))(*(_QWORD *)v70 + 64LL))(
                      v70,
                      a3,
                      0LL,
                      v85);
              v11 = v65;
              if ( v65 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1D8,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                  (const char *)(unsigned int)v65,
                  v68);
                if ( *(_QWORD *)v85 )
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v85 + 16LL))(*(_QWORD *)v85);
                if ( *(_QWORD *)v77 )
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v77 + 16LL))(*(_QWORD *)v77);
                if ( v75 )
                  (*(void (__fastcall **)(__int64 *))(*v75 + 16))(v75);
                if ( v76 )
                  (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v76 + 16LL))(v76);
                if ( v74 )
                  (*(void (__fastcall **)(ID2D1Geometry *))(*(_QWORD *)v74 + 16LL))(v74);
                if ( v71 )
                  (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v71 + 16LL))(v71);
                if ( v72 )
                  (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v72 + 16LL))(v72);
                v82 = 0;
                CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
                if ( v70 )
                  (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v70 + 16LL))(v70);
                if ( v84 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
                if ( v78 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
                return v11;
              }
              (*(void (__fastcall **)(ID2D1DeviceContext *, float *, _QWORD))(*(_QWORD *)v70 + 152LL))(
                v70,
                &v97,
                *(_QWORD *)v85);
              if ( *(_QWORD *)v85 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v85 + 16LL))(*(_QWORD *)v85);
            }
            (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v70 + 328LL))(v70);
            v82 = 0;
            CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
            v89 = 0LL;
            v56 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v89);
            v58 = (**v57)(v57, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, v56);
            v11 = v58;
            if ( v58 >= 0 )
            {
              v59 = v89;
              v89 = 0LL;
              *a6 = v59;
              if ( *(_QWORD *)v77 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v77 + 16LL))(*(_QWORD *)v77);
              if ( v75 )
                (*(void (__fastcall **)(__int64 *))(*v75 + 16))(v75);
              if ( v76 )
                (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v76 + 16LL))(v76);
              if ( v74 )
                (*(void (__fastcall **)(ID2D1Geometry *))(*(_QWORD *)v74 + 16LL))(v74);
              if ( v71 )
                (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v71 + 16LL))(v71);
              if ( v72 )
                (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v72 + 16LL))(v72);
              if ( v82 )
              {
                v82 = 0;
                CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
              }
              if ( v70 )
                (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v70 + 16LL))(v70);
              if ( v84 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
              if ( v78 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
              return 0LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E2,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
              (const char *)(unsigned int)v58,
              v68);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v89);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(v77);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v75);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v76);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v74);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v71);
            wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v72);
            if ( v82 )
            {
              v82 = 0;
              CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
            }
          }
        }
      }
    }
    goto LABEL_134;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B0,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v42,
    (int)v67);
  if ( v76 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v76 + 16LL))(v76);
  if ( v74 )
    (*(void (__fastcall **)(ID2D1Geometry *))(*(_QWORD *)v74 + 16LL))(v74);
  if ( v71 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v71 + 16LL))(v71);
  if ( v72 )
    (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)v72 + 16LL))(v72);
  v82 = 0;
  CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_2_::_lambda_1_::operator()(v81);
  if ( v70 )
    (*(void (__fastcall **)(ID2D1DeviceContext *))(*(_QWORD *)v70 + 16LL))(v70);
  if ( v84 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
  if ( v78 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
  return v43;
}
