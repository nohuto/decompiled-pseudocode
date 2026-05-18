/*
 * XREFs of sub_18006BF04 @ 0x18006BF04
 * Callers:
 *     sub_1800437B0 @ 0x1800437B0 (sub_1800437B0.c)
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18006BA78 @ 0x18006BA78 (sub_18006BA78.c)
 *     sub_18006BD44 @ 0x18006BD44 (sub_18006BD44.c)
 *     sub_18006C134 @ 0x18006C134 (sub_18006C134.c)
 *     sub_18008F440 @ 0x18008F440 (sub_18008F440.c)
 *     sub_18008F4EC @ 0x18008F4EC (sub_18008F4EC.c)
 *     sub_18008F590 @ 0x18008F590 (sub_18008F590.c)
 *     sub_1800D3F84 @ 0x1800D3F84 (sub_1800D3F84.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006BF04(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v17[176]; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+100h] [rbp+18h]
  _QWORD *v20; // [rsp+108h] [rbp+20h]

  v20 = a4;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v19 = a1 + 3;
  sub_180012AC4((__int64)(a1 + 3));
  v9 = sub_18006BD44((__int64)a1, a3);
  sub_18006BA78(&v18, *a1, a1[1], v9);
  if ( v18 == a1[1] )
  {
    v12 = sub_180012C40(v16, a4);
    v13 = sub_18008F440(v17, v9, v12);
    sub_18006C134(a1, v13);
    sub_18008F4EC(v17);
    sub_1800D3F84(a2);
  }
  else
  {
    v10 = sub_180012C40(v16, a4);
    sub_18008F590(v11, a2, v10);
  }
  Mtx_unlock(v8);
  v14 = a4[1];
  if ( v14 )
    sub_180010EC8(v14);
  return a2;
}
