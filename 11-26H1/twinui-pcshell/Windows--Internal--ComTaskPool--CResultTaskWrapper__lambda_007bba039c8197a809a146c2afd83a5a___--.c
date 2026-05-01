/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_007bba039c8197a809a146c2afd83a5a___::Run @ 0x18043DC30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_007bba039c8197a809a146c2afd83a5a_::operator() @ 0x180438DAC (_lambda_007bba039c8197a809a146c2afd83a5a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_007bba039c8197a809a146c2afd83a5a___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_007bba039c8197a809a146c2afd83a5a_::operator()((int **)(a1 + 16));
  *v1 = result;
  return result;
}
