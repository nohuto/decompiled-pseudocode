/*
 * XREFs of ?GetBounds@CDelegatedInkCanvas@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18026CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CDelegatedInkCanvas::GetBounds(__int64 a1, int *a2, __int64 a3)
{
  int v3; // xmm1_4
  __int32 v4; // xmm2_4
  int v5; // xmm0_4
  _OWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  *(_OWORD *)a3 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( *(_QWORD *)(a1 + 192) )
  {
    v3 = *a2;
    COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(*a2 & v4) < 0.0000011920929 && COERCE_FLOAT(a2[1] & v4) < 0.0000011920929 )
    {
      if ( IsEmpty((const struct D2D_RECT_F *)(a1 + 72)) )
      {
        *(_QWORD *)v7 = v8;
        *(_DWORD *)(v7 + 8) = 1065353216;
        *(_DWORD *)(v7 + 12) = 1065353216;
      }
      else
      {
        *(_OWORD *)v7 = *v6;
      }
    }
    else
    {
      v5 = a2[1];
      *(_QWORD *)a3 = 0LL;
      *(_DWORD *)(a3 + 8) = v3;
      *(_DWORD *)(a3 + 12) = v5;
    }
  }
  return 0LL;
}
