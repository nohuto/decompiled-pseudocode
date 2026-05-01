/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___::Run @ 0x18043B140
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180439E08 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a977afc9c59ce0858e320274f367b95a_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
