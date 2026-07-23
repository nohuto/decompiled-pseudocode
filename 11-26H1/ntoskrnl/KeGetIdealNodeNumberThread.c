/*
 * XREFs of KeGetIdealNodeNumberThread @ 0x140485DEC
 * Callers:
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmManagePartitionMoveMemory @ 0x1408834C8 (MmManagePartitionMoveMemory.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140A7BC1C (PspRecheckThreadOptionalXStateFeatures.c)
 *     MmAllocateNonCachedMemory @ 0x140B39F30 (MmAllocateNonCachedMemory.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberThread(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
}
