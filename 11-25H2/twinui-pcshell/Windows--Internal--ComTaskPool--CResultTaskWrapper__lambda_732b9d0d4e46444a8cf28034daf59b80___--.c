/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___::Run @ 0x18043AF90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_732b9d0d4e46444a8cf28034daf59b80_::operator() @ 0x180439428 (_lambda_732b9d0d4e46444a8cf28034daf59b80_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_732b9d0d4e46444a8cf28034daf59b80_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
