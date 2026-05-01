/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d7884d2305cb98080a7771b114819b2a___::Run @ 0x18043E150
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d7884d2305cb98080a7771b114819b2a_::operator() @ 0x18043ABF0 (_lambda_d7884d2305cb98080a7771b114819b2a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d7884d2305cb98080a7771b114819b2a___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_d7884d2305cb98080a7771b114819b2a_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
