/*
 * XREFs of ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x18024F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B38B0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1M@Z @ 0x1802037D0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CExternalLayer::RenderNoOpLayer(CExternalLayer *this, const void **a2)
{
  __m128i v3; // xmm0
  int v5; // eax
  float v6; // xmm1_4
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  _OWORD v17[4]; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+27h] BYREF
  float v20; // [rsp+88h] [rbp+2Fh]
  unsigned __int32 v21; // [rsp+8Ch] [rbp+33h]

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v5 = *((_DWORD *)this + 28);
  v6 = (float)*((int *)this + 6);
  v19 = 0LL;
  v18 = v5;
  v20 = v6;
  v7 = *((_OWORD *)this + 3);
  v21 = _mm_cvtepi32_ps(v3).m128_u32[0];
  v8 = *((_OWORD *)this + 4);
  v17[0] = v7;
  v9 = *((_OWORD *)this + 5);
  v17[1] = v8;
  v10 = *((_OWORD *)this + 6);
  v17[2] = v9;
  v17[3] = v10;
  if ( CMILMatrix::IsIdentity<1>((__int64)v17) || CMILMatrix::Invert((CMILMatrix *)v17, v11, v12) )
  {
    v14 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v17, 0, 1);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x120u, 0LL);
    }
    else
    {
      v15 = CDrawingContext::DrawBitmapRealization(
              (__int64)a2,
              (*((_QWORD *)this + 1) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 1) >> 64),
              (float *)&v19,
              (float *)&v19,
              SLODWORD(FLOAT_1_0));
      v13 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x125u, 0LL);
      CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
    }
  }
  else
  {
    v13 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x11Eu, 0LL);
  }
  return v13;
}
