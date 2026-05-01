/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_961f4566a8f3c24a9401699f8d85a301___::Run @ 0x180431C60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_961f4566a8f3c24a9401699f8d85a301_::operator() @ 0x18042DCD4 (_lambda_961f4566a8f3c24a9401699f8d85a301_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_961f4566a8f3c24a9401699f8d85a301___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_961f4566a8f3c24a9401699f8d85a301_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
