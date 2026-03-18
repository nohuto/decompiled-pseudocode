/*
 * XREFs of ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x1801A4850
 * Callers:
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x180252FCC (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 * Callees:
 *     ?CalcOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180021EB0 (-CalcOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MoveOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180022200 (-MoveOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 */

char __fastcall CRectangleCollection<4>::Merge(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r15
  unsigned int v7; // ebx
  __int64 v8; // r10
  unsigned int v9; // ebp
  unsigned int v10; // eax
  float v12[10]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 4LL * a3;
  *(_OWORD *)v12 = *(_OWORD *)&a1[4 * a2 + 1];
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v12, (float *)&a1[v5 + 1]);
  v7 = 0;
  *(_OWORD *)&a1[2 * v8 + 1] = *(_OWORD *)v12;
  v9 = *a1;
  if ( a3 < *a1 )
    v9 = a3;
  if ( a2 )
  {
    do
      CRectangleCollection<4>::CalcOverhead((__int64)a1, v7++, a2);
    while ( v7 < a2 );
  }
  while ( ++v7 < v9 )
    CRectangleCollection<4>::CalcOverhead((__int64)a1, a2, v7);
  while ( ++v7 < *a1 )
    CRectangleCollection<4>::CalcOverhead((__int64)a1, a2, v7);
  v10 = *a1 - 1;
  *a1 = v10;
  if ( a3 >= v10 )
    return 0;
  *(_OWORD *)&a1[v5 + 1] = *(_OWORD *)&a1[4 * v10 + 1];
  CRectangleCollection<4>::MoveOverhead(a1, a3, *a1);
  return 1;
}
