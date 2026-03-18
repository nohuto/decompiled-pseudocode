/*
 * XREFs of ExpPrmTargetDeviceChangeCallback @ 0x14083EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x1406CFF00 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x14083EDB0 (ExpAcquirePrmInterface.c)
 *     IoUnregisterPlugPlayNotification @ 0x140B319C0 (IoUnregisterPlugPlayNotification.c)
 */

__int64 __fastcall ExpPrmTargetDeviceChangeCallback(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v8; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v2 )
  {
    _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.MutantListHead, 0);
    ExpPrmWaitForForZeroActiveCount();
    guard_dispatch_icall_no_overrides((__int64)ExSaPageGroupDescriptorArrayLock.PropagateBoostsEntry.Next, v4);
    memset_0(&ExSaPageGroupDescriptorArrayLock.SchedulerSharedSystemSlot, 0, 0x40uLL);
    return (unsigned int)v3;
  }
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v5 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.MutantListHead, 0, 2) == 2 )
    {
      ExpPrmWaitForForZeroActiveCount();
      guard_dispatch_icall_no_overrides((__int64)ExSaPageGroupDescriptorArrayLock.PropagateBoostsEntry.Next, v6);
      memset_0(&ExSaPageGroupDescriptorArrayLock.SchedulerSharedSystemSlot, 0, 0x40uLL);
    }
    Blink = ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink;
    ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink = 0LL;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v8 )
  {
    Blink = ExSaPageGroupDescriptorArrayLock.MutantListHead.Blink;
    v3 = ExpAcquirePrmInterface(
           (UNICODE_STRING *)&ExSaPageGroupDescriptorArrayLock.AbCompletedIoQoSBoostCount,
           0,
           &ExSaPageGroupDescriptorArrayLock.SchedulerSharedSystemSlot);
    if ( v3 >= 0 )
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.MutantListHead, 2);
    else
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.MutantListHead, 0);
LABEL_17:
    if ( Blink )
      IoUnregisterPlugPlayNotification(Blink);
  }
  return (unsigned int)v3;
}
