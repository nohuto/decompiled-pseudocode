/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run @ 0x180185980
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x1801859A8 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 56) = result;
  return result;
}
