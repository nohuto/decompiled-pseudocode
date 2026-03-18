/*
 * XREFs of MiReturnProcessCommitment @ 0x14048552C
 * Callers:
 *     MiAllocateUserPhysicalPagesCleanup @ 0x140877BB0 (MiAllocateUserPhysicalPagesCleanup.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiChargeFullProcessCommitment @ 0x1409C7944 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 984), -a2);
}
