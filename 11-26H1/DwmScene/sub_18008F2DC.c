/*
 * XREFs of sub_18008F2DC @ 0x18008F2DC
 * Callers:
 *     sub_18008F17C @ 0x18008F17C (sub_18008F17C.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 * Callees:
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_1800133B8 @ 0x1800133B8 (sub_1800133B8.c)
 */

_QWORD *__fastcall sub_18008F2DC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r10

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - (_QWORD)a3;
    do
    {
      sub_1800133B8(a1, v3, (_QWORD *)((char *)v3 + v4));
      v3 += 2;
    }
    while ( v5 != 1 );
  }
  sub_1800130CC((__int64)v3, (__int64)v3);
  return v3;
}
