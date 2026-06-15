/*
 * XREFs of sub_1400B4065 @ 0x1400B4065
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B4065(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 192) = sub_14004EEE4(
                            *(_QWORD *)(a2 + 136),
                            115,
                            (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspglobalallocations.cpp");
  return 0LL;
}
