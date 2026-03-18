/*
 * XREFs of ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801E483C
 * Callers:
 *     ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x180212048 (-Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18027B804 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     _CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator() @ 0x18028E994 (_CVector3ForceEvaluator--ChangeBasis_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3TransformNormal(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  struct D2DVector3 *result; // rax
  float v4; // xmm2_4
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm2_4

  result = a1;
  v4 = *((float *)a2 + 1);
  v5 = (float)((float)(v4 * *((float *)a3 + 5)) + (float)(*(float *)a2 * *((float *)a3 + 1)))
     + (float)(*((float *)a2 + 2) * *((float *)a3 + 9));
  v6 = *((float *)a2 + 2);
  v7 = (float)((float)(v4 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
     + (float)(v6 * *((float *)a3 + 8));
  v8 = (float)((float)(v4 * *((float *)a3 + 6)) + (float)(*(float *)a2 * *((float *)a3 + 2)))
     + (float)(v6 * *((float *)a3 + 10));
  *(float *)a1 = v7;
  *((float *)a1 + 1) = v5;
  *((float *)a1 + 2) = v8;
  return result;
}
