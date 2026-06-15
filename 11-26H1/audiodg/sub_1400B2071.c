/*
 * XREFs of sub_1400B2071 @ 0x1400B2071
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B2071(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 40),
                           138,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp");
  return 0LL;
}
