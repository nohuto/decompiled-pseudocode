/*
 * XREFs of MiGetWsleContents @ 0x1402965D0
 * Callers:
 *     MiActivePageCombineCandidate @ 0x1402954F0 (MiActivePageCombineCandidate.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiOutSwapWorkingSetPte @ 0x140295DB0 (MiOutSwapWorkingSetPte.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036CC48 (MiInitializeCopyOnWritePacket.c)
 *     MiMakeDriverPageStayResident @ 0x14038C448 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404A8048 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E2D34 (MiQueryPteAddResidentAttributes.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 *     MiTrimPoisonedPage @ 0x14070488C (MiTrimPoisonedPage.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
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
