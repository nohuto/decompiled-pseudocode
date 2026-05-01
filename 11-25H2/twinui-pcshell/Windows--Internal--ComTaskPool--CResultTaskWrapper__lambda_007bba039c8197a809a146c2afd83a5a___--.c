/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_007bba039c8197a809a146c2afd83a5a___::Run @ 0x1804318C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_007bba039c8197a809a146c2afd83a5a_::operator() @ 0x18042CB84 (_lambda_007bba039c8197a809a146c2afd83a5a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_007bba039c8197a809a146c2afd83a5a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_007bba039c8197a809a146c2afd83a5a_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
