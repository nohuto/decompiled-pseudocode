/*
 * XREFs of sub_18008F590 @ 0x18008F590
 * Callers:
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_1800D3F84 @ 0x1800D3F84 (sub_1800D3F84.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008F590(__int64 *a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, __int64, _QWORD *); // r9
  __int64 v9; // r10
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 6);
  sub_180012AC4((__int64)(a1 + 6));
  if ( a1[4] )
  {
    v7 = sub_180012C40(v13, a1 + 4);
    v8(v9, a2, v7);
  }
  else
  {
    v10 = (_QWORD *)a1[1];
    if ( v10 == (_QWORD *)a1[2] )
    {
      sub_18006C90C(a1, a1[1], a3);
    }
    else
    {
      sub_180013084(v10, a3);
      a1[1] += 16LL;
    }
    sub_1800D3F84(a2);
  }
  Mtx_unlock(v6);
  v11 = a3[1];
  if ( v11 )
    sub_180010EC8(v11);
  return a2;
}
