/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9932d17d7df1642ff599701ea9ac6cce___::Run @ 0x18042B6C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9932d17d7df1642ff599701ea9ac6cce_::operator() @ 0x180429870 (_lambda_9932d17d7df1642ff599701ea9ac6cce_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9932d17d7df1642ff599701ea9ac6cce___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_9932d17d7df1642ff599701ea9ac6cce_::operator()((__int64 **)(a1 + 16));
  *v1 = result;
  return result;
}
