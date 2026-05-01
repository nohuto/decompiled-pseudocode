/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaf758d85888cf62cbe11a93a7196c4___::Run @ 0x1801C7DB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8eaf758d85888cf62cbe11a93a7196c4_::operator() @ 0x1801C7DD4 (_lambda_8eaf758d85888cf62cbe11a93a7196c4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaf758d85888cf62cbe11a93a7196c4___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_8eaf758d85888cf62cbe11a93a7196c4_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
