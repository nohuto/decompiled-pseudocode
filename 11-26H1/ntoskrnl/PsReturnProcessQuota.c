/*
 * XREFs of PsReturnProcessQuota @ 0x1403BD2FC
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140AF1424 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x1403BD9F0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].SchedulingGroup, a1, 3LL, a3);
  return result;
}
