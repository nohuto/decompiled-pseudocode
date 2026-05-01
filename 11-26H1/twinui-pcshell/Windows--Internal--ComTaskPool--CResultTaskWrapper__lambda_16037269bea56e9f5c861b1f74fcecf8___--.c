/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16037269bea56e9f5c861b1f74fcecf8___::Run @ 0x18043DC90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_16037269bea56e9f5c861b1f74fcecf8_::operator() @ 0x180438F0C (_lambda_16037269bea56e9f5c861b1f74fcecf8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16037269bea56e9f5c861b1f74fcecf8___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_16037269bea56e9f5c861b1f74fcecf8_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
