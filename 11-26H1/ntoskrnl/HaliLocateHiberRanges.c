/*
 * XREFs of HaliLocateHiberRanges @ 0x140C0E620
 * Callers:
 *     <none>
 * Callees:
 *     HalpPciMarkHiberPhase @ 0x1404A93BC (HalpPciMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     HalpAcpiMarkHiberPhase @ 0x1404FD8A4 (HalpAcpiMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x140506200 (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14050ED24 (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x14057A014 (HalpTimerMarkHiberPhase.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140BF0664 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140BF1168 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140C0E870 (HalpIommuMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( MemoryMap )
  {
    if ( dword_140FBD200 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FBD208 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBD200 >> 12,
        0x446C6148u);
    if ( dword_140FBD3E0 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FBD3E8 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBD3E0 >> 12,
        0x446C6148u);
    if ( dword_140FBD2E0 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FBD2E8 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBD2E0 >> 12,
        0x446C6148u);
    if ( dword_140FBD4C0 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FBD4C8 >> 12),
        (unsigned __int64)(unsigned int)dword_140FBD4C0 >> 12,
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
    if ( HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread )
      PoSetHiberRange(
        0LL,
        0x10000u,
        HalpDeviceBlockUnblockPushLock.WaitBlock[0].Thread,
        *(unsigned int *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[16],
        0x556C6148u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}
