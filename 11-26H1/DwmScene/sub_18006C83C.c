/*
 * XREFs of sub_18006C83C @ 0x18006C83C
 * Callers:
 *     sub_18006DB8C @ 0x18006DB8C (sub_18006DB8C.c)
 * Callees:
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_18006D1CC @ 0x18006D1CC (sub_18006D1CC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006C83C(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD **)(a2 + 8);
  while ( v3 != v4 )
  {
    if ( *(_BYTE *)(*v3 + 136LL) && !*(_DWORD *)(*v3 + 176LL) )
    {
      v5 = (_QWORD *)a1[1];
      if ( v5 == (_QWORD *)a1[2] )
      {
        sub_18006C90C(a1, a1[1], v3);
      }
      else
      {
        sub_180013084(v5, v3);
        a1[1] += 16LL;
      }
    }
    v3 += 2;
  }
  sub_18006D1CC(*a1, a1[1], (__int64)(a1[1] - *a1) >> 4, sub_18008FD40, 1);
  return a1;
}
