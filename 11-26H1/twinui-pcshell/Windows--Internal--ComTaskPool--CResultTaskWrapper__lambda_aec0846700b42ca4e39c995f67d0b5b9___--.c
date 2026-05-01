/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aec0846700b42ca4e39c995f67d0b5b9___::Run @ 0x18042B800
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator() @ 0x180429C9C (_lambda_aec0846700b42ca4e39c995f67d0b5b9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aec0846700b42ca4e39c995f67d0b5b9___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
