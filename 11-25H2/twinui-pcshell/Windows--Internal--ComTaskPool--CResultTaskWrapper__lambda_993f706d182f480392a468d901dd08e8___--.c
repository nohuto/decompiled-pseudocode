/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_993f706d182f480392a468d901dd08e8___::Run @ 0x18043B050
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_993f706d182f480392a468d901dd08e8_::operator() @ 0x180439968 (_lambda_993f706d182f480392a468d901dd08e8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_993f706d182f480392a468d901dd08e8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_993f706d182f480392a468d901dd08e8_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
