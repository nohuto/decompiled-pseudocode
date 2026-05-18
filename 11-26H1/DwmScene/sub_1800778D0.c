/*
 * XREFs of sub_1800778D0 @ 0x1800778D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180012E6C @ 0x180012E6C (sub_180012E6C.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_18005DC5C @ 0x18005DC5C (sub_18005DC5C.c)
 *     sub_180075FB8 @ 0x180075FB8 (sub_180075FB8.c)
 *     sub_180076054 @ 0x180076054 (sub_180076054.c)
 *     sub_180076168 @ 0x180076168 (sub_180076168.c)
 *     sub_180077F90 @ 0x180077F90 (sub_180077F90.c)
 *     sub_180077FD8 @ 0x180077FD8 (sub_180077FD8.c)
 *     sub_18007ECA8 @ 0x18007ECA8 (sub_18007ECA8.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 *     sub_18007F20C @ 0x18007F20C (sub_18007F20C.c)
 *     sub_18009BCD8 @ 0x18009BCD8 (sub_18009BCD8.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800778D0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h]
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v14[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v15[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v16[24]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v17[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v18[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v19[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v20[24]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v21[24]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v22[48]; // [rsp+130h] [rbp+30h] BYREF

  v13 = 0LL;
  sub_18000D81C((__int64)v22, 16LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_180012A94(*a2 + 56LL, &v8);
  sub_18001367C(v8, &v9);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  sub_180012E6C(v9, (__int64)v21);
  sub_180076168(v9, (__int64)v20);
  sub_18009BCD8((unsigned int)v21, (unsigned int)v20, a1 + 152, (unsigned int)&v13, (__int64)v22);
  sub_180012C40(&v8, (_QWORD *)(a1 + 56));
  sub_18005DC5C(v8, &v11, 9);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010EC8(*((__int64 *)&v8 + 1));
  v4 = v11;
  if ( v11 )
  {
    sub_18007F1B0(v11, &unk_1801CC118);
    sub_18007F1B0(v4, &unk_1801CC138);
    sub_18007F1B0(v4, &unk_1801CC158);
    v5 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 240LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v5.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
    sub_18007F1B0(v4, &unk_1801CC178);
    v6 = (__m128i)_mm_sub_ps(*(__m128 *)(*(_QWORD *)(a1 + 216) + 256LL), *(__m128 *)(*(_QWORD *)(a1 + 216) + 272LL));
    *(_QWORD *)&v8 = v6.m128i_i64[0];
    *((_QWORD *)&v8 + 1) = _mm_srli_si128(v6, 8).m128i_u64[0];
    sub_18007F1B0(v4, &unk_1801CC198);
    sub_18007F1B0(v4, &unk_1801CC1B8);
    sub_18007F1B0(v4, &unk_1801CC1D8);
    sub_18007F1B0(v4, &unk_1801CC1F8);
    sub_18007F1B0(v4, &unk_1801CC218);
    v8 = *(_OWORD *)(*(_QWORD *)(a1 + 216) + 336LL);
    sub_18007F1B0(v4, &unk_1801CC238);
    sub_180076054((__int64)v19, (void *)(*(_QWORD *)(a1 + 216) + 496LL), *(_QWORD *)(a1 + 216) + 544LL);
    sub_18007F20C(v4, &unk_1801CC258, v19);
    sub_180076054((__int64)v18, (void *)(*(_QWORD *)(a1 + 216) + 544LL), *(_QWORD *)(a1 + 216) + 592LL);
    sub_18007F20C(v4, &unk_1801CC278, v18);
    sub_180076054((__int64)v17, (void *)(*(_QWORD *)(a1 + 216) + 448LL), *(_QWORD *)(a1 + 216) + 496LL);
    sub_18007F20C(v4, &unk_1801CC2F8, v17);
    sub_180076054((__int64)v16, (void *)(*(_QWORD *)(a1 + 216) + 400LL), *(_QWORD *)(a1 + 216) + 448LL);
    sub_18007F20C(v4, &unk_1801CC2D8, v16);
    sub_180076054((__int64)v15, (void *)(*(_QWORD *)(a1 + 216) + 352LL), *(_QWORD *)(a1 + 216) + 400LL);
    sub_18007F20C(v4, &unk_1801CC2B8, v15);
    sub_180075FB8(v14, *(_QWORD *)(a1 + 216), *(_QWORD *)(a1 + 216) + 192LL);
    sub_18007ECA8(v4, &unk_1801CC298, v14);
    sub_180077F90(v14);
    sub_180077FD8(v15);
    sub_180077FD8(v16);
    sub_180077FD8(v17);
    sub_180077FD8(v18);
    sub_180077FD8(v19);
  }
  if ( v12 )
    sub_180010EC8(v12);
  sub_1800141F0((__int64)v20);
  sub_1800141F0((__int64)v21);
  if ( v10 )
    sub_180010EC8(v10);
  result = sub_18000BFA4(
             (__int64)v22,
             16LL,
             3LL,
             (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_180010EC8(*((__int64 *)&v13 + 1));
  return result;
}
