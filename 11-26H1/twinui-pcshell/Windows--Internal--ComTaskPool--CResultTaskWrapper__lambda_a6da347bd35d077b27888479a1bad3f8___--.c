/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___::Run @ 0x180432900
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a6da347bd35d077b27888479a1bad3f8_::operator() @ 0x180432198 (_lambda_a6da347bd35d077b27888479a1bad3f8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_a6da347bd35d077b27888479a1bad3f8_::operator()((__int64 *)(a1 + 16));
  *v1 = result;
  return result;
}
