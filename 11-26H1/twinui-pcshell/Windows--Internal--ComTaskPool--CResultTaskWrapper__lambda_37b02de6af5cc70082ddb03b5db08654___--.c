/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run @ 0x180138860
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x180138884 (_lambda_37b02de6af5cc70082ddb03b5db08654_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_37b02de6af5cc70082ddb03b5db08654_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
