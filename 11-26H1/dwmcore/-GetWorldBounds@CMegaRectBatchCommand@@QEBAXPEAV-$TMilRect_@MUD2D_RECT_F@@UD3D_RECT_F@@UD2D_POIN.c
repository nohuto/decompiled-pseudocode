/*
 * XREFs of ?GetWorldBounds@CMegaRectBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180182C20
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMegaRectBatchCommand::GetWorldBounds(__int64 a1, __m128 *a2)
{
  int *v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax
  __m128i v5; // [rsp+0h] [rbp-18h]

  v2 = *(int **)(a1 + 96);
  v3 = *v2;
  if ( (_DWORD)v3 )
  {
    v5.m128i_i32[0] = v2[1];
    v5.m128i_i32[2] = v2[2];
    result = (unsigned int)v2[3];
    v5.m128i_i32[3] = v2[2 * v3 + 1];
    v5.m128i_i32[1] = v2[3];
    *a2 = _mm_mul_ps(_mm_cvtepi32_ps(v5), (__m128)_xmm);
  }
  else
  {
    result = 0LL;
    a2->m128_u64[1] = 0LL;
    a2->m128_u64[0] = 0LL;
  }
  return result;
}
