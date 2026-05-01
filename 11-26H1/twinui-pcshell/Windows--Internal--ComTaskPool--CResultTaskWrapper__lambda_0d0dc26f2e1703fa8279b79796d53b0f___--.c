/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0d0dc26f2e1703fa8279b79796d53b0f___::Run @ 0x180447390
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0d0dc26f2e1703fa8279b79796d53b0f_::operator() @ 0x180444C38 (_lambda_0d0dc26f2e1703fa8279b79796d53b0f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0d0dc26f2e1703fa8279b79796d53b0f___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_0d0dc26f2e1703fa8279b79796d53b0f_::operator()((int **)(a1 + 16));
  *v1 = result;
  return result;
}
