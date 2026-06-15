/*
 * XREFs of sub_1400B1706 @ 0x1400B1706
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B1706(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 40),
                           61,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp");
  return 0LL;
}
