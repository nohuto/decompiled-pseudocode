/*
 * XREFs of MiGetWsleContents @ 0x140297070
 * Callers:
 *     MiActivePageCombineCandidate @ 0x140295F90 (MiActivePageCombineCandidate.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiOutSwapWorkingSetPte @ 0x140296850 (MiOutSwapWorkingSetPte.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402ECD70 (MiConfirmFaultClusterDescriptor.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiLockVirtualMemoryVa @ 0x140318C10 (MiLockVirtualMemoryVa.c)
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036AEA8 (MiInitializeCopyOnWritePacket.c)
 *     MiMakeDriverPageStayResident @ 0x14038A698 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404AE9B8 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E9984 (MiQueryPteAddResidentAttributes.c)
 *     MiUnmapKernelScp @ 0x1404F6C64 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406EEED0 (MiDiscardPte.c)
 *     MiTrimPoisonedPage @ 0x1406FFBBC (MiTrimPoisonedPage.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)v2;
    if ( (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v9 & 0x20) != 0 )
            v6 = v3 | 0x20;
          v3 = v6 | 0x42;
          if ( (v9 & 0x42) == 0 )
            v3 = v6;
        }
      }
    }
  }
  v4 = v3;
  result = HIBYTE(v3);
  LOBYTE(result) = (16 * ((v4 >> 60) & 7)) | result & 0xF;
  return result;
}
