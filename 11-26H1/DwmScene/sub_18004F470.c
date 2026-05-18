/*
 * XREFs of sub_18004F470 @ 0x18004F470
 * Callers:
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

_QWORD *__fastcall sub_18004F470(_QWORD *a1, size_t a2)
{
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v4 = (void *)sub_18001C514(a2);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
