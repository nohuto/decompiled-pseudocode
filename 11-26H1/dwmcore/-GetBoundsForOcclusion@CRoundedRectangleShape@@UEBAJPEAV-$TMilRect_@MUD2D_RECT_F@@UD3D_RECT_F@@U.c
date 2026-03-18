/*
 * XREFs of ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800531B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x180053380 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetBoundsForOcclusion(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  const struct D2D_VECTOR_2F *v6; // rcx
  __int64 v7; // rax
  float v8; // xmm0_4
  __int64 result; // rax
  const struct D2D_VECTOR_2F *v10; // rdx
  const struct D2D_VECTOR_2F *v11; // rdx
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14[6]; // [rsp+20h] [rbp-18h]

  v2 = a1[2];
  if ( *(_BYTE *)(v2 + 68) )
  {
    *(_QWORD *)v14 = *(_QWORD *)(v2 + 16);
    v14[2] = v14[0] + *(float *)(v2 + 24);
    v14[3] = v14[1] + *(float *)(v2 + 28);
  }
  else
  {
    *(_OWORD *)v14 = *(_OWORD *)(v2 + 16);
  }
  *(_OWORD *)a2 = *(_OWORD *)v14;
  v5 = a1[2];
  v6 = (const struct D2D_VECTOR_2F *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 68) )
  {
    if ( !CRoundedRectangleGeometryData::IsRoundedCorner(v6) )
      return 0LL;
  }
  else if ( (v6->x <= 0.0 || *(float *)(v5 + 36) <= 0.0)
         && !CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v5 + 40))
         && !CRoundedRectangleGeometryData::IsRoundedCorner(v10 + 6)
         && !CRoundedRectangleGeometryData::IsRoundedCorner(v11 + 7) )
  {
    return 0LL;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1) )
    return 0LL;
  v7 = a1[2];
  v8 = *(float *)(v7 + 36);
  if ( !*(_BYTE *)(v7 + 68) )
  {
    *(float *)(a2 + 4) = fmaxf(v8, *(float *)(v7 + 44)) + *(float *)(a2 + 4);
    *(float *)(a2 + 12) = *(float *)(a2 + 12) - fmaxf(*(float *)(v7 + 60), *(float *)(v7 + 52));
    return 0LL;
  }
  v12 = *(float *)(a2 + 12);
  *(float *)(a2 + 4) = v8 + *(float *)(a2 + 4);
  v13 = v12 - *(float *)(v7 + 36);
  result = 0LL;
  *(float *)(a2 + 12) = v13;
  return result;
}
