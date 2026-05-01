/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ceee1b9c54d49ba2255ffab17ffe7895___::Run @ 0x1804477C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator() @ 0x180446590 (_lambda_ceee1b9c54d49ba2255ffab17ffe7895_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ceee1b9c54d49ba2255ffab17ffe7895___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
