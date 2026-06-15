/*
 * XREFs of sub_1400B3F2F @ 0x1400B3F2F
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B3F2F(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 216),
                           161,
                           (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp");
  return 0LL;
}
