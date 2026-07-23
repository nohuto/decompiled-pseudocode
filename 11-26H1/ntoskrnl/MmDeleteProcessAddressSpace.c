/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x140B41970
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x1403C716C (PsReturnProcessQuota.c)
 *     MiGetSharedVm @ 0x140441D90 (MiGetSharedVm.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiGetVmPartition @ 0x140447EB0 (MiGetVmPartition.c)
 *     ExCleanupAutoExpandPushLock @ 0x14045C880 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 *     MiDeleteWorkingSetList @ 0x1404C9FB8 (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x1404CC9A4 (MiDeletePxeSharedLocks.c)
 *     MiUnlinkWorkingSet @ 0x1404CE3CC (MiUnlinkWorkingSet.c)
 *     MiReadProcessNumberOfLockedPages @ 0x1404D83F0 (MiReadProcessNumberOfLockedPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiDereferenceSlabIdentity @ 0x14070B6A4 (MiDereferenceSlabIdentity.c)
 *     MiDeleteAweInfo @ 0x14087F264 (MiDeleteAweInfo.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140A05C20 (PspChangeJobMemoryUsageByProcess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbp
  char *v3; // rbx
  ULONG_PTR BugCheckParameter4; // r9
  _QWORD *v5; // rax
  ULONG_PTR v6; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v9; // rax
  void *v10; // rcx
  __int64 *SharedVm; // rbx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 ProcessPartition; // r15
  __int64 v15; // rsi
  _DWORD *v16; // rcx
  ULONG *VmPartition; // rax
  void *v18; // rcx
  void *v19; // rcx
  unsigned __int8 v20; // dl

  v1 = BugCheckParameter2 + 1024;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1024);
  v3 = *(char **)(BugCheckParameter2 + 920);
  BugCheckParameter4 = MiReadProcessNumberOfLockedPages(BugCheckParameter2);
  if ( BugCheckParameter4 )
  {
    if ( v3 && *((_QWORD *)v3 + 2) && *((_DWORD *)v3 + 7) )
    {
      v5 = *(_QWORD **)v3;
      v6 = 0LL;
      while ( v5 )
      {
        v6 = (ULONG_PTR)v5;
        v5 = (_QWORD *)*v5;
      }
      if ( !v6 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v3 + 1); i; i = (_QWORD *)*i )
          v6 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v6, 0LL, *(_QWORD *)(v6 + 24), BugCheckParameter4);
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, BugCheckParameter4, (ULONG_PTR)v3);
  }
  if ( v3 )
  {
    for ( j = v3; ; j = v3 + 8 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ExFreePoolWithTag(v10, 0);
      }
      if ( j != v3 )
        break;
    }
    ExFreePoolWithTag(v3, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v12 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter2);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v13, 25LL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  MiReturnResident(ProcessPartition, 0x19uLL);
  v15 = *(_QWORD *)(BugCheckParameter2 + 1040);
  if ( v15 )
  {
    v16 = *(_DWORD **)(v15 + 1296);
    if ( v16 )
      MiDeleteAweInfo(v16, BugCheckParameter2);
    ExCleanupAutoExpandPushLock(v15 + 1312);
  }
  if ( SharedVm[5] )
  {
    if ( (*(_DWORD *)(v1 + 184) & 0xF) == 1 )
      VmPartition = &MiSystemPartition;
    else
      VmPartition = (ULONG *)MiGetVmPartition(v1);
    MiEmptyPageAccessLog((__int64)VmPartition, (_QWORD *)SharedVm[5]);
    SharedVm[5] = 0LL;
  }
  v18 = (void *)SharedVm[4];
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    SharedVm[4] = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 496) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2, -25LL, BugCheckParameter2, 0LL);
  MiReturnCommit(ProcessPartition, 25 - v12, 0);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  v19 = *(void **)(BugCheckParameter2 + 1912);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = *(_BYTE *)(BugCheckParameter2 + 1774);
  if ( v20 != 0xFF )
    MiDereferenceSlabIdentity(ProcessPartition, v20);
}
