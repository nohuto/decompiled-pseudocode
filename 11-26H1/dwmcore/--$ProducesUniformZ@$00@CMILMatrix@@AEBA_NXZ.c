/*
 * XREFs of ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18013F6F0
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800E96D0 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z @ 0x180202B9C (-GetCpuClip@CDrawingContext@@QEBAXPEAVCCpuClip@@@Z.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::ProducesUniformZ<1>(__int64 a1)
{
  char v1; // dl
  char result; // al
  char v3; // r8
  unsigned __int32 v4; // xmm3_4
  char v5; // r8

  v1 = *(_BYTE *)(a1 + 64);
  if ( (char)(16 * v1) >> 6 == 1 )
    return 0;
  if ( (char)(16 * v1) >> 6 < 0 )
    return 1;
  v3 = *(_BYTE *)(a1 + 65);
  if ( (char)(4 * v3) >> 6 == 1 )
    goto LABEL_7;
  v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( (char)(4 * v3) >> 6 < 0 )
  {
LABEL_6:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & v4) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & v4) < 0.000081380211 )
    {
      result = 1;
      *(_BYTE *)(a1 + 64) = (v1 ^ 0xFC) & 0xF3 ^ 0xFC;
      return result;
    }
LABEL_7:
    result = 0;
    *(_BYTE *)(a1 + 64) = (v1 ^ 4) & 0xF3 ^ 4;
    return result;
  }
  v5 = v3 & 0xCF;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v4) * 61440.0)
                                    + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v4) * 61440.0))
                            + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v4))
                    - 1.0) & v4) < 0.000081380211 )
  {
    *(_BYTE *)(a1 + 65) = v5 ^ 0x30;
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 65) = v5 ^ 0x10;
  result = 0;
  *(_BYTE *)(a1 + 64) = (v1 ^ 4) & 0xF3 ^ 4;
  return result;
}
