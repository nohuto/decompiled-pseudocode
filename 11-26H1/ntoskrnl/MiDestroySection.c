/*
 * XREFs of MiDestroySection @ 0x1404E0004
 * Callers:
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 *     MiCleanSection @ 0x1404D9074 (MiCleanSection.c)
 *     MiEntireSubsectionIsPurged @ 0x14052C1C0 (MiEntireSubsectionIsPurged.c)
 * Callees:
 *     MiDeleteDebuggerPatches @ 0x1404E0030 (MiDeleteDebuggerPatches.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    MiDeleteDebuggerPatches(a1);
  return MiSegmentDelete(a1);
}
