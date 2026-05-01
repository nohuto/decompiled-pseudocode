/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7d20bc7e507f60d2495cb4cf260b04e4___::Run @ 0x18043AFC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7d20bc7e507f60d2495cb4cf260b04e4_::operator() @ 0x180439668 (_lambda_7d20bc7e507f60d2495cb4cf260b04e4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7d20bc7e507f60d2495cb4cf260b04e4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7d20bc7e507f60d2495cb4cf260b04e4_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
