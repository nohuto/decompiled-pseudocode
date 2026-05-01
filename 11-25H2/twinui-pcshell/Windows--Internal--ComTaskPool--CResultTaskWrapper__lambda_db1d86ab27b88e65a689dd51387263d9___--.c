/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_db1d86ab27b88e65a689dd51387263d9___::Run @ 0x180431E10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_db1d86ab27b88e65a689dd51387263d9_::operator() @ 0x18042EB10 (_lambda_db1d86ab27b88e65a689dd51387263d9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_db1d86ab27b88e65a689dd51387263d9___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_db1d86ab27b88e65a689dd51387263d9_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
