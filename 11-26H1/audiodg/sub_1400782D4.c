/*
 * XREFs of sub_1400782D4 @ 0x1400782D4
 * Callers:
 *     sub_140076248 @ 0x140076248 (sub_140076248.c)
 *     sub_1400768B4 @ 0x1400768B4 (sub_1400768B4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400782D4(_DWORD ***a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = sub_1400B6010(*((_QWORD *)**a1 + 4));
  if ( (int)result >= 0 )
    *a3 = a2 + **a1[3];
  return result;
}
