/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a4790585e349e91df8fc5759e0f84298___::Run @ 0x18043E030
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a4790585e349e91df8fc5759e0f84298_::operator() @ 0x18043A170 (_lambda_a4790585e349e91df8fc5759e0f84298_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a4790585e349e91df8fc5759e0f84298___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_a4790585e349e91df8fc5759e0f84298_::operator()((int **)(a1 + 16));
  *v1 = result;
  return result;
}
