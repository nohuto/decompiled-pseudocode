/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_687e5a8c7a4f05ed052b2b78739515ed___::Run @ 0x18044A2B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator() @ 0x180179650 (_lambda_687e5a8c7a4f05ed052b2b78739515ed_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_687e5a8c7a4f05ed052b2b78739515ed___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator()((_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
