/*
 * XREFs of sub_1400AF3DC @ 0x1400AF3DC
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400AF3DC(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 120),
                           736,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  return 0LL;
}
