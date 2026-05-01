/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c___::Run @ 0x18041D940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c___::Run(
        __int64 a1)
{
  return WindowEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 24LL),
           *(_QWORD *)(a1 + 32));
}
