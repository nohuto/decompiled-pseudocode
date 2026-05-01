/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_35169333fb00b3a8611755877d9dabc2___::Run @ 0x18043AEA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_35169333fb00b3a8611755877d9dabc2_::operator() @ 0x180438B50 (_lambda_35169333fb00b3a8611755877d9dabc2_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_35169333fb00b3a8611755877d9dabc2___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_35169333fb00b3a8611755877d9dabc2_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
