/*
 * XREFs of ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18013A09C
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180045210 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResul.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector3@@@Z @ 0x18010B314 (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector2@@@Z @ 0x1801D8074 (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector2@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CNaturalAnimation::PushValueToStack(__int64 a1, float *a2, CExpressionValueStack *a3, const char *a4)
{
  int v4; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 152);
  switch ( v4 )
  {
    case 18:
      CExpressionValueStack::PushConstant(a3, *a2);
      break;
    case 52:
      CExpressionValueStack::PushConstant(a3, (const struct D2DVector3 *)a2, (__int64)a3, a4);
      break;
    case 35:
      CExpressionValueStack::PushConstant(a3, (const struct D2DVector2 *)a2);
      break;
    default:
      ModuleFailFastForHRESULT(-2147467259, retaddr);
  }
}
