/*
 * XREFs of sub_18006DC9C @ 0x18006DC9C
 * Callers:
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18004E128 @ 0x18004E128 (sub_18004E128.c)
 *     sub_18004E184 @ 0x18004E184 (sub_18004E184.c)
 *     sub_18006DB8C @ 0x18006DB8C (sub_18006DB8C.c)
 *     sub_18007E840 @ 0x18007E840 (sub_18007E840.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006DC9C(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rdi
  unsigned __int16 v10; // bx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  _QWORD *v13; // rax
  void (__fastcall *v14)(__int64, _QWORD *); // r10
  __int64 v15; // r11
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  __int64 v20; // [rsp+38h] [rbp-39h]
  _QWORD *v21; // [rsp+48h] [rbp-29h]
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h]

  v21 = a5;
  if ( byte_1801C8F10 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*a3 + 3984) + 512LL);
    sub_180011CC4(&v22, "Global/PlanarReflection");
    v10 = sub_18004E128(v9, (__int64)&v22);
    sub_1800129D0((__int64)&v22);
    v11 = (_QWORD *)sub_18004E184(v9, &v22);
    v12 = (__int64 *)sub_18007E840(*v11, &v19, v10);
    sub_180011F5C(a5, v12);
    if ( v20 )
      sub_180010EC8(v20);
    if ( v23 )
      sub_180010EC8(v23);
  }
  v13 = sub_180012C40(&v22, a3);
  v14(v15, v13);
  v16 = sub_180012C40(&v22, a5);
  v17 = sub_18006DB8C(a1, &v19, *a3, a4, v16);
  sub_180011F5C(a5, v17);
  if ( v20 )
    sub_180010EC8(v20);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a5;
  a2[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  return a2;
}
