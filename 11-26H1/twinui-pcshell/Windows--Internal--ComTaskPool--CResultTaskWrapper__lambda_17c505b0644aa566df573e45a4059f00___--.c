/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_17c505b0644aa566df573e45a4059f00___::Run @ 0x18043DCC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_17c505b0644aa566df573e45a4059f00_::operator() @ 0x180438F68 (_lambda_17c505b0644aa566df573e45a4059f00_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_17c505b0644aa566df573e45a4059f00___::Run(
        __int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 32);
  result = lambda_17c505b0644aa566df573e45a4059f00_::operator()((unsigned int **)(a1 + 16));
  *v1 = result;
  return result;
}
