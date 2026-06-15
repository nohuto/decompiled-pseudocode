/*
 * XREFs of sub_1400B0D1F @ 0x1400B0D1F
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B0D1F(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 40),
                           15,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp");
  return 0LL;
}
