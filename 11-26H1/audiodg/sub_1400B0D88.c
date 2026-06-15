/*
 * XREFs of sub_1400B0D88 @ 0x1400B0D88
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B0D88(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 40),
                           13,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp");
  return 0LL;
}
