/*
 * XREFs of ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x1802936C4
 * Callers:
 *     ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802125F0 (-Vector4Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector2 *a2,
        const struct D2DMatrix *a3)
{
  struct D2DVector4 *result; // rax

  result = a1;
  *(float *)a1 = (float)((float)(*((float *)a3 + 4) * *((float *)a2 + 1)) + (float)(*(float *)a2 * *(float *)a3))
               + *((float *)a3 + 12);
  *((float *)a1 + 1) = (float)((float)(*((float *)a3 + 1) * *(float *)a2)
                             + (float)(*((float *)a3 + 5) * *((float *)a2 + 1)))
                     + *((float *)a3 + 13);
  *((float *)a1 + 2) = (float)((float)(*((float *)a3 + 2) * *(float *)a2)
                             + (float)(*((float *)a3 + 6) * *((float *)a2 + 1)))
                     + *((float *)a3 + 14);
  *((float *)a1 + 3) = (float)((float)(*((float *)a3 + 3) * *(float *)a2)
                             + (float)(*((float *)a3 + 7) * *((float *)a2 + 1)))
                     + *((float *)a3 + 15);
  return result;
}
