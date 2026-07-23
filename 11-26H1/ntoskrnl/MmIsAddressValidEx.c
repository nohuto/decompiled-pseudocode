/*
 * XREFs of MmIsAddressValidEx @ 0x140350050
 * Callers:
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140250300 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 *     KiIsAddressRangeValid @ 0x1404AA87C (KiIsAddressRangeValid.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1405C98A0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405CA2F0 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x1405CC08C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405CC104 (IopGetMaxValidMemorySizeDown.c)
 *     IopLogCallbackError @ 0x1405CC374 (IopLogCallbackError.c)
 *     IopRemovePageDumpRange @ 0x1405CC57C (IopRemovePageDumpRange.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405D0A40 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x1405D7F24 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForProcessorData @ 0x1405D849C (IopMarkPagesForProcessorData.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405E9B24 (KeValidateBugCheckCallbackRecord.c)
 *     KiCollectFullProcessName @ 0x1405EA494 (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405EA4DC (KiCollectTriageDumpDataBlocks.c)
 *     KiDumpParameterImages @ 0x1405EACFC (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1405EB1C4 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1405EB3BC (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1405EB48C (KiValidateComponentName.c)
 *     KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405EE5D0 (KiSchedulerAssistBugCheckAddPagesCallback.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x1405FD5D0 (KiGetCurrentKernelShadowStackBounds.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x1406D6EA0 (ExpHeapDumpEnumLargeAllocs.c)
 *     CmFcpIsValidMemoryRange @ 0x1406E7458 (CmFcpIsValidMemoryRange.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406ED820 (MiFreedUnusedPfnPagesDpc.c)
 *     MiAddPartitionToCrashDump @ 0x1406FABBC (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x1406FAF64 (MiAddUnicodeStringToCrashDump.c)
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 *     MiDbgIsPfn @ 0x140702CF4 (MiDbgIsPfn.c)
 *     MiKernelWriteToExecutableMemory @ 0x14070424C (MiKernelWriteToExecutableMemory.c)
 *     ViFreeTrackedPool @ 0x140C4C9BC (ViFreeTrackedPool.c)
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
