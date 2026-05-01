/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___::Run @ 0x18043DEB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator() @ 0x18043956C (_lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator()((__int64 *)(a1 + 16));
  *v1 = result;
  return result;
}
