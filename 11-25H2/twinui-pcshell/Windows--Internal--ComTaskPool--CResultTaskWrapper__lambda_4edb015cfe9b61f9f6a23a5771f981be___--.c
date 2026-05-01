/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4edb015cfe9b61f9f6a23a5771f981be___::Run @ 0x18043AF00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4edb015cfe9b61f9f6a23a5771f981be_::operator() @ 0x180438CF0 (_lambda_4edb015cfe9b61f9f6a23a5771f981be_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4edb015cfe9b61f9f6a23a5771f981be___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_4edb015cfe9b61f9f6a23a5771f981be_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
