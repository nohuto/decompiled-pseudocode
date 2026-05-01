/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_99fecce93f01391543c16575634a6bf3___::Run @ 0x18042B6F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_99fecce93f01391543c16575634a6bf3_::operator() @ 0x180429950 (_lambda_99fecce93f01391543c16575634a6bf3_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_99fecce93f01391543c16575634a6bf3___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_99fecce93f01391543c16575634a6bf3_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
