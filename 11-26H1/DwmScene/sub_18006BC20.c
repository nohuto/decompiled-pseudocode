/*
 * XREFs of sub_18006BC20 @ 0x18006BC20
 * Callers:
 *     sub_1800262D4 @ 0x1800262D4 (sub_1800262D4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_18006BA78 @ 0x18006BA78 (sub_18006BA78.c)
 *     sub_18006C134 @ 0x18006C134 (sub_18006C134.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 *     sub_18008F4EC @ 0x18008F4EC (sub_18008F4EC.c)
 *     sub_18008F654 @ 0x18008F654 (sub_18008F654.c)
 *     sub_18008F734 @ 0x18008F734 (sub_18008F734.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall sub_18006BC20(__int64 *a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int result; // eax
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v14[24]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-31h]
  __int64 v16; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v17[112]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD *v18; // [rsp+E0h] [rbp+67h] BYREF
  _QWORD *v19; // [rsp+E8h] [rbp+6Fh]
  __int64 *v20; // [rsp+F0h] [rbp+77h]

  v19 = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v20 = a1 + 3;
  sub_180012AC4((__int64)(a1 + 3));
  sub_18006BA78(&v18, *a1, a1[1], a3);
  if ( v18 == (_QWORD *)a1[1] )
  {
    v9 = sub_180012C40(v13, a2);
    v18 = v9;
    sub_18008F33C(v14);
    v15 = a3;
    sub_180012C40(&v16, v9);
    sub_180025874((__int64)v17);
    sub_180012AC4((__int64)v17);
    sub_18008F734(v14);
    Mtx_unlock((_Mtx_t)v17);
    v10 = v9[1];
    if ( v10 )
      sub_180010EC8(v10);
    sub_18006C134(a1, v14);
    sub_18008F4EC(v14);
  }
  else
  {
    v7 = sub_180012C40(v13, a2);
    sub_18008F654(v8, v7);
  }
  result = Mtx_unlock(v6);
  v12 = a2[1];
  if ( v12 )
    return sub_180010EC8(v12);
  return result;
}
