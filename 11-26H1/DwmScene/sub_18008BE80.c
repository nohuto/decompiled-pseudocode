/*
 * XREFs of sub_18008BE80 @ 0x18008BE80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18008BB60 @ 0x18008BB60 (sub_18008BB60.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008BE80(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  unsigned __int32 v17; // [rsp+50h] [rbp-20h]
  unsigned __int32 v18; // [rsp+54h] [rbp-1Ch]
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+60h] [rbp-10h]

  v4 = sub_180016EFC(*(_QWORD **)(a2 + 3984), &si128);
  v5 = (__int64 *)(a1 + 216);
  sub_180011F5C((_QWORD *)(a1 + 216), v4);
  if ( si128.m128i_i64[1] )
    sub_180010EC8(si128.m128i_i64[1]);
  v6 = *v5;
  v7 = sub_180011CC4(&si128, "Image Processing Blur Sampler");
  sub_1800292C4(v6, (__int64)v7);
  v8 = *v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191490);
  v13 = 0;
  v16 = 0;
  v18 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
  v17 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
  v19 = 0;
  v14 = 1;
  v15 = 7;
  v20 = 0;
  v21 = 2139095039;
  sub_180052460(v8, &si128, 0LL);
  v9 = *(int *)(a1 + 144);
  v10 = sub_18008BB60(a1, si128.m128i_i64);
  sub_180011F5C((_QWORD *)(a1 + 184), v10);
  if ( si128.m128i_i64[1] )
    sub_180010EC8(si128.m128i_i64[1]);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180108FD8[v9],
           dword_180108FE8[v9]);
}
