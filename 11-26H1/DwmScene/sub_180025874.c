/*
 * XREFs of sub_180025874 @ 0x180025874
 * Callers:
 *     sub_180025824 @ 0x180025824 (sub_180025824.c)
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 *     sub_180054AF0 @ 0x180054AF0 (sub_180054AF0.c)
 *     sub_18006095C @ 0x18006095C (sub_18006095C.c)
 *     sub_18006BB00 @ 0x18006BB00 (sub_18006BB00.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18008F3D0 @ 0x18008F3D0 (sub_18008F3D0.c)
 *     sub_18008F440 @ 0x18008F440 (sub_18008F440.c)
 *     sub_1800BABD4 @ 0x1800BABD4 (sub_1800BABD4.c)
 *     sub_1800D27E0 @ 0x1800D27E0 (sub_1800D27E0.c)
 *     sub_1800D3E58 @ 0x1800D3E58 (sub_1800D3E58.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025874(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 2LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  result = a1;
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}
