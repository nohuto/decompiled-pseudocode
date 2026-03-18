/*
 * XREFs of KiCustomAccessRoutine0 @ 0x140732C30
 * Callers:
 *     FsRtlTruncateSmallMcb @ 0x1405249E0 (FsRtlTruncateSmallMcb.c)
 *     ExpTimerDpcRoutine @ 0x1406CF5A0 (ExpTimerDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140732C10 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
