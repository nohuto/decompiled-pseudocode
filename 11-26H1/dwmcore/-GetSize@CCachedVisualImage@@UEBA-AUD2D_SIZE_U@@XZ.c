/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18018A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CCachedVisualImage::GetSize(__m128 *this, struct D2D_SIZE_U a2, double a3)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  struct D2D_SIZE_U result; // rax
  __m128 v8; // xmm0
  __int64 v9; // rax
  float v10; // [rsp+20h] [rbp-28h]
  int v11[8]; // [rsp+28h] [rbp-20h] BYREF

  **(_QWORD **)&a2 = 0LL;
  if ( this[95].m128_i8[1] )
  {
    result = a2;
    **(_QWORD **)&a2 = this[94].m128_u64[1];
  }
  else
  {
    if ( this[95].m128_i32[1] != 1 )
    {
      v4 = this[2].m128_f32[0];
      v5 = this[2].m128_f32[1];
      if ( v4 == 0.0 && v5 == 0.0 )
      {
        v8 = this[1];
        v4 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0] - v8.m128_f32[0];
        v5 = _mm_shuffle_ps(v8, v8, 255).m128_f32[0] - _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
      }
      v6 = v4 + 6291456.25;
      *(_DWORD *)a2.width = (int)(LODWORD(v6) << 10) >> 11;
      v10 = v5 + 6291456.25;
      *(_DWORD *)(*(_QWORD *)&a2 + 4LL) = (int)(LODWORD(v10) << 10) >> 11;
      return a2;
    }
    if ( !this[5].m128_u64[0] )
      return a2;
    v9 = (*(__int64 (__fastcall **)(__m128 *))(this[-5].m128_u64[0] + 208))(this - 5);
    PixelAlign(v11, (unsigned int *)(v9 + 80), a3);
    *(_DWORD *)a2.width = v11[2] - v11[0];
    *(_DWORD *)(*(_QWORD *)&a2 + 4LL) = v11[3] - v11[1];
    return a2;
  }
  return result;
}
