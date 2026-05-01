/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c5527e6a5cdcf12967d2d97adb21a98f___::Run @ 0x1801124F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c5527e6a5cdcf12967d2d97adb21a98f_::operator() @ 0x180112568 (_lambda_c5527e6a5cdcf12967d2d97adb21a98f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c5527e6a5cdcf12967d2d97adb21a98f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c5527e6a5cdcf12967d2d97adb21a98f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
