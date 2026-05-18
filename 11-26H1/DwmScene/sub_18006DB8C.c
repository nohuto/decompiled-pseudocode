/*
 * XREFs of sub_18006DB8C @ 0x18006DB8C
 * Callers:
 *     sub_18006DC9C @ 0x18006DC9C (sub_18006DC9C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_18006C83C @ 0x18006C83C (sub_18006C83C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18006DB8C(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]

  sub_18006C83C(&v15, a1 + 40);
  sub_180012C40(a2, a5);
  v9 = *((_QWORD *)&v15 + 1);
  v8 = (_QWORD *)v15;
  if ( (_QWORD)v15 != *((_QWORD *)&v15 + 1) )
  {
    do
    {
      v10 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64, _QWORD *))(*(_QWORD *)*v8 + 16LL))(
                         *v8,
                         v13,
                         a3,
                         a4,
                         a2);
      sub_180011F5C(a2, v10);
      if ( v14 )
        sub_180010EC8(v14);
      v8 += 2;
    }
    while ( v8 != (_QWORD *)v9 );
    v9 = *((_QWORD *)&v15 + 1);
    v8 = (_QWORD *)v15;
  }
  if ( v8 )
  {
    sub_1800130CC((__int64)v8, v9);
    sub_18000E26C((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL);
    v15 = 0LL;
    v16 = 0LL;
  }
  v11 = a5[1];
  if ( v11 )
    sub_180010EC8(v11);
  return a2;
}
