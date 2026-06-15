/*
 * XREFs of sub_140054BB0 @ 0x140054BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140054BB0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_1400B9840;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a1[1] = 0LL;
  a1[2] = 0LL;
  v2 = a1[3];
  a1[3] = 0LL;
  a2[3] = v2;
  return a2;
}
