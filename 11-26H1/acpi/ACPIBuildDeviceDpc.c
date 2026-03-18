/*
 * XREFs of ACPIBuildDeviceDpc @ 0x140028D70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x140027488 (ACPIPowerScheduleDpc.c)
 *     ACPIBuildProcessGenericList @ 0x1400290E4 (ACPIBuildProcessGenericList.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1400291A0 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessSynchronizationList @ 0x140029460 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int i; // eax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r8
  int v10; // ebx
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rcx

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  for ( i = AcpiBuildDpcFlags; (AcpiBuildDpcFlags & 2) != 0; i = AcpiBuildDpcFlags )
  {
    v5 = AcpiBuildQueueList;
    AcpiBuildDpcFlags = i & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
    {
      do
      {
        v6 = *(__int64 **)v5;
        if ( (*(_DWORD *)(v5 + 20) & 0x40) == 0 )
        {
          if ( v6[1] != v5
            || (v7 = *(__int64 ***)(v5 + 8), *v7 != (__int64 *)v5)
            || (*v7 = v6, v6[1] = (__int64)v7, v8 = *(_QWORD *)(v5 + 128), v9 = *(__int64 **)(v8 + 8), *v9 != v8) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v5 = v8;
          *(_QWORD *)(v5 + 8) = v9;
          *v9 = v5;
          *(_QWORD *)(v8 + 8) = v5;
          *(_DWORD *)(v5 + 20) &= ~0x1000u;
          *(_QWORD *)(v5 + 128) = 0LL;
        }
        v5 = (__int64)v6;
      }
      while ( v6 != &AcpiBuildQueueList );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    if ( (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList )
    {
      if ( (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList )
        ACPIBuildProcessGenericList(&AcpiBuildOperationRegionList, &AcpiBuildOperationRegionDispatch, 4LL);
      if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
        || (unsigned int)ACPIBuildProcessGenericList(&AcpiBuildPowerResourceList, &AcpiBuildPowerResourceDispatch, 7LL) != 259 )
      {
        if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
        {
          ACPIBuildProcessGenericList(&AcpiBuildDelayedDependencyList, &AcpiBuildDelayedDependencyDispatch, 5LL);
          if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
            && (AcpiOverrideAttributes & 0x80000) != 0 )
          {
            ACPIBuildSynchronizationRequestInternal(
              RootDeviceExtension,
              (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
              RootDeviceExtension,
              v11,
              0);
          }
        }
        if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
          ACPIBuildProcessGenericList(&AcpiBuildDeviceList, &AcpiBuildDeviceDispatch, 34LL);
        if ( (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList )
          ACPIBuildProcessGenericList(&AcpiBuildThermalZoneList, &AcpiBuildThermalZoneDispatch, 10LL);
        if ( (__int64 *)AcpiBuildDeviceList == &AcpiBuildDeviceList
          && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
          && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
          && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
          && (__int64 *)AcpiBuildThermalZoneList == &AcpiBuildThermalZoneList )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
          v12 = AcpiPowerDelayedQueueList;
          if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
          {
            v13 = qword_140090C38;
            v14 = (__int64 *)qword_140090C48;
            *(_QWORD *)qword_140090C38 = &AcpiPowerQueueList;
            qword_140090C48 = v13;
            *(_QWORD *)(v12 + 8) = v14;
            *v14 = v12;
            qword_140090C38 = (__int64)&AcpiPowerDelayedQueueList;
            AcpiPowerDelayedQueueList = (__int64)&AcpiPowerDelayedQueueList;
            ACPIPowerScheduleDpc();
          }
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
        }
        if ( AcpiBuildSynchronizationList != &AcpiBuildSynchronizationList )
          ACPIBuildProcessSynchronizationList();
        if ( AcpiBuildSpecialSynchronizationList != &AcpiBuildSpecialSynchronizationList )
          ACPIBuildProcessSpecialSynchronizationList();
      }
      KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    }
    else
    {
      v10 = ACPIBuildProcessGenericList(&AcpiBuildRunMethodList, &AcpiBuildRunMethodDispatch, 10LL);
      KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
      if ( v10 != 259 )
        AcpiBuildDpcFlags |= 2u;
    }
  }
  AcpiBuildDpcFlags = i & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
