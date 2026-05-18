/*
 * XREFs of sub_18002FCC0 @ 0x18002FCC0
 * Callers:
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 */

_QWORD *__fastcall sub_18002FCC0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rcx

  v3 = (_QWORD *)a1[1];
  if ( v3 == (_QWORD *)a1[2] )
    return sub_18001310C(a1, (__int64)v3, a2);
  sub_180012C40(v3, a2);
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = v5 + 16;
  return (_QWORD *)v5;
}
