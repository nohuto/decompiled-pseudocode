/*
 * XREFs of sub_1800276A8 @ 0x1800276A8
 * Callers:
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 *     sub_18006F374 @ 0x18006F374 (sub_18006F374.c)
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 *     sub_1800BA660 @ 0x1800BA660 (sub_1800BA660.c)
 * Callees:
 *     sub_180011840 @ 0x180011840 (sub_180011840.c)
 */

_QWORD *__fastcall sub_1800276A8(_QWORD *a1, _BYTE *a2, _BYTE *a3)
{
  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( a2 == a3 )
  {
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    sub_180011840(a1, a2, a3 - a2);
  }
  return a1;
}
