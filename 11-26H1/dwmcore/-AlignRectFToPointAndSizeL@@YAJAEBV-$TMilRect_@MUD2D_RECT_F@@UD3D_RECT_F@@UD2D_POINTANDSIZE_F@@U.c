/*
 * XREFs of ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x18005C0B4
 * Callers:
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005C350 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800C8498 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180124D00 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x1801E4148 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B3C0 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x18005C1C0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall AlignRectFToPointAndSizeL(float *a1, _DWORD *a2)
{
  unsigned int v3; // ebp
  float *v4; // rcx
  float v5; // xmm6_4
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx

  v3 = 0;
  if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(a1)
    && *v4 >= -2147483600.0
    && *v4 <= 2147483600.0
    && (v5 = v4[1], v5 >= -2147483600.0)
    && v5 <= 2147483600.0
    && v4[2] <= 2147483600.0
    && v4[3] <= 2147483600.0 )
  {
    v6 = PixelAlign(v4, 0LL);
    *a2 = v6;
    v7 = v6;
    v9 = PixelAlign(v8, 0LL);
    a2[1] = v9;
    a2[2] = PixelAlign(v10, 1LL) - v7;
    a2[3] = PixelAlign(v11, 1LL) - v9;
  }
  else
  {
    v3 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304438, 0x21u, 0LL);
  }
  return v3;
}
