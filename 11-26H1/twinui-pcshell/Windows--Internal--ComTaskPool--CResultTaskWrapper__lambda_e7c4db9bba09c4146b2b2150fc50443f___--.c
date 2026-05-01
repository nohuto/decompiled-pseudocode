/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e7c4db9bba09c4146b2b2150fc50443f___::Run @ 0x18043E210
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e7c4db9bba09c4146b2b2150fc50443f_::operator() @ 0x18043AFB0 (_lambda_e7c4db9bba09c4146b2b2150fc50443f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e7c4db9bba09c4146b2b2150fc50443f___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_e7c4db9bba09c4146b2b2150fc50443f_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
