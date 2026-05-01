/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_665d6f33f7c53b091004cce062c6e03d___::Run @ 0x1801C32E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_665d6f33f7c53b091004cce062c6e03d_::operator() @ 0x1801C3304 (_lambda_665d6f33f7c53b091004cce062c6e03d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_665d6f33f7c53b091004cce062c6e03d___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_665d6f33f7c53b091004cce062c6e03d_::operator()(a1 + 16);
  *v1 = result;
  return result;
}
