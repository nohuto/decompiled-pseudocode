/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___::Run @ 0x180426A10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_420994182feb68798a6ba33cec143f0f_::operator() @ 0x180425F7C (_lambda_420994182feb68798a6ba33cec143f0f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_420994182feb68798a6ba33cec143f0f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_420994182feb68798a6ba33cec143f0f_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
