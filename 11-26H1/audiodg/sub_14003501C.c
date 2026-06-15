/*
 * XREFs of sub_14003501C @ 0x14003501C
 * Callers:
 *     sub_140018318 @ 0x140018318 (sub_140018318.c)
 *     sub_140034FDC @ 0x140034FDC (sub_140034FDC.c)
 * Callees:
 *     j_j_j__o_free @ 0x140048540 (j_j_j__o_free.c)
 *     sub_14004935C @ 0x14004935C (sub_14004935C.c)
 */

_QWORD *__fastcall sub_14003501C(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 - 8);
  sub_14004935C(a1, 8LL, *(_QWORD *)(a1 - 8), sub_14001A5F0);
  j_j_j__o_free(v1, 8LL * *v1 + 8);
  return v1;
}
