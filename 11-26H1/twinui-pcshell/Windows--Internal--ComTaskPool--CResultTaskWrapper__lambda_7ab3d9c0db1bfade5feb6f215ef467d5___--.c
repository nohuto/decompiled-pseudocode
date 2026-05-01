/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___::Run @ 0x18043DF10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7ab3d9c0db1bfade5feb6f215ef467d5_::operator() @ 0x180439A10 (_lambda_7ab3d9c0db1bfade5feb6f215ef467d5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_7ab3d9c0db1bfade5feb6f215ef467d5_::operator()((_QWORD *)(a1 + 16));
  *v1 = result;
  return result;
}
