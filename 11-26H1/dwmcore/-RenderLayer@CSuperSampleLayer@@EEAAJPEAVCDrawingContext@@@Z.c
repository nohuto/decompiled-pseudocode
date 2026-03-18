/*
 * XREFs of ?RenderLayer@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180250800
 * Callers:
 *     <none>
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016C2C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1801BCE20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1M@Z @ 0x1802037D0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperSampleLayer::RenderLayer(CSuperSampleLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  float v5; // xmm1_4
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  float v13; // [rsp+38h] [rbp-40h]
  unsigned __int32 v14; // [rsp+3Ch] [rbp-3Ch]
  _DWORD v15[12]; // [rsp+40h] [rbp-38h] BYREF

  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v5 = (float)*((int *)this + 6);
  v12 = 0LL;
  v13 = v5;
  v14 = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( g_LockAndReadLayer )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 112LL))(
      v6,
      ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
  }
  v15[0] = 2;
  v15[1] = 6;
  v7 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v15, 1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x70u, 0LL);
  }
  else
  {
    v9 = CDrawingContext::PushTransformInternal(
           (const void **)a2,
           0LL,
           (const struct CMILMatrix *)&CMILMatrix::Identity,
           0,
           1);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x75u, 0LL);
    }
    else
    {
      v10 = CDrawingContext::DrawBitmapRealization(
              (__int64)a2,
              (*((_QWORD *)this + 1) + 8LL) & -(__int64)(*((_QWORD *)this + 1) != 0LL),
              (float *)&v12,
              (float *)this + 30,
              SLODWORD(FLOAT_1_0));
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x7Bu, 0LL);
      CDrawingContext::PopTransformInternal(a2, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a2, 1);
  }
  return v8;
}
