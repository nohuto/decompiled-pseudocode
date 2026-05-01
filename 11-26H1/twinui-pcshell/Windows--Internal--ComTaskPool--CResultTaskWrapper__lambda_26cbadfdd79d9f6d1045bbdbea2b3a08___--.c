/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_26cbadfdd79d9f6d1045bbdbea2b3a08___::Run @ 0x1804474A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_26cbadfdd79d9f6d1045bbdbea2b3a08_::operator() @ 0x180445078 (_lambda_26cbadfdd79d9f6d1045bbdbea2b3a08_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_26cbadfdd79d9f6d1045bbdbea2b3a08___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_26cbadfdd79d9f6d1045bbdbea2b3a08_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
