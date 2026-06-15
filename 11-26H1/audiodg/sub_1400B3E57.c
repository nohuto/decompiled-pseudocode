/*
 * XREFs of sub_1400B3E57 @ 0x1400B3E57
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B3E57(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 136) = sub_14004EEE4(
                            *(_QWORD *)(a2 + 104),
                            314,
                            (int)"avcore\\audiocore\\Server\\inc\\ResourceTokenManager.h");
  return 0LL;
}
