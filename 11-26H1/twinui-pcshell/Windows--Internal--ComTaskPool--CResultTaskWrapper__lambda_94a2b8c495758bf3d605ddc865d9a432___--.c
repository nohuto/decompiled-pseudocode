/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94a2b8c495758bf3d605ddc865d9a432___::Run @ 0x18043DFA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_94a2b8c495758bf3d605ddc865d9a432_::operator() @ 0x180439EAC (_lambda_94a2b8c495758bf3d605ddc865d9a432_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94a2b8c495758bf3d605ddc865d9a432___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_94a2b8c495758bf3d605ddc865d9a432_::operator()((HSTRING **)(a1 + 16));
  *v1 = result;
  return result;
}
