/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___::Run @ 0x180447760
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180446234 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 48);
  result = lambda_a977afc9c59ce0858e320274f367b95a_::operator()((int **)(a1 + 16));
  *v1 = result;
  return result;
}
