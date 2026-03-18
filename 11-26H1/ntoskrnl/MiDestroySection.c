/*
 * XREFs of MiDestroySection @ 0x1404E6B64
 * Callers:
 *     MiDeleteCachedSubsections @ 0x1404A6F5C (MiDeleteCachedSubsections.c)
 *     MiCleanSection @ 0x1404DF994 (MiCleanSection.c)
 *     MiEntireSubsectionIsPurged @ 0x140529CA0 (MiEntireSubsectionIsPurged.c)
 * Callees:
 *     MiDeleteDebuggerPatches @ 0x1404E6B90 (MiDeleteDebuggerPatches.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    MiDeleteDebuggerPatches(a1);
  return MiSegmentDelete(a1);
}
