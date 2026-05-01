/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_328d34b077ad8ff9ce71d75659400e53___::Run @ 0x1804327D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_328d34b077ad8ff9ce71d75659400e53_::operator() @ 0x180431C40 (_lambda_328d34b077ad8ff9ce71d75659400e53_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_328d34b077ad8ff9ce71d75659400e53___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_328d34b077ad8ff9ce71d75659400e53_::operator()((__int64 **)(a1 + 16));
  *v1 = result;
  return result;
}
