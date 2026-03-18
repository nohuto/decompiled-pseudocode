/*
 * XREFs of KeGetIdealNodeNumberThread @ 0x14048C2AC
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1408760F0 (MiCreateHardwareEnclave.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmManagePartitionMoveMemory @ 0x14087D0C8 (MmManagePartitionMoveMemory.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140A036E0 (PspRecheckThreadOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 *     MmAllocateNonCachedMemory @ 0x140B37D20 (MmAllocateNonCachedMemory.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B6131C (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberThread(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
}
