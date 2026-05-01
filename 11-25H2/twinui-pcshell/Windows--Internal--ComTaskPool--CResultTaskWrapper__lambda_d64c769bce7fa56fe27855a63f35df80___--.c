/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___::Run @ 0x180431DB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d64c769bce7fa56fe27855a63f35df80_::operator() @ 0x18042E780 (_lambda_d64c769bce7fa56fe27855a63f35df80_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d64c769bce7fa56fe27855a63f35df80_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
