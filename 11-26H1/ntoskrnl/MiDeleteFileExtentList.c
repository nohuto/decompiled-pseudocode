/*
 * XREFs of MiDeleteFileExtentList @ 0x1407735B4
 * Callers:
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 *     MiDeleteSubsectionExtents @ 0x1404AFAD0 (MiDeleteSubsectionExtents.c)
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 *     MiEnableImageDirectMap @ 0x1406FE504 (MiEnableImageDirectMap.c)
 *     MiCreateImageMapFreeResources @ 0x140A631D8 (MiCreateImageMapFreeResources.c)
 *     MiDeleteFileExtents @ 0x140AC5218 (MiDeleteFileExtents.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14053550C (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x140773630 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407736A8 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
