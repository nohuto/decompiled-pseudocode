/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_17c505b0644aa566df573e45a4059f00___::Run @ 0x180431950
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_17c505b0644aa566df573e45a4059f00_::operator() @ 0x18042CD40 (_lambda_17c505b0644aa566df573e45a4059f00_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_17c505b0644aa566df573e45a4059f00___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_17c505b0644aa566df573e45a4059f00_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
