/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___::Run @ 0x18021E2A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f991981efcc52a1e7ce38201fb3a674d_::operator() @ 0x1802AD200 (_lambda_f991981efcc52a1e7ce38201fb3a674d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f991981efcc52a1e7ce38201fb3a674d___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_f991981efcc52a1e7ce38201fb3a674d_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
