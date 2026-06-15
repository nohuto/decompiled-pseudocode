/*
 * XREFs of sub_1400B14AA @ 0x1400B14AA
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004E480 @ 0x14004E480 (sub_14004E480.c)
 */

__int64 __fastcall sub_1400B14AA(__int64 a1, __int64 a2)
{
  sub_14004E480(*(_QWORD *)(a2 + 40), *(_WORD **)(a2 + 152), *(_QWORD *)(a2 + 160));
  *(_DWORD *)(a2 + 72) = -2147024882;
  *(_DWORD *)(a2 + 76) = sub_14001DFBC(-2147024882);
  *(_DWORD *)(a2 + 80) = 0;
  return 0LL;
}
