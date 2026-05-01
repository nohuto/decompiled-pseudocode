/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab90feca38___::Run @ 0x180530FD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_187e8ca969ed88f0e176cfab90feca38_::operator() @ 0x18052EB88 (_lambda_187e8ca969ed88f0e176cfab90feca38_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab90feca38___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_187e8ca969ed88f0e176cfab90feca38_::operator()((void ***)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
