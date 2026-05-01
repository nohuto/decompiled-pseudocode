/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5b81071474e0379f4c1550f72c623acc___::Run @ 0x18044A280
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5b81071474e0379f4c1550f72c623acc_::operator() @ 0x180449EC0 (_lambda_5b81071474e0379f4c1550f72c623acc_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5b81071474e0379f4c1550f72c623acc___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 48);
  result = lambda_5b81071474e0379f4c1550f72c623acc_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
