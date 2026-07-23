/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140C00E30
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 * Callees:
 *     MmIsAddressValid @ 0x14043D010 (MmIsAddressValid.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     HvlMarkHiberPhase @ 0x1405C1ADC (HvlMarkHiberPhase.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405FED68 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x140627690 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x14064430C (VfIsVerifierExtensionEnabled.c)
 *     DifMarkHiberPhase @ 0x14064F530 (DifMarkHiberPhase.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumePrepare @ 0x140BF744C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140BF8E94 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140BF8F24 (KeMarkPcrHiberPhase.c)
 *     PopSstInvokeNotificationHandlers @ 0x140BFF490 (PopSstInvokeNotificationHandlers.c)
 *     PopMarkHiberPhase @ 0x140C01160 (PopMarkHiberPhase.c)
 *     MiConvertHiberPhasePages @ 0x140C06CF4 (MiConvertHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140C07330 (MmMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(char *Address)
{
  unsigned int v1; // ebx
  PVOID *i; // rdi
  __int64 v4; // rdx
  PSLIST_ENTRY j; // rdi
  char *v6; // rbp
  __int64 v7; // rdi
  __int64 *k; // rbx
  __int64 v9; // rdx
  struct _KTHREAD *m; // rbx

  v1 = 0;
  if ( !byte_140F10921 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      if ( MmIsAddressValid(i[12]) )
        PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      if ( MmIsAddressValid(i[10]) )
        PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&stru_140E26A90); j; j = j->Next )
      KeMarkPcrHiberPhase((size_t *)j[-1].Next);
    guard_dispatch_icall_no_overrides(0LL, v4);
    PopMarkHiberPhase(Address);
    KdMarkHiberPhase();
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      if ( ViTrackIrqlQueue )
        PoSetHiberRange(0LL, 0x10000u, ViTrackIrqlQueue, 56LL * (unsigned int)ViTrackIrqlQueueLength, 0x72696656u);
      if ( (unsigned int)VfIsVerifierExtensionEnabled() && ViFnExtensionHiberFunc )
        PoSetHiberRange(0LL, 0x10000u, ViFnExtensionHiberFunc, 0LL, 0x72696656u);
    }
    DifMarkHiberPhase();
    BgkResumePrepare(0LL);
    RtlMarkHiberPhase();
    HvlMarkHiberPhase();
    v6 = 0LL;
    if ( VslpReservedTransferLock.FirstArgument )
    {
      v7 = 0LL;
      do
      {
        PoSetHiberRange(
          0LL,
          0x10000u,
          *(PVOID *)(v7 + VslpHiberBootRanges),
          *(_QWORD *)(v7 + VslpHiberBootRanges + 8),
          0x52706B53u);
        ++v6;
        v7 += 16LL;
      }
      while ( v6 < VslpReservedTransferLock.FirstArgument );
    }
    PoSetHiberRange(
      0LL,
      0x10000u,
      KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink,
      (unsigned __int16)KiMaximumGroups << 8,
      0x6467654Bu);
    PoSetHiberRange(
      0LL,
      0x10000u,
      KiSupervisorXStateFeaturesLock.SchedulerApc.Thread,
      (unsigned int)(4 * KeMaximumProcessors),
      0x6467654Bu);
    KeMarkDynamicTracingHiberPhase();
    MmMarkHiberPhase();
    if ( IopNumTriageDumpDataBlocks )
    {
      do
      {
        PoSetHiberRange(
          0LL,
          0x10000u,
          (PVOID)IopTriageDumpDataBlocks[2 * v1],
          IopTriageDumpDataBlocks[2 * v1 + 1] - IopTriageDumpDataBlocks[2 * v1],
          0x42706D44u);
        ++v1;
      }
      while ( v1 < IopNumTriageDumpDataBlocks );
    }
    for ( k = (__int64 *)PopShutdownNotificationCallbackList;
          k != (__int64 *)&PopShutdownNotificationCallbackList;
          k = (__int64 *)*k )
    {
      PoSetHiberRange(0LL, 0x10000u, k, 0x28uLL, 0x6E72654Bu);
      guard_dispatch_icall_no_overrides(k[4], v9);
    }
    for ( m = (struct _KTHREAD *)PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
          m != (struct _KTHREAD *)&PpmIdlePolicyLock.SystemAffinityTokenListHead;
          m = *(struct _KTHREAD **)&m->Header.Lock )
    {
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    }
    PopSstInvokeNotificationHandlers(1u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 48);
    Address[2] = 1;
  }
  Address[24] = 1;
}
