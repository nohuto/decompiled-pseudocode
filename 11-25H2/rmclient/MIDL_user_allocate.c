/*
 * XREFs of MIDL_user_allocate @ 0x180002E30
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002E60 (HamConnectForStateChangeNotifications.c)
 *     HampConnectionDeserializeActivities @ 0x180005128 (HampConnectionDeserializeActivities.c)
 *     HamPlmNotifyNewSession @ 0x180011650 (HamPlmNotifyNewSession.c)
 *     HampCltDelayCloseContextCreate @ 0x18001B560 (HampCltDelayCloseContextCreate.c)
 *     CreateActivityCoordinatorPolicy @ 0x18001B810 (CreateActivityCoordinatorPolicy.c)
 *     SubscribeActivityCoordinatorPolicyInternal @ 0x18001BB08 (SubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, size);
}
