/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8032610bc69c7d33d4f231d1bb122a3b___::Run @ 0x18043AFF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8032610bc69c7d33d4f231d1bb122a3b_::operator() @ 0x1804396FC (_lambda_8032610bc69c7d33d4f231d1bb122a3b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8032610bc69c7d33d4f231d1bb122a3b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8032610bc69c7d33d4f231d1bb122a3b_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
