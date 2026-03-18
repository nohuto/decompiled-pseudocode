/*
 * XREFs of HaliLocateHiberRanges @ 0x140C08410
 * Callers:
 *     <none>
 * Callees:
 *     HalpPciMarkHiberPhase @ 0x1404AFD2C (HalpPciMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 *     HalpAcpiMarkHiberPhase @ 0x140503FD4 (HalpAcpiMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x14050C790 (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1405152B4 (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x140577AE4 (HalpTimerMarkHiberPhase.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140BEA664 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140BEB168 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140C08660 (HalpIommuMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( MemoryMap )
  {
    if ( dword_140FBCE60 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FBCE68 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBCE60 >> 12,
        0x446C6148u);
    if ( dword_140FBD040 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FBD048 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBD040 >> 12,
        0x446C6148u);
    if ( dword_140FBCF40 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FBCF48 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBCF40 >> 12,
        0x446C6148u);
    if ( dword_140FBD120 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FBD128 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBD120 >> 12,
        0x446C6148u);
    HalpAcpiMarkHiberPhase(MemoryMap);
    HalpPciMarkHiberPhase(MemoryMap);
    HalpIommuMarkHiberPhase(MemoryMap);
    HalpExtEnvMarkHiberRegions(MemoryMap);
    HalpDmaMarkHiberAdapter(MemoryMap);
  }
  else
  {
    HalpMmAllocCtxMarkHiberPhase();
    HalpDmaMarkHiberAdapter(0LL);
    HalpIommuMarkHiberPhase(0LL);
    HalpExtEnvMarkHiberRegions(0LL);
    PoSetHiberRange(0LL, 0x10000u, HalpCR3Root, 0x1000uLL, 0x6F6C6148u);
    PoSetHiberRange(0LL, 0x10000u, HaliLocateHiberRanges, 0LL, 0x6F6C6148u);
    HalpExtMarkHiberPhase();
    if ( HalpMceErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpMceErrorSource, 0x3CCuLL, 0x576C6148u);
    if ( HalpCmcErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpCmcErrorSource, 0x3CCuLL, 0x576C6148u);
    PshedMarkHiberPhase();
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(PmAcpiDispatchTable + 8), 0LL, 0x416C6148u);
    guard_dispatch_icall_no_overrides(v3, v2);
    PoSetHiberRange(0LL, 0x10000u, off_140E00A20, 0LL, 0x506C6148u);
    guard_dispatch_icall_no_overrides(v5, v4);
    if ( HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink )
      PoSetHiberRange(
        0LL,
        0x10000u,
        HalpDeviceBlockUnblockPushLock.WaitBlock[1].WaitListEntry.Blink,
        *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[52],
        0x556C6148u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}
