/*
 * XREFs of sub_1400AF476 @ 0x1400AF476
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400AF476(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 32) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 152),
                           166,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  return 0LL;
}
