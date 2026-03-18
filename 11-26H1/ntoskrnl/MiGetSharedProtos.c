/*
 * XREFs of MiGetSharedProtos @ 0x140372BD8
 * Callers:
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiIdentifyProtoPage @ 0x1402F1EE0 (MiIdentifyProtoPage.c)
 *     MiMakePerSessionProtoPte @ 0x14030B710 (MiMakePerSessionProtoPte.c)
 *     MiAddMappedPtes @ 0x14033FE10 (MiAddMappedPtes.c)
 *     MiResolveMappedFileFaultInitialize @ 0x14036F9B8 (MiResolveMappedFileFaultInitialize.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     MiComputeImagePteIndex @ 0x14038CEF4 (MiComputeImagePteIndex.c)
 *     MiGetImageProtoProtection @ 0x14043C1D0 (MiGetImageProtoProtection.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140A526F0 (MiPfAllocateMdls.c)
 *     MiGetImageSubsectionBounds @ 0x140AB8908 (MiGetImageSubsectionBounds.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetSharedProtosAtDpc @ 0x14046A430 (MiGetSharedProtosAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // bl
  __int64 SharedProtosAtDpc; // rdi

  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  SharedProtosAtDpc = MiGetSharedProtosAtDpc(v5, a2, a3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return SharedProtosAtDpc;
}
