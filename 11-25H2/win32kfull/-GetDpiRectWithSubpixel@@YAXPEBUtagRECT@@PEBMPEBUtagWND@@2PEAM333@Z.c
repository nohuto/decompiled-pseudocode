/*
 * XREFs of ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401B1704
 * Callers:
 *     DpiRectIntersectsRectWithSubpixel @ 0x1400344D4 (DpiRectIntersectsRectWithSubpixel.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1401B1618 (DpiRectContainsRectWithSubpixel.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400335CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x140065F08 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401B18A0 (ScaleDpiOffsetWithSubpixel.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall GetDpiRectWithSubpixel(
        __m128i *a1,
        const float *a2,
        const struct tagWND *a3,
        const struct tagWND *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  __m128i v8; // xmm1
  LONG v11; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float v17; // xmm1_4
  float *v18; // r10
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  float v22; // xmm2_4
  __int64 v23; // r10
  int v24[4]; // [rsp+20h] [rbp-40h] BYREF
  int v25; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+34h] [rbp-2Ch]
  float v27[6]; // [rsp+38h] [rbp-28h] BYREF

  v8 = *a1;
  v11 = a1->m128i_i32[2];
  v13 = HIDWORD(a1->m128i_i64[1]) - HIDWORD(a1->m128i_i64[0]);
  v14 = _mm_cvtsi128_si32(v8);
  *(__m128i *)v24 = v8;
  v26 = v13;
  v15 = v11 - v14;
  v25 = v15;
  *(_OWORD *)v27 = 0LL;
  if ( a2 )
    *(_OWORD *)v27 = *(_OWORD *)a2;
  if ( a3 && a4 && a3 != a4 )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(a4, v24, (unsigned __int64)v27);
    TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a3);
    if ( TopLevelOrDpiBoundaryWindow )
    {
      v18 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
      if ( v18 )
      {
        v19 = (int)v18[12];
        v20 = -(int)v18[13];
        v24[3] -= (int)v18[13];
        v24[1] += v20;
        v21 = -v19;
        v22 = 1.0 / *v18;
        v24[0] += v21;
        v24[2] += v21;
        ScaleValueWithSubpixel(v24, v27, v22);
        ScaleValueWithSubpixel(&v24[1], &v27[1], 1.0 / *(float *)(v23 + 20));
      }
    }
    ScaleDpiOffsetWithSubpixel(&v25, &v27[2], a3, a4);
    v14 = v24[0];
    v13 = v26;
    v15 = v25;
  }
  v17 = (float)v24[1] + v27[1];
  *a5 = (float)v14 + v27[0];
  *a6 = v17;
  *a7 = (float)((float)v15 + *a5) + v27[2];
  *a8 = (float)((float)v13 + *a6) + v27[3];
}
