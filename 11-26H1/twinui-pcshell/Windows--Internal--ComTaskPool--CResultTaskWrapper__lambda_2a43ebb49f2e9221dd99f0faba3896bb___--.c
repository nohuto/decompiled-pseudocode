/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___::Run @ 0x1804474D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator() @ 0x1804450D4 (_lambda_2a43ebb49f2e9221dd99f0faba3896bb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2a43ebb49f2e9221dd99f0faba3896bb___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_2a43ebb49f2e9221dd99f0faba3896bb_::operator()((UwpWindowWrapperBase **)(a1 + 16));
  *v1 = result;
  return result;
}
