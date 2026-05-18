/*
 * XREFs of sub_1800406B0 @ 0x1800406B0
 * Callers:
 *     sub_18003FAF4 @ 0x18003FAF4 (sub_18003FAF4.c)
 *     sub_18003FB88 @ 0x18003FB88 (sub_18003FB88.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 */

_QWORD *__fastcall sub_1800406B0(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *result; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  _QWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF

  v2 = sub_180013440(v11, (__int64)&unk_1801C9058);
  sub_18003FC1C(a1, &v9, (__int64)v2);
  if ( v10 )
    sub_180010EC8(v10);
  v3 = sub_180013440(v11, (__int64)&unk_1801C9038);
  sub_18003FC1C(a1, &v9, (__int64)v3);
  if ( v10 )
    sub_180010EC8(v10);
  v4 = sub_180013440(v11, (__int64)&unk_1801C90D8);
  sub_18003FC1C(a1, &v9, (__int64)v4);
  if ( v10 )
    sub_180010EC8(v10);
  v5 = sub_180013440(v11, (__int64)&unk_1801C90B8);
  sub_18003FC1C(a1, &v9, (__int64)v5);
  if ( v10 )
    sub_180010EC8(v10);
  v6 = sub_180013440(v11, (__int64)&unk_1801C9078);
  sub_18003FC1C(a1, &v9, (__int64)v6);
  if ( v10 )
    sub_180010EC8(v10);
  v7 = sub_180013440(v11, (__int64)&unk_1801C9098);
  result = sub_18003FC1C(a1, &v9, (__int64)v7);
  if ( v10 )
    return (_QWORD *)sub_180010EC8(v10);
  return result;
}
