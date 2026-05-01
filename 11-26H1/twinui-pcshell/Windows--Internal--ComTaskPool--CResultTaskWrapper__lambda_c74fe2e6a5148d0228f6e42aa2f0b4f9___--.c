/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c74fe2e6a5148d0228f6e42aa2f0b4f9___::Run @ 0x180447790
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c74fe2e6a5148d0228f6e42aa2f0b4f9_::operator() @ 0x1804464BC (_lambda_c74fe2e6a5148d0228f6e42aa2f0b4f9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c74fe2e6a5148d0228f6e42aa2f0b4f9___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_c74fe2e6a5148d0228f6e42aa2f0b4f9_::operator()((__int64 **)(a1 + 16));
  *v1 = result;
  return result;
}
