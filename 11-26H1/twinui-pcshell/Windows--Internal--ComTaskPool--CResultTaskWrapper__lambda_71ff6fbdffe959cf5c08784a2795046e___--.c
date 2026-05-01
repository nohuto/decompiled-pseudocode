/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_71ff6fbdffe959cf5c08784a2795046e___::Run @ 0x180432860
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_71ff6fbdffe959cf5c08784a2795046e_::operator() @ 0x180431FC4 (_lambda_71ff6fbdffe959cf5c08784a2795046e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_71ff6fbdffe959cf5c08784a2795046e___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_71ff6fbdffe959cf5c08784a2795046e_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
