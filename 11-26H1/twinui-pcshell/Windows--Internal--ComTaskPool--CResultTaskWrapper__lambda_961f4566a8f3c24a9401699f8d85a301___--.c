/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_961f4566a8f3c24a9401699f8d85a301___::Run @ 0x18043DFD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_961f4566a8f3c24a9401699f8d85a301_::operator() @ 0x180439F3C (_lambda_961f4566a8f3c24a9401699f8d85a301_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_961f4566a8f3c24a9401699f8d85a301___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_961f4566a8f3c24a9401699f8d85a301_::operator()((_QWORD **)(a1 + 16));
  *v1 = result;
  return result;
}
