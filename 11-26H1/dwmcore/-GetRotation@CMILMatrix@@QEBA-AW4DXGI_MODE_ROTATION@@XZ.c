/*
 * XREFs of ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180012E70
 * Callers:
 *     ?RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180012E10 (-RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMa.c)
 *     ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x1800DE720 (-FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

__int64 __fastcall CMILMatrix::GetRotation(CMILMatrix *this)
{
  char v1; // dl
  unsigned int v2; // r8d
  unsigned __int32 v3; // xmm5_4
  int v4; // eax
  int v5; // r10d
  int v6; // r9d
  int v7; // edx
  char v9; // r9
  char v10; // r9

  v1 = *((_BYTE *)this + 64);
  v2 = 0;
  v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( v1 >> 6 != 1 )
  {
    if ( v1 >> 6 < 0 )
      goto LABEL_3;
    v9 = *((_BYTE *)this + 65);
    if ( (char)(4 * v9) >> 6 != 1 )
    {
      if ( (char)(4 * v9) >> 6 < 0 )
      {
LABEL_27:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1) - 0.0) & v3) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - 0.0) & v3) < 0.000081380211 )
        {
          *((_BYTE *)this + 64) = v1 | 0xC0;
          goto LABEL_3;
        }
        goto LABEL_28;
      }
      v10 = v9 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & v3) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & v3) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)this + 15) & v3))
                        - 1.0) & v3) < 0.000081380211 )
      {
        *((_BYTE *)this + 65) = v10 ^ 0x30;
        goto LABEL_27;
      }
      *((_BYTE *)this + 65) = v10 ^ 0x10;
    }
LABEL_28:
    *((_BYTE *)this + 64) = v1 & 0x3F | 0x40;
  }
  if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)this) )
    return v2;
LABEL_3:
  v4 = -1;
  if ( COERCE_FLOAT(*(_DWORD *)this & v3) < 0.000081380211 )
  {
    v5 = v2;
  }
  else
  {
    v5 = -1;
    if ( *(float *)this > 0.0 )
      v5 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 1) & v3) < 0.000081380211 )
  {
    v6 = v2;
  }
  else
  {
    v6 = -1;
    if ( *((float *)this + 1) > 0.0 )
      v6 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 4) & v3) < 0.000081380211 )
  {
    v7 = v2;
  }
  else
  {
    v7 = -1;
    if ( *((float *)this + 4) > 0.0 )
      v7 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 5) & v3) < 0.000081380211 )
  {
    v4 = v2;
  }
  else if ( *((float *)this + 5) > 0.0 )
  {
    v4 = 1;
  }
  if ( v5 == 1 )
  {
    if ( !v6 && !v7 && v4 == 1 )
      return 1;
    return v2;
  }
  if ( v5 )
  {
    if ( v5 == -1 && !v6 && !v7 && v4 == -1 )
      return 3;
    return v2;
  }
  if ( v6 == 1 )
  {
    if ( v7 == -1 && !v4 )
      return 2LL;
    return v2;
  }
  if ( v6 != -1 || v7 != 1 )
    return v2;
  if ( !v4 )
    return 4;
  return v2;
}
