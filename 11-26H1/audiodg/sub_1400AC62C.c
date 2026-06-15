/*
 * XREFs of sub_1400AC62C @ 0x1400AC62C
 * Callers:
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

_QWORD *__fastcall sub_1400AC62C(_QWORD *a1, size_t a2)
{
  void *v4; // rbx

  v4 = (void *)sub_1400499AC(a2, a2);
  memset(v4, 0, a2);
  *a1 = v4;
  return a1;
}
