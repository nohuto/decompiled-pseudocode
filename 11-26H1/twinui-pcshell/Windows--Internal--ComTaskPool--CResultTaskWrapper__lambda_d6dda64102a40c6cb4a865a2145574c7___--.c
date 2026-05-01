/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d6dda64102a40c6cb4a865a2145574c7___::Run @ 0x18042B8A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d6dda64102a40c6cb4a865a2145574c7_::operator() @ 0x180429E04 (_lambda_d6dda64102a40c6cb4a865a2145574c7_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d6dda64102a40c6cb4a865a2145574c7___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_d6dda64102a40c6cb4a865a2145574c7_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
