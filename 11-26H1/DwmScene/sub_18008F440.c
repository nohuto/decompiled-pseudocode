/*
 * XREFs of sub_18008F440 @ 0x18008F440
 * Callers:
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 *     sub_18008F734 @ 0x18008F734 (sub_18008F734.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008F440(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rcx

  sub_18008F33C((__int64 *)a1, a2, (__int64)a3);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_180025874(a1 + 48);
  sub_180012AC4(v6);
  sub_18008F734(a1);
  v7 = *(_QWORD **)(a1 + 8);
  if ( v7 == *(_QWORD **)(a1 + 16) )
  {
    sub_18006C90C((__int64 *)a1, *(_QWORD *)(a1 + 8), a3);
  }
  else
  {
    sub_180013084(v7, a3);
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 48));
  v8 = a3[1];
  if ( v8 )
    sub_180010EC8(v8);
  return a1;
}
