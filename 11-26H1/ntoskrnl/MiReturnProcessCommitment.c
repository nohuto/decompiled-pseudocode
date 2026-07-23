/*
 * XREFs of MiReturnProcessCommitment @ 0x14047EE9C
 * Callers:
 *     MiAllocateUserPhysicalPagesCleanup @ 0x14087DF90 (MiAllocateUserPhysicalPagesCleanup.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessCommitment(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 984), -a2);
}
