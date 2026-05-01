/*
 * XREFs of MIDL_user_allocate @ 0x180002250
 * Callers:
 *     HamPlmNotifyNewSession @ 0x180001210 (HamPlmNotifyNewSession.c)
 *     HamConnectForStateChangeNotifications @ 0x180002280 (HamConnectForStateChangeNotifications.c)
 *     HampConnectionDeserializeActivities @ 0x180004FF4 (HampConnectionDeserializeActivities.c)
 *     CreateActivityCoordinatorPolicy @ 0x180019D40 (CreateActivityCoordinatorPolicy.c)
 *     SubscribeActivityCoordinatorPolicyInternal @ 0x18001A04C (SubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, size);
}
