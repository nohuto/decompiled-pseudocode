/*
 * XREFs of sub_18007D08C @ 0x18007D08C
 * Callers:
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_18007CDA4 @ 0x18007CDA4 (sub_18007CDA4.c)
 * Callees:
 *     sub_18007B8E4 @ 0x18007B8E4 (sub_18007B8E4.c)
 */

_DWORD *__fastcall sub_18007D08C(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18007B8E4(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  return result;
}
