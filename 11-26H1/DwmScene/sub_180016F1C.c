/*
 * XREFs of sub_180016F1C @ 0x180016F1C
 * Callers:
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800180D0 @ 0x1800180D0 (sub_1800180D0.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180016F1C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v8; // [rsp+30h] [rbp-28h]
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_1800180D0(a2);
  sub_180029C50(a1 + 808, v9);
  sub_1800162D0(&v7, a2);
  v5 = v4[1];
  if ( v5 == v4[2] )
    sub_1800119CC(v4, v5, &v7);
  else
    sub_1800119A4((__int64)v4, &v7);
  if ( v8 )
    sub_180010F00(v8);
  sub_180011E54((__int64)v9);
  sub_180032FE0(a1, *a2, 1LL);
  return a2;
}
