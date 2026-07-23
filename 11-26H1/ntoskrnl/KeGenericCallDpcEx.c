/*
 * XREFs of KeGenericCallDpcEx @ 0x1403CC184
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402A6920 (MiFreeUnusedSlabPages.c)
 *     MiJumpStack @ 0x1403CB1B0 (MiJumpStack.c)
 *     KeSetSystemTime @ 0x1403CBB20 (KeSetSystemTime.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiDemoteSlabEntries @ 0x140500334 (MiDemoteSlabEntries.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     ExpTrackTableInsertLimit @ 0x1406D0D90 (ExpTrackTableInsertLimit.c)
 *     MiFreeUnusedPfnPages @ 0x1406ED570 (MiFreeUnusedPfnPages.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1406FC6DC (MiInitializeWorkingSetManagerParameters.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x14070B4B0 (MiDeleteSlabEntriesForIdentity.c)
 *     MiZeroPageCalibrate @ 0x140715C7C (MiZeroPageCalibrate.c)
 *     ExpCapturePoolTrackTablesPrecise @ 0x140777D38 (ExpCapturePoolTrackTablesPrecise.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 *     MmSetPermanentCacheAttribute @ 0x140870BD0 (MmSetPermanentCacheAttribute.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140885030 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1408852E0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     ExpAeThresholdInitialization @ 0x140CEDB34 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiAcquireDpcCorralLock @ 0x1403CC370 (KiAcquireDpcCorralLock.c)
 *     KiInitiateGenericCallDpc @ 0x1403CC3E8 (KiInitiateGenericCallDpc.c)
 *     KiReleaseDpcCorralLock @ 0x1403CC4D0 (KiReleaseDpcCorralLock.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405F6CF0 (KiCpuPartitionCheckGenericDpc.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeGenericCallDpcEx(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  char v5; // di
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v9[2]; // [rsp+38h] [rbp-19h] BYREF
  ULONG_PTR BugCheckParameter2[8]; // [rsp+48h] [rbp-9h] BYREF
  __int16 v11; // [rsp+88h] [rbp+37h] BYREF
  char v12; // [rsp+8Ah] [rbp+39h]
  int v13; // [rsp+8Ch] [rbp+3Bh]
  _QWORD v14[3]; // [rsp+90h] [rbp+3Fh] BYREF

  if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    KiCpuPartitionCheckGenericDpc();
  memset_0(BugCheckParameter2, 0, 0x58uLL);
  v9[0] = a1;
  v9[1] = a2;
  KiAcquireDpcCorralLock();
  v5 = 0;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_4;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Number )
  {
    KiInitiateGenericCallDpc(CurrentPrcb);
    v5 = 1;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !v5 )
  {
LABEL_4:
    BugCheckParameter2[7] = 0LL;
    BugCheckParameter2[3] = (ULONG_PTR)KiGenericCallDpcInitiatorDpc;
    BugCheckParameter2[4] = (ULONG_PTR)v9;
    LODWORD(BugCheckParameter2[0]) = 134218515;
    BugCheckParameter2[2] = 0LL;
    v14[1] = v14;
    v11 = 263;
    v14[0] = v14;
    v12 = 6;
    v13 = 0;
    KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
    KeWaitForGate(&v11, 0LL, 0LL);
  }
  return KiReleaseDpcCorralLock();
}
