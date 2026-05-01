/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_35169333fb00b3a8611755877d9dabc2___::Run @ 0x180447500
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_35169333fb00b3a8611755877d9dabc2_::operator() @ 0x1804451D8 (_lambda_35169333fb00b3a8611755877d9dabc2_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_35169333fb00b3a8611755877d9dabc2___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_35169333fb00b3a8611755877d9dabc2_::operator()((_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
