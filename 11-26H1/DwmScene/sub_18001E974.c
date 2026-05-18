/*
 * XREFs of sub_18001E974 @ 0x18001E974
 * Callers:
 *     sub_180088BE0 @ 0x180088BE0 (sub_180088BE0.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     sub_180011840 @ 0x180011840 (sub_180011840.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DD44 @ 0x18001DD44 (sub_18001DD44.c)
 */

_QWORD *__fastcall sub_18001E974(__int64 a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001DD44(a1, a3);
  if ( *(_QWORD *)(a1 + 16) - a3 < a4 )
    a4 = *(_QWORD *)(a1 + 16) - a3;
  v8 = sub_1800148EC(a1);
  sub_180011840(a2, (const void *)(a3 + v8), a4);
  return a2;
}
