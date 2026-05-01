/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4c1b5e17c044e6513fa8c2435900536___::Run @ 0x18043B240
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f4c1b5e17c044e6513fa8c2435900536_::operator() @ 0x1802B8294 (_lambda_f4c1b5e17c044e6513fa8c2435900536_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4c1b5e17c044e6513fa8c2435900536___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f4c1b5e17c044e6513fa8c2435900536_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
