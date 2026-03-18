/*
 * XREFs of ?MoveOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180022200
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800227A0 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x1801A4850 (-Merge@-$CRectangleCollection@$03@@QEAA_NII@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleCollection<4>::MoveOverhead(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 result; // rax
  unsigned int v10; // xmm1_4
  unsigned int v11; // edx
  __int64 v12; // r9
  unsigned int v13; // xmm1_4
  unsigned int v14; // xmm0_4
  unsigned int v15; // eax
  unsigned int i; // r9d
  unsigned int v17; // ecx
  unsigned int v18; // xmm1_4

  v5 = a3 - 1;
  if ( a2 )
  {
    v6 = a2;
    v7 = (a2 * (a2 - 1)) >> 1;
    v8 = ((a3 * v5) >> 1) - v7;
    do
    {
      result = (unsigned int)(v8 + v7);
      v10 = a1[2 * result + 22];
      a1[2 * v7 + 21] = a1[2 * result + 21];
      a1[2 * v7 + 22] = v10;
      v7 = (unsigned int)(v7 + 1);
      --v6;
    }
    while ( v6 );
  }
  v11 = a2 + 1;
  if ( a2 + 1 < a3 )
  {
    v12 = v11 + ((a3 * v5) >> 1);
    do
    {
      v13 = a1[2 * v12 + 22];
      v14 = a1[2 * v12 + 21];
      v12 = (unsigned int)(v12 + 1);
      v15 = v11 * (v11 - 1);
      ++v11;
      result = a2 + (v15 >> 1);
      a1[2 * result + 21] = v14;
      a1[2 * result + 22] = v13;
    }
    while ( v11 < a3 );
  }
  for ( i = a3 + 1; i < *a1; a1[2 * result + 22] = v18 )
  {
    v17 = i * (i - 1);
    ++i;
    v17 >>= 1;
    v18 = a1[2 * v17 + 22 + 2 * a3];
    result = v17 + a2;
    a1[2 * result + 21] = a1[2 * v17 + 21 + 2 * a3];
  }
  return result;
}
