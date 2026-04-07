/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001FE70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180020130 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x180020500 (-AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTA.c)
 *     floor @ 0x18009B6B8 (floor.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, struct AtlasedRects *a2)
{
  int v2; // ebp
  int appended; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __m128i *v7; // rax
  __m128i v8; // xmm2
  float v9; // xmm10_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  unsigned __int64 v12; // xmm0_8
  float v13; // xmm8_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm11_4
  float v17; // xmm9_4
  float v18; // xmm11_4
  double v19; // xmm0_8
  int v20; // ecx
  float v21; // xmm7_4
  __m128i v22; // xmm6
  float v23; // xmm6_4
  __int64 i; // rax
  char v25; // al
  int v26; // eax
  _DWORD v28[4]; // [rsp+30h] [rbp-88h] BYREF
  float v29[28]; // [rsp+40h] [rbp-78h] BYREF

  v2 = (int)a2;
  appended = CAtlasedImage::AppendAtlas(this, a2);
  v5 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, appended, 0x219u, 0LL);
    return v5;
  }
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
  {
    v7 = (__m128i *)*((_QWORD *)this + 9);
    v8 = 0LL;
    v9 = (float)*((int *)this + 4);
    if ( v7 )
      v8 = v7[4];
    v10 = (float)*(int *)(v6 + 24);
    v11 = (float)*(int *)(v6 + 28);
    if ( v10 > 0.0 && v11 > 0.0 )
    {
      v12 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v13 = (float)(int)v12 + (float)*((int *)this + 5);
      v14 = fmaxf((float)*((int *)this + 6) - (float)(v8.m128i_i32[0] + v8.m128i_i32[1]), 0.0);
      v15 = fmaxf((float)*((int *)this + 7) - (float)((int)v12 + HIDWORD(v12)), 0.0);
      v16 = fminf(1.0, fminf(v14 / v10, v15 / v11));
      v17 = v16 * v11;
      v18 = v16 * v10;
      v19 = floor((float)((float)(v14 - v18) * 0.5) + 0.5);
      v20 = *((_DWORD *)this + 34);
      v21 = (float)(int)v19 + (float)((float)v8.m128i_i32[0] + v9);
      if ( v20 )
      {
        if ( v20 == 2 )
        {
          v23 = (float)(v15 + v13) - (float)((float)*((int *)this + 35) + v17);
          goto LABEL_11;
        }
        v22 = _mm_cvtsi32_si128((int)floor((float)((float)(v15 - v17) * 0.5) + 0.5));
      }
      else
      {
        v22 = _mm_cvtsi32_si128(*((_DWORD *)this + 35));
      }
      v23 = _mm_cvtepi32_ps(v22).m128_f32[0] + v13;
LABEL_11:
      for ( i = 0LL; i < 4; ++i )
        v29[i] = (float)*(int *)(v6 + 4 * i + 80);
      v25 = *((_BYTE *)this + 144);
      *(float *)v28 = v21;
      *(float *)&v28[1] = v23;
      *(float *)&v28[2] = v21 + v18;
      *(float *)&v28[3] = v23 + v17;
      v26 = CAtlasedImage::AppendAtlasRect((_DWORD)this, v2, (unsigned int)v29, (unsigned int)v28, v25);
      v5 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x25Cu, 0LL);
    }
  }
  return v5;
}
