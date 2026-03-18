/*
 * XREFs of MiReferenceControlAreaFile @ 0x140448EB0
 * Callers:
 *     MiInitializeQueryVadInfo @ 0x14091FE40 (MiInitializeQueryVadInfo.c)
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x1409C3B30 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiParseComAndCetHeaders @ 0x1409CC26C (MiParseComAndCetHeaders.c)
 *     MiLogRelocationFaults @ 0x1409CC690 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x1409CC82C (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x1409CC9F0 (MiParseImageLoadConfig.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 *     MmGetFileNameForAddress @ 0x1409FBE08 (MmGetFileNameForAddress.c)
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 *     MiCachedPageNotifyPf @ 0x140A5CB60 (MiCachedPageNotifyPf.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 *     MmSectionToSectionObjectPointers @ 0x140A67440 (MmSectionToSectionObjectPointers.c)
 *     MiCallImageNotify @ 0x140A790C8 (MiCallImageNotify.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     MiAllowImageMap @ 0x140B1FE0C (MiAllowImageMap.c)
 *     MmGetFileNameForSection @ 0x140B261A4 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140B5385C (MiLoadUserSymbols.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 *     MmCreateSpecialImageSection @ 0x140B7F20C (MmCreateSpecialImageSection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rax
  signed __int64 v4; // rbx
  unsigned int v5; // edx
  ULONG_PTR v6; // rbx
  __int64 v7; // rax
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  unsigned __int64 v10; // rbp
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 > 1 )
    goto LABEL_12;
  if ( v5 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFuLL);
    if ( v7 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v6, 0x10uLL, v7 + 15);
    _m_prefetchw((const void *)(a1 + 64));
    v8 = *(_QWORD *)(a1 + 64);
    while ( (v8 & 0xF) == 0 )
    {
      if ( v6 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v8 + 15, v8);
      if ( v9 == v8 )
        goto LABEL_12;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL);
LABEL_12:
    ObpTraceObjectReferenceIfActive(v6 - 48, 1, 0x63536D4Du);
    if ( v6 )
      return v6;
  }
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v6 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
  if ( (_BYTE)v10 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 72), retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 72), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 72));
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(a1 + 72), retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
  }
  return v6;
}
