/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d0edc6b8eea04ad0c12ef80d845b920d___::Run @ 0x18043E0F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator() @ 0x18043A768 (_lambda_d0edc6b8eea04ad0c12ef80d845b920d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d0edc6b8eea04ad0c12ef80d845b920d___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 40);
  result = lambda_d0edc6b8eea04ad0c12ef80d845b920d_::operator()((WindowWrapperBase **)(a1 + 16));
  *v1 = result;
  return result;
}
