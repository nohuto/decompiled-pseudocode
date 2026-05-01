/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1f6ddbb72abc1afda4a40744d137e247___::Run @ 0x180419670
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1f6ddbb72abc1afda4a40744d137e247_::operator() @ 0x1804173D0 (_lambda_1f6ddbb72abc1afda4a40744d137e247_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1f6ddbb72abc1afda4a40744d137e247___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1f6ddbb72abc1afda4a40744d137e247_::operator()((RTL_SRWLOCK **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
