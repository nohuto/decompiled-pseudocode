/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4c1b5e17c044e6513fa8c2435900536___::Run @ 0x180447890
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f4c1b5e17c044e6513fa8c2435900536_::operator() @ 0x1802AEBE4 (_lambda_f4c1b5e17c044e6513fa8c2435900536_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4c1b5e17c044e6513fa8c2435900536___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_f4c1b5e17c044e6513fa8c2435900536_::operator()((_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
