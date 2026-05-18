/*
 * XREFs of sub_18007EB5C @ 0x18007EB5C
 * Callers:
 *     sub_1800144C0 @ 0x1800144C0 (sub_1800144C0.c)
 *     sub_180014500 @ 0x180014500 (sub_180014500.c)
 *     sub_1800145A0 @ 0x1800145A0 (sub_1800145A0.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_180066F90 @ 0x180066F90 (sub_180066F90.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 */

_QWORD *__fastcall sub_18007EB5C(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  _QWORD *result; // rax
  __int64 v7; // rdx

  v5 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  result = (_QWORD *)sub_18007E978(a1, v5, 6);
  v7 = *result - *a3;
  if ( *result == *a3 )
    v7 = result[1] - a3[1];
  if ( v7 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
