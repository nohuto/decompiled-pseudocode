/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::Run @ 0x18018DD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::Run(
        __int64 a1)
{
  return BroadcastDVRComponent::ApplicationChangedTask(
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 16),
           *(unsigned int *)(a1 + 24));
}
