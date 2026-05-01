/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68022f0d3b489cdc066e60d642ae628d___::Run @ 0x180143870
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_68022f0d3b489cdc066e60d642ae628d_::operator() @ 0x180143898 (_lambda_68022f0d3b489cdc066e60d642ae628d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68022f0d3b489cdc066e60d642ae628d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_68022f0d3b489cdc066e60d642ae628d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
