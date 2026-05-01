/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e___::Run @ 0x180412B80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e_::operator() @ 0x1804088FC (_lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a43d6a9e6a0efd69cc3641cf3a8a4e5e_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
