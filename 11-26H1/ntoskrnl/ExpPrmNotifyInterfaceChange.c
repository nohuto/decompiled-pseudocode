/*
 * XREFs of ExpPrmNotifyInterfaceChange @ 0x140845120
 * Callers:
 *     <none>
 * Callees:
 *     ExpPrmWaitForForZeroActiveCount @ 0x1406D3F30 (ExpPrmWaitForForZeroActiveCount.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpAcquirePrmInterface @ 0x140844FF0 (ExpAcquirePrmInterface.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
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
             (volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry,
             0,
             2);
      if ( ExSaPageGroupDescriptorArrayLock.OtherOperationCount )
        RtlFreeAnsiString((PUNICODE_STRING)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
      if ( v5 == 2 )
      {
        ExpPrmWaitForForZeroActiveCount();
        guard_dispatch_icall_no_overrides(*(__int64 *)&ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[24], v6);
        memset_0(&ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[16], 0, 0x40uLL);
      }
    }
  }
  else
  {
    v3 = ExpAcquirePrmInterface(
           *((UNICODE_STRING **)NotificationStructure + 5),
           1,
           &ExSaPageGroupDescriptorArrayLock.PriorityFloorCounts[16]);
    if ( v3 >= 0 )
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry, 2);
    else
      _InterlockedExchange((volatile __int32 *)&ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry, 0);
  }
  return (unsigned int)v3;
}
