/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c5527e6a5cdcf12967d2d97adb21a98f___::Run @ 0x18017E7A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c5527e6a5cdcf12967d2d97adb21a98f_::operator() @ 0x18017E814 (_lambda_c5527e6a5cdcf12967d2d97adb21a98f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c5527e6a5cdcf12967d2d97adb21a98f___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_c5527e6a5cdcf12967d2d97adb21a98f_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
