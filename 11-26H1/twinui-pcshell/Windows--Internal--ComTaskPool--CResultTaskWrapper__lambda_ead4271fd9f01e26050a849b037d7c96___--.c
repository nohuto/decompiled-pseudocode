/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ead4271fd9f01e26050a849b037d7c96___::Run @ 0x1804477F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ead4271fd9f01e26050a849b037d7c96_::operator() @ 0x18044676C (_lambda_ead4271fd9f01e26050a849b037d7c96_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ead4271fd9f01e26050a849b037d7c96___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_ead4271fd9f01e26050a849b037d7c96_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
