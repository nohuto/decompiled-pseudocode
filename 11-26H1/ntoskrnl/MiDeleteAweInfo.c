/*
 * XREFs of MiDeleteAweInfo @ 0x14087F264
 * Callers:
 *     MiDeleteSectionAwe @ 0x140706188 (MiDeleteSectionAwe.c)
 *     MiAllocateAweInfo @ 0x14087D964 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14087EDDC (MiCreateProcessDefaultAweInfo.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14045C880 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x14087F1E0 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(_DWORD *P, ULONG_PTR a2)
{
  if ( (P[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(P + 16));
  MiDeleteAweBitMap((__int64)P, a2);
  ExFreePoolWithTag(P, 0);
}
