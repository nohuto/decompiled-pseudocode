/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run @ 0x18042B620
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x18042940C (_lambda_8eaa9d9bc48e0c760b532341ceadabea_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator()((int **)(a1 + 16));
  *v1 = result;
  return result;
}
