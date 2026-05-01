/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___::Run @ 0x180318160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0bba9217c60fc9f1eb04f96e77e4694___::Run(
        __int64 a1,
        unsigned __int8 a2)
{
  BroadcastDVRComponent::RefreshGameListsTask(*(BroadcastDVRComponent **)(a1 + 16), a2);
}
