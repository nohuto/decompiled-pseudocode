/*
 * XREFs of MmSetPageProtection @ 0x1405031A0
 * Callers:
 *     sub_140553C50 @ 0x140553C50 (sub_140553C50.c)
 *     KiAllocateProcessorStacks @ 0x1405EC974 (KiAllocateProcessorStacks.c)
 *     KiFreeProcessorStacks @ 0x1405EDC50 (KiFreeProcessorStacks.c)
 *     HvpProtectBinPartial @ 0x1408BFB2C (HvpProtectBinPartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     KeWriteProtectProcessorState @ 0x140BFA178 (KeWriteProtectProcessorState.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     VslpIumPhase0Initialize @ 0x140CBFCEC (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  if ( ProtectionMask >= 8 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x20000) != 0 )
    return 0;
  MiSetPageProtection(a1, a2, ProtectionMask);
  return 1;
}
