/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1409C5C50
 * Callers:
 *     DifNtGetCompleteWnfStateSubscriptionWrapper @ 0x14067C720 (DifNtGetCompleteWnfStateSubscriptionWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1409C5DB8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1409C7984 (ExpWnfCompleteThreadSubscriptions.c)
 */

NTSTATUS __cdecl NtGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // ebx
  __int64 v10; // rsi
  int v11; // r9d
  int v13; // [rsp+38h] [rbp-30h]
  __int64 ULong64FromUser; // [rsp+40h] [rbp-28h] BYREF

  ULong64FromUser = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v9 = -1073741811;
    v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[3].BasePriority;
    if ( v10 )
    {
      if ( !OldDescriptorStateName
        || !OldSubscriptionId
        || OldDescriptorEventMask
        && (!OldDescriptorStatus || OldDescriptorStatus == -1073741267)
        && (ULong64FromUser = RtlReadULong64FromUser(OldDescriptorStateName),
            v13 = RtlReadULong64FromUser(OldSubscriptionId),
            v9 = ExpWnfCompleteThreadSubscriptions(v10, (unsigned int)&ULong64FromUser, v13, v11, OldDescriptorStatus),
            v9 >= 0) )
      {
        if ( DescriptorSize )
        {
          if ( DescriptorSize < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(NewDeliveryDescriptor, DescriptorSize, 8u);
            v9 = ExpWnfDeliverThreadNotifications(v10, NewDeliveryDescriptor, DescriptorSize);
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741796;
  }
  KeLeaveCriticalRegion();
  return v9;
}
