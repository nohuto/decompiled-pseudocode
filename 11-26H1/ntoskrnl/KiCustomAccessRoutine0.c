/*
 * XREFs of KiCustomAccessRoutine0 @ 0x140737800
 * Callers:
 *     FsRtlTruncateSmallMcb @ 0x140527050 (FsRtlTruncateSmallMcb.c)
 *     ExpTimerDpcRoutine @ 0x1406D35D0 (ExpTimerDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1407377E0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
