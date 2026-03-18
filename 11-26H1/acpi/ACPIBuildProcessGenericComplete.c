/*
 * XREFs of ACPIBuildProcessGenericComplete @ 0x140029560
 * Callers:
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1400291A0 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessSynchronizationList @ 0x140029460 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1400582C0 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessPowerResourceFailure @ 0x1400584A0 (ACPIBuildProcessPowerResourceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x140058FA0 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIBuildProcessGenericComplete(_QWORD *Entry)
{
  void (__fastcall *v1)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v3; // rbx
  _QWORD **v4; // rdx
  PVOID *v5; // rax
  __int64 v6; // rcx

  v1 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))Entry[8];
  if ( v1 )
    v1(Entry[5], Entry[9], *((unsigned int *)Entry + 12));
  if ( (*((_DWORD *)Entry + 5) & 8) != 0 )
  {
    v3 = Entry[5];
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 732));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = (_QWORD **)*Entry;
  AcpiBuildDpcFlags |= 2u;
  if ( v4[1] != Entry || (v5 = (PVOID *)Entry[1], *v5 != Entry) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  v6 = Entry[7];
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    Entry[7] = 0LL;
  }
  ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, Entry);
  return 0LL;
}
