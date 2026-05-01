/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef0e6afaf41566db6cd2a003eb26a48___::Run @ 0x18043DF70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8ef0e6afaf41566db6cd2a003eb26a48_::operator() @ 0x180439E04 (_lambda_8ef0e6afaf41566db6cd2a003eb26a48_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef0e6afaf41566db6cd2a003eb26a48___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_8ef0e6afaf41566db6cd2a003eb26a48_::operator()((unsigned int **)(a1 + 16));
  *v1 = result;
  return result;
}
