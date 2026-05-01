/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd171a1d9ebdedee3576b89a841e614b___::Run @ 0x18042B8D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dd171a1d9ebdedee3576b89a841e614b_::operator() @ 0x180429EA4 (_lambda_dd171a1d9ebdedee3576b89a841e614b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd171a1d9ebdedee3576b89a841e614b___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_dd171a1d9ebdedee3576b89a841e614b_::operator()((__int64 *)(a1 + 16));
  *v1 = result;
  return result;
}
