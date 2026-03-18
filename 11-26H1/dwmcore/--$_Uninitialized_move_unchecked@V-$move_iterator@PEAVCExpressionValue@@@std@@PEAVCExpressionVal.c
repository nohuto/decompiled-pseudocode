/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCExpressionValue@@@std@@PEAVCExpressionValue@@@std@@YAPEAVCExpressionValue@@V?$move_iterator@PEAVCExpressionValue@@@0@V20@PEAV1@@Z @ 0x180288028
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVCExpressionValue@@@std@@V?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCExpressionValue@@@stdext@@V?$move_iterator@PEAVCExpressionValue@@@0@0V12@@Z @ 0x1802881D0 (--$uninitialized_move@V-$move_iterator@PEAVCExpressionValue@@@std@@V-$checked_array_iterator@PEA.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@$$QEAV0@@Z @ 0x1801DEB80 (--0CExpressionValue@@QEAA@$$QEAV0@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CExpressionValue *>,CExpressionValue *>(
        int *a1,
        int *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rsi

  v4 = a3;
  while ( a1 != a2 )
  {
    CExpressionValue::CExpressionValue(v4, a1, a3, a4);
    v4 += 72LL;
    a1 += 18;
  }
  return v4;
}
