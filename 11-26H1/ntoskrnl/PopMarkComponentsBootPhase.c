/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140BFAE30
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     MmIsAddressValid @ 0x140444500 (MmIsAddressValid.c)
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     HvlMarkHiberPhase @ 0x1405BF26C (HvlMarkHiberPhase.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405FC318 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x140624640 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x14064072C (VfIsVerifierExtensionEnabled.c)
 *     DifMarkHiberPhase @ 0x14064B950 (DifMarkHiberPhase.c)
 *     FirstEntrySList @ 0x140730C80 (FirstEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumePrepare @ 0x140BF144C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140BF2E94 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140BF2F24 (KeMarkPcrHiberPhase.c)
 *     PopSstInvokeNotificationHandlers @ 0x140BF9490 (PopSstInvokeNotificationHandlers.c)
 *     PopMarkHiberPhase @ 0x140BFB160 (PopMarkHiberPhase.c)
 *     MiConvertHiberPhasePages @ 0x140C00AE4 (MiConvertHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140C01120 (MmMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(char *Address)
{
  unsigned int v1; // ebx
  PVOID *i; // rdi
  __int64 v4; // rdx
  PSLIST_ENTRY j; // rdi
  char *v6; // rbp
  __int64 v7; // rdi
  struct _KTHREAD *k; // rbx
  __int64 v9; // rdx
  struct _KTHREAD *m; // rbx

  v1 = 0;
  if ( !byte_140F0FDA1 )
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
    for ( j = FirstEntrySList(&stru_140E26950); j; j = j->Next )
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
    if ( VslpReservedTransferLock.KernelStack )
    {
      v7 = 0LL;
      do
      {
        PoSetHiberRange(
          0LL,
          0x10000u,
          *(PVOID *)(v7 + *(_QWORD *)&VslpReservedTransferLock.CurrentRunTime),
          *(_QWORD *)(v7 + *(_QWORD *)&VslpReservedTransferLock.CurrentRunTime + 8),
          0x52706B53u);
        ++v6;
        v7 += 16LL;
      }
      while ( v6 < VslpReservedTransferLock.KernelStack );
    }
    PoSetHiberRange(
      0LL,
      0x10000u,
      KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread,
      (unsigned __int16)KiMaximumGroups << 8,
      0x6467654Bu);
    PoSetHiberRange(
      0LL,
      0x10000u,
      *(PVOID *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112],
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
    for ( k = *(struct _KTHREAD **)&PopWeakChargerLock.SavedApcStateFill[40];
          k != (struct _KTHREAD *)&PopWeakChargerLock.SavedApcStateFill[40];
          k = *(struct _KTHREAD **)&k->Header.Lock )
    {
      PoSetHiberRange(0LL, 0x10000u, k, 0x28uLL, 0x6E72654Bu);
      guard_dispatch_icall_no_overrides(k->QuantumTarget, v9);
    }
    for ( m = (struct _KTHREAD *)stru_140F10828.FirstArgument;
          m != (struct _KTHREAD *)&stru_140F10828.FirstArgument;
          m = *(struct _KTHREAD **)&m->Header.Lock )
    {
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    }
    PopSstInvokeNotificationHandlers(1u);
    if ( (dword_140F0FD40 & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 48);
    Address[2] = 1;
  }
  Address[24] = 1;
}
