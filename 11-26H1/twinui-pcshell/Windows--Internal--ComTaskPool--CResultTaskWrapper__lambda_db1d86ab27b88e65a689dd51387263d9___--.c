/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_db1d86ab27b88e65a689dd51387263d9___::Run @ 0x18043E180
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_db1d86ab27b88e65a689dd51387263d9_::operator() @ 0x18043ADBC (_lambda_db1d86ab27b88e65a689dd51387263d9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_db1d86ab27b88e65a689dd51387263d9___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_db1d86ab27b88e65a689dd51387263d9_::operator()((_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
