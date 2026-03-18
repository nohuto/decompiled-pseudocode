/*
 * XREFs of ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18005E0D0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180016420 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
        CTreeEffectLayer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        const struct D2D_POINT_2F *a6,
        struct CDrawingContext *a7,
        struct CMILMatrix *a8,
        struct D2D_SIZE_F *a9)
{
  char v10; // dl
  CMILMatrix *v11; // r11
  __int64 v12; // rcx
  struct D2D_SIZE_F *v13; // rax
  float v14; // xmm1_4
  CDropShadow *v15; // rcx
  char v16; // dh
  __int16 v17; // edx^2
  CMILMatrix *v18; // r11
  const struct CMILMatrix *v19; // rdx
  _OWORD v20[4]; // [rsp+20h] [rbp-78h] BYREF
  char v21; // [rsp+60h] [rbp-38h]
  char v22; // [rsp+61h] [rbp-37h]
  __int16 v23; // [rsp+62h] [rbp-36h]

  *(_QWORD *)a8 = 1065353216LL;
  *((_QWORD *)a8 + 1) = 0LL;
  *((_DWORD *)a8 + 4) = 0;
  *(_QWORD *)((char *)a8 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a8 + 28) = 0LL;
  *((_DWORD *)a8 + 9) = 0;
  *((_QWORD *)a8 + 5) = 1065353216LL;
  *((_QWORD *)a8 + 6) = 0LL;
  *((_DWORD *)a8 + 14) = 0;
  *((_DWORD *)a8 + 15) = 1065353216;
  *((_BYTE *)a8 + 65) &= 0xE9u;
  *((_BYTE *)a8 + 65) |= 0x29u;
  *((_BYTE *)a8 + 64) = -86;
  CMILMatrix::Scale(a8, 1.0 / a4, 1.0 / a5, 1.0);
  v12 = *((_QWORD *)this + 32);
  if ( *(_BYTE *)(v12 + 696) == v10 )
  {
    CMILMatrix::Translate(v11, a2, a3);
    v13 = a9;
    a9->width = *((float *)this + 51) - *((float *)this + 49);
    v14 = *((float *)this + 52) - *((float *)this + 50);
  }
  else
  {
    if ( *(_BYTE *)(v12 + 697) == v10 )
    {
      CMILMatrix::Translate(v11, *((float *)this + 57) - a6->x, *((float *)this + 58) - a6->y);
    }
    else
    {
      v15 = *(CDropShadow **)(v12 + 672);
      if ( !v15 || CDropShadow::GetMaskForLayerVisualNoRef(v15) )
      {
        CMILMatrix::Translate(v11, (float)*((int *)this + 4), (float)*((int *)this + 5));
        v19 = (CTreeEffectLayer *)((char *)this + 128);
      }
      else
      {
        v23 = v17;
        v20[0] = _mm_load_si128((const __m128i *)&_xmm);
        v20[1] = _mm_load_si128((const __m128i *)&_xmm);
        v22 = v16 & 0xC0 | 0x29;
        v20[2] = _mm_load_si128((const __m128i *)&_xmm);
        v20[3] = _mm_load_si128((const __m128i *)&_xmm);
        v21 = -86;
        CMatrixStack::Top((struct CDrawingContext *)((char *)a7 + 280), (struct CMILMatrix *)v20);
        v19 = (const struct CMILMatrix *)v20;
      }
      CMILMatrix::Multiply(v18, v19);
    }
    v13 = a9;
    a9->width = *((float *)this + 59) * *((float *)this + 70);
    v14 = *((float *)this + 60) * *((float *)this + 70);
  }
  v13->height = v14;
}
