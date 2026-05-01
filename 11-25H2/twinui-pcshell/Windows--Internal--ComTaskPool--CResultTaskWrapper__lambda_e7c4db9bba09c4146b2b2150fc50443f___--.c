/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e7c4db9bba09c4146b2b2150fc50443f___::Run @ 0x180431EA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e7c4db9bba09c4146b2b2150fc50443f_::operator() @ 0x18042ED00 (_lambda_e7c4db9bba09c4146b2b2150fc50443f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e7c4db9bba09c4146b2b2150fc50443f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e7c4db9bba09c4146b2b2150fc50443f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
