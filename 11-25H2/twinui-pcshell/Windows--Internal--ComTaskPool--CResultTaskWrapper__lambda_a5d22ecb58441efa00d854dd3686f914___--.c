/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5d22ecb58441efa00d854dd3686f914___::Run @ 0x18043B080
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a5d22ecb58441efa00d854dd3686f914_::operator() @ 0x180439B34 (_lambda_a5d22ecb58441efa00d854dd3686f914_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5d22ecb58441efa00d854dd3686f914___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a5d22ecb58441efa00d854dd3686f914_::operator()();
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
