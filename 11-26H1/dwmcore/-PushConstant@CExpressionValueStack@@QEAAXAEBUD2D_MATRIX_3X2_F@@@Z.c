/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180109910
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ @ 0x18010B120 (-PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ.c)
 */

void __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2D_MATRIX_3X2_F *a2)
{
  struct CExpressionValue *v3; // rbx

  v3 = CExpressionValueStack::PushStackValue(this);
  CExpressionValue::DestroyCurrent(v3);
  *((_DWORD *)v3 + 16) = 104;
  *(struct D2D_MATRIX_3X2_F *)v3 = *a2;
}
