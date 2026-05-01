/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a9026d8f2ae046375b7e2fa4cf491289___::Run @ 0x180447700
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a9026d8f2ae046375b7e2fa4cf491289_::operator() @ 0x18044603C (_lambda_a9026d8f2ae046375b7e2fa4cf491289_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a9026d8f2ae046375b7e2fa4cf491289___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_a9026d8f2ae046375b7e2fa4cf491289_::operator()((_DWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
