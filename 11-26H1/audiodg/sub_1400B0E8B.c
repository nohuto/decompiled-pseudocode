/*
 * XREFs of sub_1400B0E8B @ 0x1400B0E8B
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B0E8B(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 40),
                           224,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  return 0LL;
}
