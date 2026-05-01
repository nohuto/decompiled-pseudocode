/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___::Run @ 0x180431BD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x18042D7EC (_lambda_7e2780c5544860c2230bb0766c4bf63e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7e2780c5544860c2230bb0766c4bf63e_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
