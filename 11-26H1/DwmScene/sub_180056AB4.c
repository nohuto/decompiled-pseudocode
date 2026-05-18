/*
 * XREFs of sub_180056AB4 @ 0x180056AB4
 * Callers:
 *     sub_180056128 @ 0x180056128 (sub_180056128.c)
 *     sub_1800568A0 @ 0x1800568A0 (sub_1800568A0.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

__int64 __fastcall sub_180056AB4(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  sub_1800181BC((_QWORD *)(a1 + 8), (__int64)(a2 + 2));
  return a1;
}
