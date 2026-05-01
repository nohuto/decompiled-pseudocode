/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_558037198f8876ec04dcff1824824a48___::Run @ 0x180431AE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_558037198f8876ec04dcff1824824a48_::operator() @ 0x18042D1EC (_lambda_558037198f8876ec04dcff1824824a48_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_558037198f8876ec04dcff1824824a48___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_558037198f8876ec04dcff1824824a48_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
