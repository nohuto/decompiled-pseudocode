/*
 * XREFs of sub_1800311BC @ 0x1800311BC
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 *     sub_18006FA50 @ 0x18006FA50 (sub_18006FA50.c)
 * Callees:
 *     sub_180031258 @ 0x180031258 (sub_180031258.c)
 */

_QWORD *__fastcall sub_1800311BC(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // r9
  _QWORD *result; // rax

  *(_DWORD *)a1 = -1082130432;
  *(_DWORD *)(a1 + 4) = -1082130432;
  *(_QWORD *)(a1 + 8) = 2LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 2LL;
  *(_DWORD *)(a1 + 20) = -1082130432;
  *(_DWORD *)(a1 + 24) = -1082130432;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 2;
  sub_180031258(a1 + 48);
  v1[7] = v2;
  result = v1;
  v1[8] = v2;
  v1[9] = v2;
  v1[10] = v2;
  return result;
}
