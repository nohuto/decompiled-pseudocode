/*
 * XREFs of sub_180051250 @ 0x180051250
 * Callers:
 *     sub_180050B20 @ 0x180050B20 (sub_180050B20.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180050390 @ 0x180050390 (sub_180050390.c)
 *     sub_18005042C @ 0x18005042C (sub_18005042C.c)
 *     sub_1800504C8 @ 0x1800504C8 (sub_1800504C8.c)
 *     sub_180050564 @ 0x180050564 (sub_180050564.c)
 *     sub_180050600 @ 0x180050600 (sub_180050600.c)
 *     sub_18005069C @ 0x18005069C (sub_18005069C.c)
 *     sub_180050738 @ 0x180050738 (sub_180050738.c)
 *     sub_1800507D4 @ 0x1800507D4 (sub_1800507D4.c)
 *     sub_1800509FC @ 0x1800509FC (sub_1800509FC.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180051250(__int64 a1)
{
  __int64 *v1; // rbx
  struct _Mtx_internal_imp_t *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+10h] BYREF
  struct _Mtx_internal_imp_t *v14; // [rsp+48h] [rbp+18h]

  v1 = (__int64 *)(a1 + 496);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v14 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  sub_180012AC4(a1 + 512);
  v13 = _std_type_info_hash(&qword_1801BE670);
  v3 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_18005069C(*v3 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180012AC4((__int64)v2);
  v13 = _std_type_info_hash(&qword_1801BE588);
  v4 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_18005042C(*v4 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180012AC4((__int64)v2);
  v13 = _std_type_info_hash(&qword_1801BE5C8);
  v5 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_1800504C8(*v5 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180012AC4((__int64)v2);
  v13 = _std_type_info_hash(&qword_1801BE600);
  v6 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_180050564(*v6 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180012AC4((__int64)v2);
  v13 = _std_type_info_hash(&qword_1801BE638);
  v7 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_180050390(*v7 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180012AC4((__int64)v2);
  v13 = _std_type_info_hash(&qword_1801BDF08);
  v8 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_180050738(*v8 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180012AC4((__int64)v2);
  v13 = _std_type_info_hash(&qword_1801BE518);
  v9 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_1800507D4(*v9 + 40LL);
  Mtx_unlock(v2);
  v14 = v2;
  sub_180012AC4((__int64)v2);
  v13 = _std_type_info_hash(&qword_1801BE550);
  v10 = (_QWORD *)sub_1800509FC(v1, (__int64)v12, &v13);
  sub_180050600(*v10 + 40LL);
  return Mtx_unlock(v2);
}
