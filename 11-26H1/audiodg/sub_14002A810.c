/*
 * XREFs of sub_14002A810 @ 0x14002A810
 * Callers:
 *     sub_14002A7A4 @ 0x14002A7A4 (sub_14002A7A4.c)
 * Callees:
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 */

_QWORD *__fastcall sub_14002A810(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)sub_140044584(32LL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
