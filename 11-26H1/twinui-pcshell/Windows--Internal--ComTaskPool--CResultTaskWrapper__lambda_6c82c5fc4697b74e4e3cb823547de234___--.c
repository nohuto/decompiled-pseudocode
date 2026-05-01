/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6c82c5fc4697b74e4e3cb823547de234___::Run @ 0x180432830
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6c82c5fc4697b74e4e3cb823547de234_::operator() @ 0x180431F64 (_lambda_6c82c5fc4697b74e4e3cb823547de234_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6c82c5fc4697b74e4e3cb823547de234___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_6c82c5fc4697b74e4e3cb823547de234_::operator()((__int64 *)(a1 + 16));
  *v1 = result;
  return result;
}
