/*
 * XREFs of sub_1800167D4 @ 0x1800167D4
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180016118 @ 0x180016118 (sub_180016118.c)
 *     sub_18001850C @ 0x18001850C (sub_18001850C.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_1800BABD4 @ 0x1800BABD4 (sub_1800BABD4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800167D4(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-18h] BYREF

  v8 = sub_18001C514(4648LL);
  if ( v8 )
  {
    v9 = sub_180012C40(&v15, (_QWORD *)(a1 + 464));
    v8 = sub_1800BABD4(v10, a1, v9);
  }
  sub_180016118(v14, v8);
  v11 = v14[0];
  sub_180029C10(v14[0] + 24LL, v17);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 240LL))(v11, a3, a4);
  sub_180012C40(&v15, v14);
  sub_180032AD4(a1, &v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010EC8(*((__int64 *)&v15 + 1));
  v15 = 0LL;
  v12 = sub_180012C40(&v16, v14);
  sub_1800349D0(a1, 7LL, v12, &v15);
  *a2 = v11;
  a2[1] = v14[1];
  sub_180011E54((__int64)v17);
  sub_18001850C(a3);
  return a2;
}
