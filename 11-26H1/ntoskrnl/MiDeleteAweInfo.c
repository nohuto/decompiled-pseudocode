/*
 * XREFs of MiDeleteAweInfo @ 0x140878E84
 * Callers:
 *     MiDeleteSectionAwe @ 0x1407014B8 (MiDeleteSectionAwe.c)
 *     MiAllocateAweInfo @ 0x140877584 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408789FC (MiCreateProcessDefaultAweInfo.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1404638C0 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x140878E00 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(_DWORD *P, ULONG_PTR a2)
{
  if ( (P[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(P + 16));
  MiDeleteAweBitMap((__int64)P, a2);
  ExFreePoolWithTag(P, 0);
}
