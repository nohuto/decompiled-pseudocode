/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5c6a979af0ee9d5ef90c02c02727011___::Run @ 0x180431CF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a5c6a979af0ee9d5ef90c02c02727011_::operator() @ 0x18042E140 (_lambda_a5c6a979af0ee9d5ef90c02c02727011_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a5c6a979af0ee9d5ef90c02c02727011___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a5c6a979af0ee9d5ef90c02c02727011_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
