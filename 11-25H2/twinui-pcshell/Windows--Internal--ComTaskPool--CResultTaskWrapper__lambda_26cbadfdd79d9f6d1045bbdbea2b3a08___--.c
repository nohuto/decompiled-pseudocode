/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_26cbadfdd79d9f6d1045bbdbea2b3a08___::Run @ 0x18043AE40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_26cbadfdd79d9f6d1045bbdbea2b3a08_::operator() @ 0x180438A0C (_lambda_26cbadfdd79d9f6d1045bbdbea2b3a08_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_26cbadfdd79d9f6d1045bbdbea2b3a08___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_26cbadfdd79d9f6d1045bbdbea2b3a08_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
