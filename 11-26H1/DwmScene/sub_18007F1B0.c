/*
 * XREFs of sub_18007F1B0 @ 0x18007F1B0
 * Callers:
 *     sub_1800145F0 @ 0x1800145F0 (sub_1800145F0.c)
 *     sub_18004EDEC @ 0x18004EDEC (sub_18004EDEC.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_18006624C @ 0x18006624C (sub_18006624C.c)
 *     sub_18006710C @ 0x18006710C (sub_18006710C.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_1800778D0 @ 0x1800778D0 (sub_1800778D0.c)
 *     sub_180092860 @ 0x180092860 (sub_180092860.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 */

_QWORD *__fastcall sub_18007F1B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  _QWORD *result; // rax
  __int64 v7; // rdx

  v5 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  result = (_QWORD *)sub_18007E978(a1, v5, 5);
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
