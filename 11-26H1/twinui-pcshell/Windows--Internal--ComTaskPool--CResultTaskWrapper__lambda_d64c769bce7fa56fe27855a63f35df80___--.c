/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___::Run @ 0x18043E120
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d64c769bce7fa56fe27855a63f35df80_::operator() @ 0x18043AA04 (_lambda_d64c769bce7fa56fe27855a63f35df80_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d64c769bce7fa56fe27855a63f35df80___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_d64c769bce7fa56fe27855a63f35df80_::operator()((WindowWrapperBase **)(a1 + 16));
  *v1 = result;
  return result;
}
