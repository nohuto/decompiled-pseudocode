/*
 * XREFs of MiGetVmPartition @ 0x140447EB0
 * Callers:
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 *     MiBuildNewCloneDescriptor @ 0x140B58184 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
}
