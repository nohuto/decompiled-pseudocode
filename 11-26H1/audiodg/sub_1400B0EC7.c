/*
 * XREFs of sub_1400B0EC7 @ 0x1400B0EC7
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B0EC7(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 40),
                           44,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp");
  return 0LL;
}
