/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___::Run @ 0x18042ECD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_252ce29f5e8510ed4347ad254221abdf_::operator() @ 0x18042DFA4 (_lambda_252ce29f5e8510ed4347ad254221abdf_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_252ce29f5e8510ed4347ad254221abdf_::operator()((_QWORD *)(a1 + 16));
  *v1 = result;
  return result;
}
