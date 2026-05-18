/*
 * XREFs of sub_1800BD2E0 @ 0x1800BD2E0
 * Callers:
 *     sub_1800BABD4 @ 0x1800BABD4 (sub_1800BABD4.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800509FC @ 0x1800509FC (sub_1800509FC.c)
 *     sub_1800B8B8C @ 0x1800B8B8C (sub_1800B8B8C.c)
 *     sub_1800B8C28 @ 0x1800B8C28 (sub_1800B8C28.c)
 *     sub_1800B8CC4 @ 0x1800B8CC4 (sub_1800B8CC4.c)
 *     sub_1800B8D60 @ 0x1800B8D60 (sub_1800B8D60.c)
 *     sub_1800B8DFC @ 0x1800B8DFC (sub_1800B8DFC.c)
 *     sub_1800B8E98 @ 0x1800B8E98 (sub_1800B8E98.c)
 *     sub_1800B8F34 @ 0x1800B8F34 (sub_1800B8F34.c)
 *     sub_1800B8FD0 @ 0x1800B8FD0 (sub_1800B8FD0.c)
 *     sub_1800B906C @ 0x1800B906C (sub_1800B906C.c)
 *     sub_1800B9108 @ 0x1800B9108 (sub_1800B9108.c)
 *     sub_1800B91A4 @ 0x1800B91A4 (sub_1800B91A4.c)
 *     sub_1800B9240 @ 0x1800B9240 (sub_1800B9240.c)
 *     sub_1800B92DC @ 0x1800B92DC (sub_1800B92DC.c)
 *     sub_1800B9378 @ 0x1800B9378 (sub_1800B9378.c)
 *     sub_1800B9414 @ 0x1800B9414 (sub_1800B9414.c)
 *     sub_1800B94B0 @ 0x1800B94B0 (sub_1800B94B0.c)
 *     sub_1800B954C @ 0x1800B954C (sub_1800B954C.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800BD2E0(__int64 a1)
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
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+40h] [rbp+10h] BYREF
  struct _Mtx_internal_imp_t *v23; // [rsp+48h] [rbp+18h]

  v1 = (__int64 *)(a1 + 496);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  v23 = (struct _Mtx_internal_imp_t *)(a1 + 512);
  sub_180012AC4(a1 + 512);
  v22 = _std_type_info_hash(&qword_1801BDFD8);
  v3 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8B8C(*v3 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BEBB8);
  v4 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8E98(*v4 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BE550);
  v5 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B9240(*v5 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BE600);
  v6 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B92DC(*v6 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BDF08);
  v7 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8D60(*v7 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BE518);
  v8 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B9378(*v8 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BDC30);
  v9 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B954C(*v9 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BE670);
  v10 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B9414(*v10 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BECA0);
  v11 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8F34(*v11 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BE5C8);
  v12 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B94B0(*v12 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BE638);
  v13 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8FD0(*v13 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BE588);
  v14 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B906C(*v14 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BEBF0);
  v15 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B9108(*v15 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BEC68);
  v16 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8C28(*v16 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BEC30);
  v17 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B91A4(*v17 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BEB38);
  v18 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8CC4(*v18 + 40LL);
  Mtx_unlock(v2);
  v23 = v2;
  sub_180012AC4((__int64)v2);
  v22 = _std_type_info_hash(&qword_1801BDFA8);
  v19 = (_QWORD *)sub_1800509FC(v1, (__int64)v21, &v22);
  sub_1800B8DFC(*v19 + 40LL);
  return Mtx_unlock(v2);
}
