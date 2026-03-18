/*
 * XREFs of MmSetPageProtection @ 0x1405096F0
 * Callers:
 *     sub_1405517D0 @ 0x1405517D0 (sub_1405517D0.c)
 *     KiAllocateProcessorStacks @ 0x1405EA004 (KiAllocateProcessorStacks.c)
 *     KiFreeProcessorStacks @ 0x1405EB2E0 (KiFreeProcessorStacks.c)
 *     HvpProtectBinPartial @ 0x1408B955C (HvpProtectBinPartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     KeWriteProtectProcessorState @ 0x140BF4178 (KeWriteProtectProcessorState.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     VslpIumPhase0Initialize @ 0x140CB9CAC (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionMask @ 0x140364A40 (MiMakeProtectionMask.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
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
