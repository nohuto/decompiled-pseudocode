/*
 * XREFs of ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x18028EA1C
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801AF7C4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     _CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator() @ 0x18028E994 (_CVector3ForceEvaluator--ChangeBasis_--_2_--_lambda_1_--operator().c)
 */

void __fastcall CVector3ForceEvaluator::ChangeBasis(CVector3ForceEvaluator *this, const struct D2DMatrix *a2)
{
  _OWORD *v2; // r12
  __int64 v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (_OWORD *)((char *)this + 204);
  D2DMatrixInverse((CVector3ForceEvaluator *)((char *)this + 204), 0LL, (CVector3ForceEvaluator *)((char *)this + 204));
  v5[0] = (__int64)this;
  v5[1] = (__int64)a2;
  CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator()(
    v5,
    (int *)this + 4,
    (int *)this + 21,
    (int *)this + 38);
  CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator()(
    v5,
    (int *)this + 9,
    (int *)this + 26,
    (int *)this + 43);
  CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator()(
    v5,
    (int *)this + 5,
    (int *)this + 22,
    (int *)this + 39);
  CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator()(
    v5,
    (int *)this + 10,
    (int *)this + 27,
    (int *)this + 44);
  CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator()(
    v5,
    (int *)this + 3,
    (int *)this + 20,
    (int *)this + 37);
  CVector3ForceEvaluator::ChangeBasis_::_2_::_lambda_1_::operator()(
    v5,
    (int *)this + 8,
    (int *)this + 25,
    (int *)this + 42);
  *v2 = *(_OWORD *)a2;
  v2[1] = *((_OWORD *)a2 + 1);
  v2[2] = *((_OWORD *)a2 + 2);
  v2[3] = *((_OWORD *)a2 + 3);
}
