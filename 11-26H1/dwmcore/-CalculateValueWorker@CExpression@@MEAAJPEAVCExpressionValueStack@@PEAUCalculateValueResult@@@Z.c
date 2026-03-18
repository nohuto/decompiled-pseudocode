/*
 * XREFs of ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180109960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpression::CalculateValueWorker(
        CExpression *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  if ( !CCommonRegistryData::OptimizeForDirtyExpressions || !*((_DWORD *)this + 36) || !*((_QWORD *)this + 21) )
    return CExpression::CalculateValueWorkerImpl(this, a2);
  *((_BYTE *)a3 + 1) = 1;
  return 0LL;
}
