/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_04d9d8ca76e4934c047f88587232d4c0___::Run @ 0x180424370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_04d9d8ca76e4934c047f88587232d4c0___::Run(
        __int64 a1)
{
  return UwpWindowEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 24LL),
           *(_QWORD *)(a1 + 32));
}
