/*
 * XREFs of MiDeleteFileExtentList @ 0x1407705B4
 * Callers:
 *     MiDeleteCachedSubsections @ 0x1404A6F5C (MiDeleteCachedSubsections.c)
 *     MiDeleteSubsectionExtents @ 0x1404B6680 (MiDeleteSubsectionExtents.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x140529CA0 (MiEntireSubsectionIsPurged.c)
 *     MiEnableImageDirectMap @ 0x1406F9834 (MiEnableImageDirectMap.c)
 *     MiCreateImageMapFreeResources @ 0x140A55C50 (MiCreateImageMapFreeResources.c)
 *     MiDeleteFileExtents @ 0x140AC35A8 (MiDeleteFileExtents.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14053308C (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x140770630 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407706A8 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteFileExtentList(_DWORD *P)
{
  __int64 v2; // rbx
  unsigned __int8 *i; // rsi
  char *v4; // rdx

  MiLockFileExtentsExclusive();
  v2 = 0LL;
  for ( i = MiGetExtentTable(P[1]); (unsigned int)v2 < *P; v2 = (unsigned int)(v2 + 1) )
  {
    v4 = (char *)&P[12 * v2 + 2];
    if ( *((_QWORD *)v4 + 4) != 0x8000000000000000uLL )
      RtlAvlRemoveNode((unsigned __int64 *)i, (__int64)v4);
  }
  MiUnlockFileExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
