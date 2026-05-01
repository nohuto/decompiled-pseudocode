/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a742079b4f288dc5c41d6ea5a73a25fb___::Run @ 0x1804476D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a742079b4f288dc5c41d6ea5a73a25fb_::operator() @ 0x180445F6C (_lambda_a742079b4f288dc5c41d6ea5a73a25fb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a742079b4f288dc5c41d6ea5a73a25fb___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _DWORD *v4; // rbx
  __int64 result; // rax

  v4 = *(_DWORD **)(a1 + 32);
  result = lambda_a742079b4f288dc5c41d6ea5a73a25fb_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  *v4 = result;
  return result;
}
