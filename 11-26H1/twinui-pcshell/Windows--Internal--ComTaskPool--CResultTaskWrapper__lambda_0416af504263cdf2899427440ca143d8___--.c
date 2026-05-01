/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0416af504263cdf2899427440ca143d8___::Run @ 0x18041D8D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0416af504263cdf2899427440ca143d8_::operator() @ 0x1804135F0 (_lambda_0416af504263cdf2899427440ca143d8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0416af504263cdf2899427440ca143d8___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _DWORD *v4; // rbx
  __int64 result; // rax

  v4 = *(_DWORD **)(a1 + 32);
  result = lambda_0416af504263cdf2899427440ca143d8_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  *v4 = result;
  return result;
}
