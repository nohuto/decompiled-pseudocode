/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector3@@@Z @ 0x18010B314
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18013A09C (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ @ 0x18010B120 (-PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ.c)
 */

void __fastcall CExpressionValueStack::PushConstant(
        CExpressionValueStack *this,
        const struct D2DVector3 *a2,
        __int64 a3,
        const char *a4)
{
  struct CExpressionValue *v5; // rbx

  v5 = CExpressionValueStack::PushStackValue(this, (__int64)a2, a3, a4);
  CExpressionValue::DestroyCurrent(v5);
  *((_DWORD *)v5 + 16) = 52;
  *(_QWORD *)v5 = *(_QWORD *)a2;
  *((_DWORD *)v5 + 2) = *((_DWORD *)a2 + 2);
}
