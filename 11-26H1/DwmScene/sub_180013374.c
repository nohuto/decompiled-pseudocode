/*
 * XREFs of sub_180013374 @ 0x180013374
 * Callers:
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 *     sub_180013268 @ 0x180013268 (sub_180013268.c)
 *     sub_180017BB8 @ 0x180017BB8 (sub_180017BB8.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_18008BC50 @ 0x18008BC50 (sub_18008BC50.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 * Callees:
 *     sub_180011BB8 @ 0x180011BB8 (sub_180011BB8.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

_QWORD *__fastcall sub_180013374(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // r8
  __int64 v5; // r8
  _QWORD *v6; // r9

  v4 = (_QWORD *)a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_180011BB8(a1, a3, v4);
      a3 += 2;
      v4 = (_QWORD *)(v5 + 16);
    }
    while ( v4 != v6 );
  }
  sub_1800130CC((__int64)a3, (__int64)a3);
  return a3;
}
