/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___::Run @ 0x180432800
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_420994182feb68798a6ba33cec143f0f_::operator() @ 0x180431D18 (_lambda_420994182feb68798a6ba33cec143f0f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_420994182feb68798a6ba33cec143f0f_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
