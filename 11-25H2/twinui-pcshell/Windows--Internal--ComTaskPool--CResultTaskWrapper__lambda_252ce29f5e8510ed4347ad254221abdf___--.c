/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___::Run @ 0x180423770
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_252ce29f5e8510ed4347ad254221abdf_::operator() @ 0x180422A88 (_lambda_252ce29f5e8510ed4347ad254221abdf_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_252ce29f5e8510ed4347ad254221abdf_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
