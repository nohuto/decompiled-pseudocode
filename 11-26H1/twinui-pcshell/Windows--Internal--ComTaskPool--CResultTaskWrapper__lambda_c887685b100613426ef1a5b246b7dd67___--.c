/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___::Run @ 0x180209150
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c887685b100613426ef1a5b246b7dd67_::operator() @ 0x180209174 (_lambda_c887685b100613426ef1a5b246b7dd67_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_c887685b100613426ef1a5b246b7dd67_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
