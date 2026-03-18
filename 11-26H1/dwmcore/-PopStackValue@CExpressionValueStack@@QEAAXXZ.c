/*
 * XREFs of ?PopStackValue@CExpressionValueStack@@QEAAXXZ @ 0x1801B4884
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValueStack::PopStackValue(CExpressionValueStack *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
    *((_DWORD *)this + 24) = v1 - 1;
}
