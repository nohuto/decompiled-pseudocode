/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1402516EC
 * Callers:
 *     MiFlushCacheForAttributeChange @ 0x140251450 (MiFlushCacheForAttributeChange.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiSetIoPfnNodeCellsActive @ 0x140314080 (MiSetIoPfnNodeCellsActive.c)
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiValidateInPagePrepare @ 0x14038DF70 (MiValidateInPagePrepare.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x1406EEDE8 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F8760 (MiDeleteStaleCacheMaps.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x1406F8E8C (MiIoPfnTreeExclusionCompatible.c)
 *     MiMakeIoRangePermanent @ 0x1406F93D0 (MiMakeIoRangePermanent.c)
 *     MiCombiningInProgress @ 0x1407094C0 (MiCombiningInProgress.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 *     MiValidateSectionUnmap @ 0x1408817F8 (MiValidateSectionUnmap.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlFlushTbAllPartitions @ 0x1402517D0 (HvlFlushTbAllPartitions.c)
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     KxFlushNonGlobalTb @ 0x140252950 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // bl

  ++dword_140E2D8A8;
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
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
      (_ULARGE_INTEGER)ExSaPageGroupDescriptorArrayLock.Timer.DueTime.QuadPart,
      0LL,
      0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
