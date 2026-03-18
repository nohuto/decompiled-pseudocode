/*
 * XREFs of FsRtlIsExtentDangling @ 0x14078FF00
 * Callers:
 *     <none>
 * Callees:
 *     MiIsExtentDangling @ 0x1406FA730 (MiIsExtentDangling.c)
 */

ULONG_PTR __fastcall FsRtlIsExtentDangling(ULONG_PTR a1, __int64 a2)
{
  return MiIsExtentDangling(a1, a2, 0);
}
