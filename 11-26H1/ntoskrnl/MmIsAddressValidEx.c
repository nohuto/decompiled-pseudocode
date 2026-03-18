/*
 * XREFs of MmIsAddressValidEx @ 0x14034DFD0
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14024E9A0 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034DB40 (RtlpHpSegPageRangeShrink.c)
 *     KeCapturePersistentThreadState @ 0x14034F2C0 (KeCapturePersistentThreadState.c)
 *     RtlpHpVsChunkFree @ 0x1403532B0 (RtlpHpVsChunkFree.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiQueryVpabAccessedState @ 0x1404646AC (MiQueryVpabAccessedState.c)
 *     KiIsAddressRangeValid @ 0x1404B11EC (KiIsAddressRangeValid.c)
 *     IopIsAddressRangeValid @ 0x1404EC1EC (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1405C6FD0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405C7A20 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x1405C97BC (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405C9834 (IopGetMaxValidMemorySizeDown.c)
 *     IopLogCallbackError @ 0x1405C9AA4 (IopLogCallbackError.c)
 *     IopRemovePageDumpRange @ 0x1405C9CAC (IopRemovePageDumpRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405CE230 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D4728 (IoAddPagesForPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x1405D5734 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForProcessorData @ 0x1405D5CAC (IopMarkPagesForProcessorData.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E71B4 (KeValidateBugCheckCallbackRecord.c)
 *     KiCollectFullProcessName @ 0x1405E7B24 (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405E7B6C (KiCollectTriageDumpDataBlocks.c)
 *     KiDumpParameterImages @ 0x1405E838C (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1405E8854 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405E8A4C (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1405E8B1C (KiValidateComponentName.c)
 *     KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405EBC60 (KiSchedulerAssistBugCheckAddPagesCallback.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405FABB0 (KiGetCurrentKernelShadowStackBounds.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x1406D2E70 (ExpHeapDumpEnumLargeAllocs.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406E8B80 (MiFreedUnusedPfnPagesDpc.c)
 *     MiAddPartitionToCrashDump @ 0x1406F5F4C (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x1406F62F4 (MiAddUnicodeStringToCrashDump.c)
 *     MiDbgCopyMemoryInternal @ 0x1406FD8F0 (MiDbgCopyMemoryInternal.c)
 *     MiDbgIsPfn @ 0x1406FE024 (MiDbgIsPfn.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406FF57C (MiKernelWriteToExecutableMemory.c)
 *     ViFreeTrackedPool @ 0x140C469AC (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

char __fastcall MmIsAddressValidEx(__int64 a1)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r11
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-30h]
  unsigned __int64 v11; // [rsp+8h] [rbp-28h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
    v11 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = 4LL;
    while ( 1 )
    {
      v4 = *(&v10 + v3--);
      v5 = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v6 = *(_QWORD *)v4;
        if ( (v5 & 1) == 0 )
          return 0;
        if ( ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
              if ( (v9 & 0x20) != 0 )
                LOBYTE(v6) = v5 | 0x20;
              LOBYTE(v5) = v6 | 0x42;
              if ( (v9 & 0x42) == 0 )
                LOBYTE(v5) = v6;
            }
          }
        }
      }
      if ( (v5 & 1) == 0 )
        return 0;
      if ( (v5 & 0x80u) != 0LL )
        break;
      if ( !v3 )
        return 1;
    }
    if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL || (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL )
      return 1;
  }
  return 0;
}
