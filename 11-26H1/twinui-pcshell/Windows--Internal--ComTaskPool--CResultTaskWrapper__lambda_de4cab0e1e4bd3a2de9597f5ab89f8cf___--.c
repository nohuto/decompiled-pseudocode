/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___::Run @ 0x18043E1B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator() @ 0x18043AE54 (_lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator()((int **)(a1 + 16));
  *v1 = result;
  return result;
}
