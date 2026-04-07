/*
 * XREFs of ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800406A8
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18003F644 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180084928 (-EndTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800407B4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINT.c)
 */

__int64 __fastcall CAccent::_UpdateBackgroundGeometry(CAccent *this)
{
  unsigned int v1; // ebx
  int v2; // r8d
  unsigned int v3; // eax
  int v4; // edx
  __int64 v6; // rdx
  __m128i v7; // xmm0
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  __int64 v11; // rdx
  int updated; // eax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  float v15; // [rsp+38h] [rbp-10h]
  float v16; // [rsp+3Ch] [rbp-Ch]

  v1 = 0;
  v2 = *((_DWORD *)this + 137) - *((_DWORD *)this + 135);
  v3 = 0;
  v4 = *((_DWORD *)this + 136) - *((_DWORD *)this + 134);
  v14 = 0LL;
  if ( v4 >= 0 )
    v3 = v4;
  v6 = *((_QWORD *)this + 35);
  v7 = _mm_cvtsi32_si128(v3);
  v8 = 0;
  LODWORD(v9) = _mm_cvtepi32_ps(v7).m128_u32[0];
  if ( v2 >= 0 )
    v8 = v2;
  v15 = v9 + 0.0;
  v16 = (float)v8 + 0.0;
  if ( v6 && (v10 = CAccent::_UpdateSolidFill(this, v6, *((unsigned int *)this + 62), &v14), v1 = v10, v10 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x216u, 0LL);
  }
  else
  {
    v11 = *((_QWORD *)this + 36);
    if ( v11 )
    {
      updated = CAccent::_UpdateSolidFill(this, v11, *((unsigned int *)this + 66), &v14);
      v1 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x21Bu, 0LL);
    }
  }
  return v1;
}
