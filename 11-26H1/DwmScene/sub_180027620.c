/*
 * XREFs of sub_180027620 @ 0x180027620
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

_QWORD *__fastcall sub_180027620(__int64 a1, _QWORD *a2, int a3)
{
  char *v4; // rax

  v4 = (char *)std::_Syserror_map(a3);
  sub_180011CC4(a2, v4);
  return a2;
}
