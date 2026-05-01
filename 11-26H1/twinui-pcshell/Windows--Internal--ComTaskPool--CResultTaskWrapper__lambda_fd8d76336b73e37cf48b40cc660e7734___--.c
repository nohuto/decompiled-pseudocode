/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd8d76336b73e37cf48b40cc660e7734___::Run @ 0x1804478C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fd8d76336b73e37cf48b40cc660e7734_::operator() @ 0x180446874 (_lambda_fd8d76336b73e37cf48b40cc660e7734_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd8d76336b73e37cf48b40cc660e7734___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_fd8d76336b73e37cf48b40cc660e7734_::operator()((unsigned int **)(a1 + 16));
  *v1 = result;
  return result;
}
