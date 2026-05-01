/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd171a1d9ebdedee3576b89a841e614b___::Run @ 0x180420500
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dd171a1d9ebdedee3576b89a841e614b_::operator() @ 0x18041EBE8 (_lambda_dd171a1d9ebdedee3576b89a841e614b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd171a1d9ebdedee3576b89a841e614b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_dd171a1d9ebdedee3576b89a841e614b_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
