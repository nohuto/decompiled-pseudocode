/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___::Run @ 0x180447530
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator() @ 0x180445270 (_lambda_3bc8458981c1f89b7e30203ff9c56e4f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator()((UwpWindowWrapperBase **)(a1 + 16));
  *v1 = result;
  return result;
}
