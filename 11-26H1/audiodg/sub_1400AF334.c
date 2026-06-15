/*
 * XREFs of sub_1400AF334 @ 0x1400AF334
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400AF334(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 56),
                           31,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp");
  return 0LL;
}
