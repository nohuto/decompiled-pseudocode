/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_08e19f15ae792a297a06aee8f3a7a64f___::Run @ 0x1801F2BB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_08e19f15ae792a297a06aee8f3a7a64f_::operator() @ 0x1801F2BD4 (_lambda_08e19f15ae792a297a06aee8f3a7a64f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_08e19f15ae792a297a06aee8f3a7a64f___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_08e19f15ae792a297a06aee8f3a7a64f_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
