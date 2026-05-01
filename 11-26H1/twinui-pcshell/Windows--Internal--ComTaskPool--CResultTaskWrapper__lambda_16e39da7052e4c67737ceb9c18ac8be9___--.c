/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run @ 0x180179970
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180179994 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 56);
  result = lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
