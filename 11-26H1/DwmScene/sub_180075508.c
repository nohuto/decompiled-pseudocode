/*
 * XREFs of sub_180075508 @ 0x180075508
 * Callers:
 *     sub_18007544C @ 0x18007544C (sub_18007544C.c)
 *     sub_18007598C @ 0x18007598C (sub_18007598C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 sub_180075508()
{
  __int64 result; // rax

  result = sub_180011790(0x60uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
