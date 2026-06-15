/*
 * XREFs of sub_1400AEFA8 @ 0x1400AEFA8
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400AEFA8(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 80) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 72),
                           126,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  return 0LL;
}
