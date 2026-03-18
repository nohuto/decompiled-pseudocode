/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14024FD8C
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x14024FAF0 (MiFlushCacheForAttributeChange.c)
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiSetIoPfnNodeCellsActive @ 0x140312050 (MiSetIoPfnNodeCellsActive.c)
 *     MiChangePageAttributeBatch @ 0x140368E1C (MiChangePageAttributeBatch.c)
 *     MiValidateInPagePrepare @ 0x14038C1C0 (MiValidateInPagePrepare.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x1406EA148 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x1406F4220 (MiIoPfnTreeExclusionCompatible.c)
 *     MiMakeIoRangePermanent @ 0x1406F4764 (MiMakeIoRangePermanent.c)
 *     MiCombiningInProgress @ 0x1407047F0 (MiCombiningInProgress.c)
 *     MiRemovePhysicalMemory @ 0x140866D5C (MiRemovePhysicalMemory.c)
 *     MiValidateSectionUnmap @ 0x14087B3F8 (MiValidateSectionUnmap.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlFlushTbAllPartitions @ 0x14024FE70 (HvlFlushTbAllPartitions.c)
 *     KiFlushAddressSpaceTb @ 0x14024FEF8 (KiFlushAddressSpaceTb.c)
 *     KxFlushNonGlobalTb @ 0x140250FF0 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x14025128C (KxFlushEntireTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // bl

  ++dword_140E2D728;
  HvlFlushTbAllPartitions();
  if ( (HvlEnlightenments & 4) != 0
    && ((HvlEnlightenments & 2) != 0
     || (HvlEnlightenments & 0x800000) != 0 && !KiFlushPcid
     || (_DWORD)KeNumberProcessors_0 != 1) )
  {
    LOBYTE(v0) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, v0);
  }
  else if ( KiKvaShadow )
  {
    result = KxFlushNonGlobalTb(2LL);
  }
  else
  {
    result = KxFlushEntireTb(2LL);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v2, 15LL);
    }
    guard_dispatch_icall_no_overrides(ExSaPageGroupDescriptorArrayLock.Timer.Dpc, 0LL, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
