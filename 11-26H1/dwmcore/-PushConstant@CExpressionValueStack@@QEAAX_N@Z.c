/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAX_N@Z @ 0x18010B024
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ @ 0x18010B120 (-PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ.c)
 */

void __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, char a2)
{
  struct CExpressionValue *v3; // rbx

  v3 = CExpressionValueStack::PushStackValue(this);
  CExpressionValue::DestroyCurrent(v3);
  *((_DWORD *)v3 + 16) = 17;
  *(_BYTE *)v3 = a2;
}
