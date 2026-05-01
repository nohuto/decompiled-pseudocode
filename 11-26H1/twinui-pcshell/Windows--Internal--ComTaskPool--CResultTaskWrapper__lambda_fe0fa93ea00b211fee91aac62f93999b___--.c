/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___::Run @ 0x18004CC40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x18004CAFC (_lambda_fe0fa93ea00b211fee91aac62f93999b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_fe0fa93ea00b211fee91aac62f93999b_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
