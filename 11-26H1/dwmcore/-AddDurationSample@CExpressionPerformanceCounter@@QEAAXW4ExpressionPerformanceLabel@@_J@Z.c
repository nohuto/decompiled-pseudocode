/*
 * XREFs of ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x180175B10
 * Callers:
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18004BE80 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180080090 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionPerformanceCounter::AddDurationSample(__int64 a1, signed int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned int)a2 < 6 )
  {
    result = a2;
    ++*(_DWORD *)(a1 + 4LL * a2);
    *(_QWORD *)(a1 + 8LL * a2 + 24) += a3;
  }
  return result;
}
