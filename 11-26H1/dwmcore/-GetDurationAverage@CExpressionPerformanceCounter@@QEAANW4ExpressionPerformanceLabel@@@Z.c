/*
 * XREFs of ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x1802882F4
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K@Z @ 0x180080338 (-UpdateExpressions@CExpressionManager@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall CExpressionPerformanceCounter::GetDurationAverage(__int64 a1, signed int a2)
{
  double result; // xmm0_8
  int v3; // eax

  result = 0.0;
  if ( (unsigned int)a2 < 6 )
  {
    v3 = *(_DWORD *)(a1 + 4LL * a2);
    if ( (double)v3 > 0.0 )
      return (double)(int)*(_QWORD *)(a1 + 8LL * a2 + 24) / (double)v3;
  }
  return result;
}
