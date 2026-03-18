/*
 * XREFs of ?TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1802590E4
 * Callers:
 *     ?CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18024FA50 (-CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x1800CEB44 (-CheckOccludedAndOptimize@@YA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 */

char __fastcall CArrayBasedCoverageSet::TrimCornerRect(__int64 a1, struct D2D_RECT_F *a2, int a3)
{
  unsigned int v3; // esi
  __int64 v6; // rbx
  __int64 v7; // rdx
  const struct D2D_RECT_F *v8; // rcx
  __int64 v9; // r8
  struct D2D_RECT_F v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v6 = 0LL;
  v11 = *a2;
  while ( (unsigned int)v6 < v3 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 48 * v6 + 16) != a3
      && !IsEmpty((const struct D2D_RECT_F *)(*(_QWORD *)a1 + 48 * v6)) )
    {
      if ( *(_DWORD *)(v7 + 16) >= a3 )
      {
        if ( IsEmpty(v8)
          || IsEmpty(&v11)
          || *(float *)(v7 + 8) <= v11.left
          || v11.right <= *(float *)v7
          || *(float *)(v7 + 12) <= v11.top
          || v11.bottom <= *(float *)(v7 + 4) )
        {
          goto LABEL_16;
        }
        if ( *(_QWORD *)(v7 + 24) )
          return 0;
      }
      else if ( *(_QWORD *)(v7 + 24) )
      {
        goto LABEL_16;
      }
      if ( CheckOccludedAndOptimize((__m128i *)&v11, (float *)v7, v9) )
        return 1;
    }
LABEL_16:
    v6 = (unsigned int)(v6 + 1);
  }
  return 0;
}
