/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaf758d85888cf62cbe11a93a7196c4___::Run @ 0x1801D1250
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8eaf758d85888cf62cbe11a93a7196c4_::operator() @ 0x1801D1278 (_lambda_8eaf758d85888cf62cbe11a93a7196c4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaf758d85888cf62cbe11a93a7196c4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8eaf758d85888cf62cbe11a93a7196c4_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
