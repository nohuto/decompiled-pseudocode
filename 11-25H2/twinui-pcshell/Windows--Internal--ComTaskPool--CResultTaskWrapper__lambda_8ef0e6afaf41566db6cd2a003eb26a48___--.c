/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef0e6afaf41566db6cd2a003eb26a48___::Run @ 0x180431C00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8ef0e6afaf41566db6cd2a003eb26a48_::operator() @ 0x18042DB9C (_lambda_8ef0e6afaf41566db6cd2a003eb26a48_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef0e6afaf41566db6cd2a003eb26a48___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8ef0e6afaf41566db6cd2a003eb26a48_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
