/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___::Run @ 0x18043DF40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x180439A38 (_lambda_7e2780c5544860c2230bb0766c4bf63e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 48);
  result = lambda_7e2780c5544860c2230bb0766c4bf63e_::operator()((unsigned int **)(a1 + 16));
  *v1 = result;
  return result;
}
