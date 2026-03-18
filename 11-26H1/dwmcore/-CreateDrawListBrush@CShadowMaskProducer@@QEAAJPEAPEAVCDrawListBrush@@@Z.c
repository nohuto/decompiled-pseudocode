/*
 * XREFs of ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802B3054
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D76A8 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180037374 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 */

__int64 __fastcall CShadowMaskProducer::CreateDrawListBrush(CShadowMaskProducer *this, struct CDrawListBrush **a2)
{
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  __int128 v5; // xmm0
  __int64 *v6; // rax
  int v7; // ebx
  __int64 v8; // rax
  __int16 v10; // [rsp+20h] [rbp-60h] BYREF
  char v11; // [rsp+22h] [rbp-5Eh]
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 *v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  char v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *(float *)&v3 = *((float *)this + 22) + 1.0;
  *(float *)&v4 = *((float *)this + 23) + 1.0;
  *(_QWORD *)&v12 = 0x3F8000003F800000LL;
  *((_QWORD *)&v12 + 1) = __PAIR64__(v4, v3);
  v5 = v12;
  *(_QWORD *)&v12 = 0LL;
  v13 = &v12;
  v16 = v5;
  v14 = 0LL;
  v15 = 1;
  v6 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v17, this);
  v10 = SamplerMode::k_ClampClampLinear;
  v11 = 1;
  v7 = CSurfaceDrawListBrush::CreateWithContentRect(v6, &v10, (float *)&v16, (__int64)&v14);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v17);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v13);
  if ( v7 >= 0 )
  {
    v8 = v12;
    v7 = 0;
    *(__m128i *)(v12 + 8) = _mm_load_si128((const __m128i *)&_xmm);
    *(_QWORD *)(v8 + 24) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_N1_0), (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
    *a2 = (struct CDrawListBrush *)v12;
    *(_QWORD *)&v12 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v7);
  }
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>((CSurfaceDrawListBrush **)&v12);
  return (unsigned int)v7;
}
