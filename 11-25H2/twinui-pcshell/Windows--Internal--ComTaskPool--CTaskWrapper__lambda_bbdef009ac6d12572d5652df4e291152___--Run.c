/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bbdef009ac6d12572d5652df4e291152___::Run @ 0x180318170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bbdef009ac6d12572d5652df4e291152___::Run(
        __int64 a1)
{
  return BroadcastDVRComponent::SendNewNotificationTask(
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24));
}
