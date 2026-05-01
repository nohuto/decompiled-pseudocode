/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2295e0733fe842dc7216b708d96c5c17___::Run @ 0x180447470
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2295e0733fe842dc7216b708d96c5c17_::operator() @ 0x180444FD0 (_lambda_2295e0733fe842dc7216b708d96c5c17_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2295e0733fe842dc7216b708d96c5c17___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_2295e0733fe842dc7216b708d96c5c17_::operator()((unsigned int **)(a1 + 16));
  *v1 = result;
  return result;
}
