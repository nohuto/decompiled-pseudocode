/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___::Run @ 0x18022B9D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f991981efcc52a1e7ce38201fb3a674d_::operator() @ 0x1802B6008 (_lambda_f991981efcc52a1e7ce38201fb3a674d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f991981efcc52a1e7ce38201fb3a674d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
