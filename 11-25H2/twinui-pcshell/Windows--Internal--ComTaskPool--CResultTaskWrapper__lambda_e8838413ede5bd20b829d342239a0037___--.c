/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e8838413ede5bd20b829d342239a0037___::Run @ 0x1804237D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e8838413ede5bd20b829d342239a0037_::operator() @ 0x180422EE0 (_lambda_e8838413ede5bd20b829d342239a0037_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e8838413ede5bd20b829d342239a0037___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e8838413ede5bd20b829d342239a0037_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
