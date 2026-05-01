/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d60693f78f588dd324112bac7dc03c83___::Run @ 0x180424340
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d60693f78f588dd324112bac7dc03c83_::operator() @ 0x1804224F4 (_lambda_d60693f78f588dd324112bac7dc03c83_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d60693f78f588dd324112bac7dc03c83___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_d60693f78f588dd324112bac7dc03c83_::operator()((RTL_SRWLOCK **)(a1 + 16));
  *v1 = result;
  return result;
}
