/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5d22ecb58441efa00d854dd3686f914___::Run @ 0x1804476B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a5d22ecb58441efa00d854dd3686f914_::operator() @ 0x180445F4C (_lambda_a5d22ecb58441efa00d854dd3686f914_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5d22ecb58441efa00d854dd3686f914___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_a5d22ecb58441efa00d854dd3686f914_::operator()();
  *v1 = result;
  return result;
}
