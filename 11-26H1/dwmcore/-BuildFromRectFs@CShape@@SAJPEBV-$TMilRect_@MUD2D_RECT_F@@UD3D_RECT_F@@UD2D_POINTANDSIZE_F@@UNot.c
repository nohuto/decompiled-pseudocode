/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18022864C
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18009DFF0 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRe.c)
 *     ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800AF6A4 (-IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800C8C10 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800E9C24 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18016E8B0 (-BuildFromRectFs@CRectanglesShape@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801744A0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(struct D2D_RECT_F *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int i; // r9d
  int v7; // r9d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-88h]
  int v13[4]; // [rsp+30h] [rbp-78h] BYREF
  struct tagRECT v14[4]; // [rsp+40h] [rbp-68h] BYREF

  v3 = 0;
  for ( i = 0; !i; i = v7 + 1 )
  {
    if ( !IsPixelAligned(a1) )
    {
      v8 = CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
      v9 = v8;
      if ( v8 )
      {
        v8[1] = 0LL;
        *v8 = &CRectanglesShape::`vftable';
        v8[2] = v8 + 5;
        v8[3] = v8 + 5;
        v8[4] = v8 + 7;
        v8[7] = 0LL;
        CRectanglesShape::BuildFromRectFs(v8, a1, 1u);
LABEL_10:
        *a3 = v9;
        goto LABEL_13;
      }
      v12 = 82;
      goto LABEL_12;
    }
  }
  `vector constructor iterator'(
    (char *)v14,
    16LL,
    4LL,
    (void (__fastcall *)(char *))TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>);
  v14[0] = *(struct tagRECT *)CMilRectLFromD2D_RECT_F(v13, (__int64)a1);
  v10 = MIDL_user_allocate(0x60uLL);
  v9 = v10;
  if ( v10 )
  {
    v10[1] = 0LL;
    *v10 = &CRegionShape::`vftable';
    v10[2] = v10 + 3;
    *((_DWORD *)v10 + 6) = 0;
    v10[11] = 0LL;
    CRegionShape::BuildFromRects((__int64)v10, v14, 1u);
    goto LABEL_10;
  }
  v12 = 74;
LABEL_12:
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v12, 0LL);
LABEL_13:
  operator delete(0LL);
  return v3;
}
