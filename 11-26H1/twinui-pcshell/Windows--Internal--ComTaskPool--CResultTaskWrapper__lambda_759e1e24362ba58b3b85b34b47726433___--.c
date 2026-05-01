/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___::Run @ 0x1801E6170
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_759e1e24362ba58b3b85b34b47726433_::operator() @ 0x1801E6194 (_lambda_759e1e24362ba58b3b85b34b47726433_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_759e1e24362ba58b3b85b34b47726433_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
