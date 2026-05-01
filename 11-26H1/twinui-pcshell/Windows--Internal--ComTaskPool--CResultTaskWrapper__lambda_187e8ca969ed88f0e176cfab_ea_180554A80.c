/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab90feca38___::Run @ 0x180554A80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_187e8ca969ed88f0e176cfab90feca38_::operator() @ 0x180551F30 (_lambda_187e8ca969ed88f0e176cfab90feca38_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_187e8ca969ed88f0e176cfab90feca38___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_187e8ca969ed88f0e176cfab90feca38_::operator()((void ***)(a1 + 16));
  *v1 = result;
  return result;
}
