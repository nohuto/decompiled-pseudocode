/*
 * XREFs of sub_180027EC8 @ 0x180027EC8
 * Callers:
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_18006E278 @ 0x18006E278 (sub_18006E278.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 *     sub_1800870B0 @ 0x1800870B0 (sub_1800870B0.c)
 *     sub_18008C030 @ 0x18008C030 (sub_18008C030.c)
 *     sub_18008E590 @ 0x18008E590 (sub_18008E590.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_180028640 @ 0x180028640 (sub_180028640.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180027EC8(__int64 a1, int a2, int a3, char a4, int a5, __int64 a6)
{
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // r15
  __int64 *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  _QWORD *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rsi
  __int64 v34; // [rsp+58h] [rbp-51h] BYREF
  __int64 v35; // [rsp+60h] [rbp-49h]
  unsigned int v36; // [rsp+68h] [rbp-41h]
  __int64 v37[4]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v38[16]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-9h]

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  *(_DWORD *)(a1 + 112) = a5;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v10 = sub_180016FD4(v9, &v34);
  v11 = (_QWORD *)(a1 + 136);
  sub_180011F5C((_QWORD *)(a1 + 136), v10);
  if ( v35 )
    sub_180010EC8(v35);
  sub_18002912C(a1, v38);
  if ( !v39 )
    sub_18001490C((__int64)v38, "RenderTargetD3D11", 0x11uLL);
  v12 = *v11;
  v13 = sub_1800181BC(v37, (__int64)v38);
  sub_1800292C4(v12, v13);
  sub_180029310(*v11, 1LL, 0LL);
  sub_180029310(*v11, (unsigned int)(v14 + 2), v14);
  sub_180029310(*v11, (unsigned int)(v15 + 4), v15);
  sub_180029310(*v11, (unsigned int)(v16 + 8), v16);
  v36 = a5 & 0xFFFFFF7C | 3;
  sub_180053894(*v11, v7, v8, 0, a4, 0, a5 & 0x7C | 3, 0LL, 0, 0LL);
  if ( (a5 & 0x80u) != 0 )
  {
    v17 = (_QWORD *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      v18 = sub_180016FD4(v9, &v34);
      sub_180011F5C((_QWORD *)(a1 + 152), v18);
      if ( v35 )
        sub_180010EC8(v35);
    }
    v19 = *v17;
    v20 = sub_18001C8C0(v37, (__int64)v38, (__int64)" (staging)");
    sub_1800292C4(v19, v20);
    sub_180029310(*v17, 1LL, 0LL);
    sub_180029310(*v17, (unsigned int)(v21 + 2), v21);
    sub_180029310(*v17, (unsigned int)(v22 + 4), v22);
    sub_180029310(*v17, (unsigned int)(v23 + 8), v23);
    sub_180053894(*v17, v7, v8, 0, a4, 3, v36 & 0x7C | 0x80, v24, v24, v24);
  }
  v25 = 0LL;
  v25.m128_f32[0] = (float)v7;
  v26 = 0LL;
  v26.m128_f32[0] = (float)v8;
  sub_180028640(a1, _mm_unpacklo_ps(v25, v26).m128_u64[0]);
  if ( a6 )
  {
    LOBYTE(v27) = 1;
    sub_180029310(a1, 1LL, v27);
  }
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
  {
    if ( a6 )
    {
      sub_1800281D0(a1, a6);
      sub_180029310(a1, 2LL, 0LL);
      sub_180029310(v29, (unsigned int)(v28 + 4), v28);
    }
    else
    {
      sub_180036040(v9, v37);
      v30 = (_QWORD *)v37[0];
      v31 = v37[1];
      while ( v30 != (_QWORD *)v31 )
      {
        sub_180012C40(&v34, v30);
        sub_1800281D0(a1, v34);
        if ( v35 )
          sub_180010EC8(v35);
        v30 += 2;
      }
      sub_1800141F0((__int64)v37);
    }
  }
  return sub_1800129D0((__int64)v38);
}
