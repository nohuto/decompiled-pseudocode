/*
 * XREFs of ExpPrmNotifyInterfaceChange @ 0x14083EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x1406CFF00 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x14083EDB0 (ExpAcquirePrmInterface.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall ExpPrmNotifyInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rax
  signed __int32 v5; // ebp
  __int64 v6; // rdx

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v2 )
  {
    v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v4 )
    {
      v5 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.MutantListHead,
             0,
             2);
      if ( *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.ForegroundLossTime )
        RtlFreeAnsiString((PUNICODE_STRING)&ExSaPageGroupDescriptorArrayLock.AbCompletedIoQoSBoostCount);
      if ( v5 == 2 )
      {
        ExpPrmWaitForForZeroActiveCount();
        guard_dispatch_icall_no_overrides((__int64)ExSaPageGroupDescriptorArrayLock.PropagateBoostsEntry.Next, v6);
        memset_0(&ExSaPageGroupDescriptorArrayLock.SchedulerSharedSystemSlot, 0, 0x40uLL);
      }
    }
  }
  else
  {
    v3 = ExpAcquirePrmInterface(
           *((UNICODE_STRING **)NotificationStructure + 5),
           1,
           &ExSaPageGroupDescriptorArrayLock.SchedulerSharedSystemSlot);
    if ( v3 >= 0 )
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.MutantListHead, 2);
    else
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.MutantListHead, 0);
  }
  return (unsigned int)v3;
}
