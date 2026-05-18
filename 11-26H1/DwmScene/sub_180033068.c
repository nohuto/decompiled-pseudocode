/*
 * XREFs of sub_180033068 @ 0x180033068
 * Callers:
 *     sub_1800330EC @ 0x1800330EC (sub_1800330EC.c)
 * Callees:
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18001310C @ 0x18001310C (sub_18001310C.c)
 *     sub_18002D3D4 @ 0x18002D3D4 (sub_18002D3D4.c)
 *     sub_18003FAF4 @ 0x18003FAF4 (sub_18003FAF4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180033068(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rcx

  sub_18003FAF4(a2, a1);
  sub_18002D3D4(*a2);
  v4 = (_QWORD *)a1[89];
  if ( v4 == (_QWORD *)a1[90] )
  {
    sub_18001310C(a1 + 88, a1[89], a2);
  }
  else
  {
    sub_180013084(v4, a2);
    a1[89] += 16LL;
  }
  return a2;
}
