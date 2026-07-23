/*
 * XREFs of ExpPrmTargetDeviceChangeCallback @ 0x140845210
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x1406D3F30 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x140844FF0 (ExpAcquirePrmInterface.c)
 *     IoUnregisterPlugPlayNotification @ 0x140B33BC0 (IoUnregisterPlugPlayNotification.c)
 */

__int64 __fastcall ExpPrmTargetDeviceChangeCallback(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  void *v7; // rdi
  __int64 v8; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v2 )
  {
    _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry, 0);
    ExpPrmWaitForForZeroActiveCount();
    guard_dispatch_icall_no_overrides(*(__int64 *)&ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[24], v4);
    memset_0(&ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[16], 0, 0x40uLL);
    return (unsigned int)v3;
  }
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v5 )
  {
    if ( _InterlockedCompareExchange(
           (volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry,
           0,
           2) == 2 )
    {
      ExpPrmWaitForForZeroActiveCount();
      guard_dispatch_icall_no_overrides(*(__int64 *)&ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[24], v6);
      memset_0(&ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[16], 0, 0x40uLL);
    }
    v7 = *(void **)ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts;
    *(_QWORD *)ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts = 0LL;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v8 )
  {
    v7 = *(void **)ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts;
    v3 = ExpAcquirePrmInterface(
           (UNICODE_STRING *)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount,
           0,
           &ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[16]);
    if ( v3 >= 0 )
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry, 2);
    else
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry, 0);
LABEL_17:
    if ( v7 )
      IoUnregisterPlugPlayNotification(v7);
  }
  return (unsigned int)v3;
}
