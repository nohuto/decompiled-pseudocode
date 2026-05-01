/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f3c5176796a442ffa96ae8ba53d93332___::Run @ 0x1801ED1E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f3c5176796a442ffa96ae8ba53d93332_::operator() @ 0x1801ED204 (_lambda_f3c5176796a442ffa96ae8ba53d93332_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f3c5176796a442ffa96ae8ba53d93332___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_f3c5176796a442ffa96ae8ba53d93332_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
