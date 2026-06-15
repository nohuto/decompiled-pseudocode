/*
 * XREFs of sub_1400B3EF0 @ 0x1400B3EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B3EF0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 144) = sub_14004EEE4(
                            *(_QWORD *)(a2 + 120),
                            324,
                            (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspapo.cpp");
  return 0LL;
}
