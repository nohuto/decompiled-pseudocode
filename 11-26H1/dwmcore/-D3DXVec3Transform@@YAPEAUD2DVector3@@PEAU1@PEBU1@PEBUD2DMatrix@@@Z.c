/*
 * XREFs of ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18029322C
 * Callers:
 *     ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x180212780 (-Vector3Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3Transform(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  struct D2DVector3 *result; // rax

  result = a1;
  *(float *)a1 = (float)((float)((float)(*((float *)a3 + 4) * *((float *)a2 + 1)) + (float)(*(float *)a2 * *(float *)a3))
                       + (float)(*((float *)a3 + 8) * *((float *)a2 + 2)))
               + *((float *)a3 + 12);
  *((float *)a1 + 1) = (float)((float)((float)(*((float *)a3 + 1) * *(float *)a2)
                                     + (float)(*((float *)a3 + 5) * *((float *)a2 + 1)))
                             + (float)(*((float *)a3 + 9) * *((float *)a2 + 2)))
                     + *((float *)a3 + 13);
  *((float *)a1 + 2) = (float)((float)((float)(*((float *)a3 + 2) * *(float *)a2)
                                     + (float)(*((float *)a3 + 6) * *((float *)a2 + 1)))
                             + (float)(*((float *)a3 + 10) * *((float *)a2 + 2)))
                     + *((float *)a3 + 14);
  return result;
}
