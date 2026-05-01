/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d7884d2305cb98080a7771b114819b2a___::Run @ 0x180431DE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d7884d2305cb98080a7771b114819b2a_::operator() @ 0x18042E954 (_lambda_d7884d2305cb98080a7771b114819b2a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d7884d2305cb98080a7771b114819b2a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d7884d2305cb98080a7771b114819b2a_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
