/*
 * XREFs of FsRtlIsExtentDangling @ 0x140792A30
 * Callers:
 *     <none>
 * Callees:
 *     MiIsExtentDangling @ 0x1406FF400 (MiIsExtentDangling.c)
 */

ULONG_PTR __fastcall FsRtlIsExtentDangling(ULONG_PTR a1, __int64 a2)
{
  return MiIsExtentDangling(a1, a2, 0LL);
}
