/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cc5ed20aaab4032583b283f4fa22eb03___::Run @ 0x18017E770
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator() @ 0x18017E7C4 (_lambda_cc5ed20aaab4032583b283f4fa22eb03_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cc5ed20aaab4032583b283f4fa22eb03___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
