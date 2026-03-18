/*
 * XREFs of CmShutdownSystem2 @ 0x1406E24C0
 * Callers:
 *     CmShutdownSystem @ 0x140854284 (CmShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     CmpUnJoinClassOfTrust @ 0x1404D3C6C (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpFreeAllMemory @ 0x1408542E0 (CmpFreeAllMemory.c)
 *     CmFcShutdownSystem @ 0x140854C94 (CmFcShutdownSystem.c)
 *     CmpFlushTraceLoggingProvider @ 0x14085523C (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownRundownComplete @ 0x1408557B0 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStop @ 0x140855890 (CmpTraceShutdownStop.c)
 *     CmpWaitForShutdownRundownRelease @ 0x14085EACC (CmpWaitForShutdownRundownRelease.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B11FC (UNLOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     LOCK_HIVE_LOAD @ 0x1408B45EC (LOCK_HIVE_LOAD.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1408B7ECC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1408B7F90 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x1408B81BC (CmpCmdHiveClose.c)
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpDoFileSetSizeEx @ 0x140AAA978 (CmpDoFileSetSizeEx.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 CmShutdownSystem2()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rcx
  unsigned int v5; // edi
  struct _PRIVILEGE_SET *v6; // rcx
  __int64 NextActiveHive; // rax
  __int64 v8; // rbx
  int v9; // ebx
  __int64 **v10; // rax
  struct _PRIVILEGE_SET *v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState.ApcListHead[1], 0, 32);
  CmFcShutdownSystem(2LL);
  CmpWaitForShutdownRundownRelease(v1, v0, v2, v3, 0LL, 0LL);
  CmpTraceShutdownRundownComplete();
  if ( PspSiloMonitorLock.Header.WaitListHead.Flink )
    ObfDereferenceObjectWithTag(PspSiloMonitorLock.Header.WaitListHead.Flink, 0x746C6644u);
  CmpFlushTraceLoggingProvider();
  LOCK_HIVE_LOAD();
  CmpLockRegistryExclusive();
  for ( i = 0LL; ; i = v8 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v8 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    CmpUnJoinClassOfTrust(NextActiveHive);
    CmpVERemoveHiveFromSIDMappingTable(v8);
    v5 = *(_DWORD *)(v8 + 280) + 4096;
    CmpAttachToRegistryProcess(&ApcState);
    HvHiveCleanup(v8);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( *(_BYTE *)(v8 + 4792)
      && (*(_DWORD *)(v8 + 160) & 0x8000) == 0
      && (__int64)(*(_QWORD *)(v8 + 1808) - v5) > 0x100000 )
    {
      CmpDoFileSetSizeEx(v8, 0LL, v5, 0LL);
    }
    CmpCmdHiveClose(v8);
    v6 = *(struct _PRIVILEGE_SET **)(v8 + 4800);
    if ( v6 )
      CmpVolumeContextDecrementRefCount(v6);
  }
  HvShutdownComplete = 1;
  if ( ((__int64)stru_140F10828.KernelShadowStackInitial & 8) != 0 && !LOBYTE(ExpPlatformBinaryLock.SListFaultAddress) )
    CmpFreeAllMemory();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  v9 = 0;
  v10 = &CmpWellKnownVolumeList;
  if ( CmpWellKnownVolumeList )
  {
    do
    {
      v11 = (struct _PRIVILEGE_SET *)v10[1];
      if ( v11 )
        CmpVolumeContextDecrementRefCount(v11);
      v10 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v9];
    }
    while ( *v10 );
  }
  return CmpTraceShutdownStop();
}
