/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2295e0733fe842dc7216b708d96c5c17___::Run @ 0x18043AE10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2295e0733fe842dc7216b708d96c5c17_::operator() @ 0x180438964 (_lambda_2295e0733fe842dc7216b708d96c5c17_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2295e0733fe842dc7216b708d96c5c17___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_2295e0733fe842dc7216b708d96c5c17_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
