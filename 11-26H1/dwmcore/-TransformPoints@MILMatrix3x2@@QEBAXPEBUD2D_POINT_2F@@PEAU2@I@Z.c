/*
 * XREFs of ?TransformPoints@MILMatrix3x2@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18019A654
 * Callers:
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B4390 (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::TransformPoints(
        MILMatrix3x2 *this,
        const struct D2D_POINT_2F *a2,
        struct D2D_POINT_2F *a3,
        int a4)
{
  signed __int64 v4; // rdx
  float v5; // xmm3_4
  float v6; // xmm2_4

  v4 = (char *)a2 - (char *)a3;
  do
  {
    v5 = *(float *)((char *)&a3->x + v4);
    v6 = *(float *)((char *)&a3->y + v4);
    a3->x = (float)((float)(v6 * *((float *)this + 2)) + (float)(v5 * *(float *)this)) + *((float *)this + 4);
    a3->y = (float)((float)(v5 * *((float *)this + 1)) + (float)(v6 * *((float *)this + 3))) + *((float *)this + 5);
    ++a3;
    --a4;
  }
  while ( a4 );
}
