/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___::Run @ 0x18043E000
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator() @ 0x18043A07C (_lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed6fd0e6aaea94a42a1d802caf4bf23___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_9ed6fd0e6aaea94a42a1d802caf4bf23_::operator()((WindowWrapperBase **)(a1 + 16));
  *v1 = result;
  return result;
}
