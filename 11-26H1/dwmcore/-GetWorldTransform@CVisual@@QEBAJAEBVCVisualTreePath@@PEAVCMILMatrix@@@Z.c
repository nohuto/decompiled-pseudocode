/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@PEAVCMILMatrix@@@Z @ 0x180260BE8
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800900E0 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x180090160 (--0-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?clear_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800903C0 (-clear_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePat.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(CVisual *this, __int128 **a2, __m128i *a3)
{
  const struct CVisualTree *v6; // r14
  __int128 *i; // rax
  int WorldTransform; // eax
  unsigned int v9; // ebx
  const struct CVisualTree *v10; // rdx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __m128i v14; // xmm1
  int v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i si128; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v20; // [rsp+40h] [rbp-C0h]
  __m128i v21; // [rsp+50h] [rbp-B0h]
  __m128i v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+70h] [rbp-90h]
  _OWORD v24[4]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v27; // [rsp+D8h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v23 = 10666;
  v25 = 10666;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = _mm_load_si128((const __m128i *)&_xmm);
  v22 = _mm_load_si128((const __m128i *)&_xmm);
  v24[0] = si128;
  v24[1] = v20;
  v24[2] = v21;
  v24[3] = v22;
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(
    &v26,
    a2);
  v6 = (const struct CVisualTree *)*((_QWORD *)*a2 + 1);
  for ( i = a2[1]; ; i = v27 )
  {
    v10 = (const struct CVisualTree *)*((_QWORD *)i - 1);
    if ( v10 == v6 )
      break;
    WorldTransform = CVisual::GetWorldTransform(this, v10, (struct CMILMatrix *)v24, 0LL, 0LL);
    v9 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v12 = (unsigned int)WorldTransform;
      v13 = 1655LL;
      goto LABEL_9;
    }
    CMILMatrix::Multiply((CMILMatrix *)&si128, (const struct CMILMatrix *)v24);
    this = (CVisual *)*((_QWORD *)v27 - 2);
    if ( (__int128 *)((char *)v27 - v26) == (__int128 *)16 )
    {
      v9 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\visualtreepath.cpp",
        (const char *)0x8000FFFFLL);
      v12 = 2147549183LL;
      v13 = 1662LL;
      goto LABEL_9;
    }
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::clear_region(
      &v26,
      ((__int64)v27 - v26 - 16) >> 4,
      1LL);
  }
  v11 = CVisual::GetWorldTransform(this, v10, (struct CMILMatrix *)v24, 0LL, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 1672LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
      (const char *)v12);
    goto LABEL_12;
  }
  CMILMatrix::Multiply((CMILMatrix *)&si128, (const struct CMILMatrix *)v24);
  v9 = 0;
  v14 = v20;
  v15 = v23;
  *a3 = si128;
  v16 = v21;
  a3[1] = v14;
  v17 = v22;
  a3[2] = v16;
  a3[3] = v17;
  a3[4].m128i_i32[0] = v15;
LABEL_12:
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(&v26);
  return v9;
}
