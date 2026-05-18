/*
 * XREFs of sub_1800C1D80 @ 0x1800C1D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_180028564 @ 0x180028564 (sub_180028564.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C04E0 @ 0x1800C04E0 (sub_1800C04E0.c)
 *     sub_1800C1A50 @ 0x1800C1A50 (sub_1800C1A50.c)
 *     sub_1800C2320 @ 0x1800C2320 (sub_1800C2320.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800C1D80(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r15d
  int v8; // r12d
  __int64 *v9; // rax
  __int64 *v10; // rax
  bool v11; // di
  int v12; // edx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *, __int64); // rdi
  int v15; // eax
  _QWORD *v16; // rax
  const char *v17; // rax
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  __int64 result; // rax
  __int64 v21; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v22; // [rsp+38h] [rbp-99h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-91h] BYREF
  __int64 v24; // [rsp+50h] [rbp-81h] BYREF
  __int64 v25; // [rsp+58h] [rbp-79h]
  __int64 v26; // [rsp+60h] [rbp-71h] BYREF
  __int64 v27; // [rsp+68h] [rbp-69h]
  _DWORD v28[3]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v29; // [rsp+7Ch] [rbp-55h]
  __int64 v30; // [rsp+88h] [rbp-49h] BYREF
  __int64 v31; // [rsp+90h] [rbp-41h]
  __int128 v32; // [rsp+98h] [rbp-39h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-29h]
  __int64 v34; // [rsp+B8h] [rbp-19h]
  int v35; // [rsp+C0h] [rbp-11h]
  _QWORD v36[4]; // [rsp+C8h] [rbp-9h] BYREF

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  sub_1800C2320(a1, v7, v8, a4, a5);
  sub_180012A94(a1 + 72, &v30);
  v9 = sub_180012C40(&v24, &v30);
  sub_1800C1A50(&v26, v9);
  sub_1800BC108(v26, &v21);
  v10 = sub_180012C40(v23, (_QWORD *)(a1 + 96));
  sub_18001818C(&v24, v10);
  sub_1800C4EEC(v24, v23);
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23[0] + 80LL))(v23[0], &v32);
  v11 = DWORD1(v33) > 1;
  v29 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v12 = 2;
  else
    v12 = (a5 & 8) != 0;
  v28[0] = sub_1800C04E0(a4, v12);
  v28[1] = v11 ? 6 : 4;
  v28[2] = 0;
  sub_1800C4EEC(v24, &v22);
  v13 = v21;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v21 + 72LL);
  sub_18000F938((__int64 *)(a1 + 128));
  v15 = v14(v13, v22, v28, a1 + 128);
  sub_1800BDDBC(v26, v15);
  v16 = sub_18002912C(a1, v36);
  v17 = (const char *)sub_1800148EC((__int64)v16);
  sub_180012384(*(_QWORD *)(a1 + 128), v17);
  sub_1800129D0((__int64)v36);
  v18 = 0LL;
  v18.m128_f32[0] = (float)v7;
  v19 = 0LL;
  v19.m128_f32[0] = (float)v8;
  sub_180028564(a1, _mm_unpacklo_ps(v18, v19).m128_i64[0]);
  sub_18000F938(&v22);
  sub_18000F938(v23);
  if ( v25 )
    sub_180010EC8(v25);
  result = sub_18000F938(&v21);
  if ( v27 )
    result = sub_180010EC8(v27);
  if ( v31 )
    return sub_180010EC8(v31);
  return result;
}
