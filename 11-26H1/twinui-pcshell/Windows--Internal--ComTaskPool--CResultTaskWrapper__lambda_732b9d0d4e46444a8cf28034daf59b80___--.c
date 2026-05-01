/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___::Run @ 0x1804475F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_732b9d0d4e46444a8cf28034daf59b80_::operator() @ 0x1804459EC (_lambda_732b9d0d4e46444a8cf28034daf59b80_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_732b9d0d4e46444a8cf28034daf59b80___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 24);
  result = lambda_732b9d0d4e46444a8cf28034daf59b80_::operator()((UwpWindowWrapperBase **)(a1 + 16));
  *v1 = result;
  return result;
}
