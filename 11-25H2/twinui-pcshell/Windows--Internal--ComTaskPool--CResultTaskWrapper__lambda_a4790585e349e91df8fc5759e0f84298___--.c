/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a4790585e349e91df8fc5759e0f84298___::Run @ 0x180431CC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a4790585e349e91df8fc5759e0f84298_::operator() @ 0x18042DEFC (_lambda_a4790585e349e91df8fc5759e0f84298_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a4790585e349e91df8fc5759e0f84298___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a4790585e349e91df8fc5759e0f84298_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
