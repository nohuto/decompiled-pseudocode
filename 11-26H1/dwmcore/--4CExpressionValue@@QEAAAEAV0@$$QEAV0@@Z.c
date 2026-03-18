/*
 * XREFs of ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x18021B54C
 * Callers:
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXAEBTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x18027B38C (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXAEBTInternalValue@1@PEAVCExpressionVal.c)
 *     ??$move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x180288074 (--$move@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEAVCExpressionVa.c)
 *     ??$move_backward@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x18028811C (--$move_backward@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEAVCExp.c)
 * Callees:
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180049AB0 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

CExpressionValue *__fastcall CExpressionValue::operator=(CExpressionValue *a1, int *a2, __int64 a3, const char *a4)
{
  int v6; // edx

  v6 = a2[16];
  if ( v6 == 11 )
  {
    CExpressionValue::DestroyCurrent(a1);
    *((_DWORD *)a1 + 16) = 11;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    a2[16] = 0;
  }
  else
  {
    CExpressionValue::SetValue((int **)a1, v6, a2, a4);
  }
  return a1;
}
