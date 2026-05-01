/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_56bc88237345be46eea563c70201c1d4___::Run @ 0x1804196D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_56bc88237345be46eea563c70201c1d4_::operator() @ 0x1804175D4 (_lambda_56bc88237345be46eea563c70201c1d4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_56bc88237345be46eea563c70201c1d4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_56bc88237345be46eea563c70201c1d4_::operator()((RTL_SRWLOCK **)(a1 + 16));
  **(_DWORD **)(a1 + 56) = result;
  return result;
}
