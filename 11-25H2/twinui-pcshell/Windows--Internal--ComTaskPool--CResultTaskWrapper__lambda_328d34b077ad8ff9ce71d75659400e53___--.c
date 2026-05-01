/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_328d34b077ad8ff9ce71d75659400e53___::Run @ 0x1804269E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_328d34b077ad8ff9ce71d75659400e53_::operator() @ 0x180425EAC (_lambda_328d34b077ad8ff9ce71d75659400e53_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_328d34b077ad8ff9ce71d75659400e53___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_328d34b077ad8ff9ce71d75659400e53_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
