/*
 * XREFs of ZwGetCompleteWnfStateSubscription @ 0x140729F00
 * Callers:
 *     DifZwGetCompleteWnfStateSubscriptionWrapper @ 0x1406AAF30 (DifZwGetCompleteWnfStateSubscriptionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(OldDescriptorStateName);
}
