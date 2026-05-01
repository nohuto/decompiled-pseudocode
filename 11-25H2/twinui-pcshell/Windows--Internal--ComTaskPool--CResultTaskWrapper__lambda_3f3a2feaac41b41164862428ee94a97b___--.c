/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3f3a2feaac41b41164862428ee94a97b___::Run @ 0x1804196A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3f3a2feaac41b41164862428ee94a97b_::operator() @ 0x1804174EC (_lambda_3f3a2feaac41b41164862428ee94a97b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3f3a2feaac41b41164862428ee94a97b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3f3a2feaac41b41164862428ee94a97b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
