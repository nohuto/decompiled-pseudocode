/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180011040
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180013208 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 */

bool __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  CDrawingContext *v1; // r8
  int v2; // eax
  _BYTE *v3; // rcx
  char v4; // dl
  char v6; // r9
  unsigned __int32 v7; // xmm3_4
  char v8; // r9

  v1 = this;
  if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 568LL) || CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    return 0;
  v2 = *((_DWORD *)this + 72);
  if ( v2 )
    v3 = (_BYTE *)(*((_QWORD *)this + 35) + 68LL * (unsigned int)(v2 - 1));
  else
    v3 = &CMILMatrix::Identity;
  v4 = v3[64];
  if ( v4 >> 6 == 1 )
  {
LABEL_18:
    if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>() )
      return 0;
    return *((_DWORD *)v1 + 60) != 4
        && (*((_DWORD *)v1 + 161) || !*((_DWORD *)v1 + 112))
        && !*((_QWORD *)v1 + 412)
        && !CDrawingContext::IsHDRTarget(v1);
  }
  if ( v4 >> 6 < 0 )
    return *((_DWORD *)v1 + 60) != 4
        && (*((_DWORD *)v1 + 161) || !*((_DWORD *)v1 + 112))
        && !*((_QWORD *)v1 + 412)
        && !CDrawingContext::IsHDRTarget(v1);
  v6 = v3[65];
  if ( (char)(4 * v6) >> 6 == 1 )
    goto LABEL_17;
  v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( (char)(4 * v6) >> 6 >= 0 )
  {
    v8 = v6 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v3 + 7) & v7) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)v3 + 3) & v7) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)v3 + 15) & v7))
                      - 1.0) & v7) < 0.000081380211 )
    {
      v3[65] = v8 ^ 0x30;
      goto LABEL_16;
    }
    v3[65] = v8 ^ 0x10;
LABEL_17:
    v3[64] = v4 & 0x3F | 0x40;
    goto LABEL_18;
  }
LABEL_16:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 1) - 0.0) & v7) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 4) - 0.0) & v7) >= 0.000081380211 )
  {
    goto LABEL_17;
  }
  v3[64] = v4 | 0xC0;
  return *((_DWORD *)v1 + 60) != 4
      && (*((_DWORD *)v1 + 161) || !*((_DWORD *)v1 + 112))
      && !*((_QWORD *)v1 + 412)
      && !CDrawingContext::IsHDRTarget(v1);
}
