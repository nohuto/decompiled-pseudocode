/*
 * XREFs of sub_1800C9D40 @ 0x1800C9D40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C9D40(__int64 a1, unsigned int **a2)
{
  unsigned int *v4; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int128 *, __int64); // rsi
  int v10; // eax
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  __m128i si128; // [rsp+20h] [rbp-59h]
  __m128i v17; // [rsp+30h] [rbp-49h]
  int v18; // [rsp+40h] [rbp-39h]
  int v19; // [rsp+44h] [rbp-35h]
  int v20; // [rsp+48h] [rbp-31h]
  __int64 v21; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h] BYREF
  __int64 v23; // [rsp+60h] [rbp-19h]
  unsigned int **v24; // [rsp+68h] [rbp-11h]
  __int128 v25; // [rsp+70h] [rbp-9h] BYREF
  __int128 v26; // [rsp+80h] [rbp+7h]
  __int128 v27; // [rsp+90h] [rbp+17h]
  unsigned int v28; // [rsp+A0h] [rbp+27h]

  v24 = a2;
  sub_180012A94(a1 + 72, &v22);
  v4 = *a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191540);
  v17 = _mm_load_si128((const __m128i *)&xmmword_180191460);
  v18 = 4;
  v19 = 5;
  v20 = 16;
  LODWORD(v25) = si128.m128i_i32[*v4];
  v5 = _mm_load_si128((const __m128i *)&xmmword_1800FA620);
  si128 = v5;
  v17.m128i_i32[0] = 5;
  DWORD1(v25) = si128.m128i_i32[v4[1]];
  si128 = v5;
  v17.m128i_i32[0] = 5;
  DWORD2(v25) = si128.m128i_i32[v4[2]];
  si128 = v5;
  v17.m128i_i32[0] = 5;
  HIDWORD(v25) = si128.m128i_i32[v4[3]];
  v6 = 0LL;
  v7 = 1;
  do
    si128.m128i_i32[v6++] = v7++;
  while ( v6 < 8 );
  DWORD2(v26) = si128.m128i_i32[v4[6]];
  DWORD1(v26) = v4[5];
  v28 = v4[12];
  HIDWORD(v27) = v4[11];
  LODWORD(v26) = v4[4];
  HIDWORD(v26) = v4[7];
  LODWORD(v27) = v4[8];
  *(_QWORD *)((char *)&v27 + 4) = *(_QWORD *)(v4 + 9);
  sub_1800BC108(v22, &v21);
  v8 = v21;
  v9 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v21 + 184LL);
  sub_18000F938((__int64 *)(a1 + 184));
  v10 = v9(v8, &v25, a1 + 184);
  sub_1800BDDBC(v22, v10);
  *(_OWORD *)(a1 + 128) = v25;
  *(_OWORD *)(a1 + 144) = v26;
  *(_OWORD *)(a1 + 160) = v27;
  *(_DWORD *)(a1 + 176) = v28;
  v11 = *a2;
  v12 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 96) = v11;
  v13 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v12;
  if ( v13 )
    sub_180010EC8(v13);
  result = sub_18000F938(&v21);
  if ( v23 )
    result = sub_180010EC8(v23);
  v15 = (__int64)a2[1];
  if ( v15 )
    return sub_180010EC8(v15);
  return result;
}
