/*
 * XREFs of sub_1800CC3A0 @ 0x1800CC3A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_180029258 @ 0x180029258 (sub_180029258.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800CC3A0(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  int v7; // r9d
  int v8; // r9d
  __m128i v9; // xmm6
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, unsigned int *, _QWORD *, __int64); // rdi
  int v13; // r12d
  const char *v14; // rax
  const char *v15; // rbx
  __int64 v16; // rdi
  void (__fastcall *v17)(__int64, void *, _QWORD, const char *); // rsi
  __m128i v19; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-31h] BYREF
  __m128i v21; // [rsp+58h] [rbp-21h]
  unsigned int v22; // [rsp+68h] [rbp-11h] BYREF
  int v23; // [rsp+6Ch] [rbp-Dh]
  int v24; // [rsp+70h] [rbp-9h]
  int v25; // [rsp+74h] [rbp-5h]
  __int64 v26; // [rsp+78h] [rbp-1h]

  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  v25 = 0;
  if ( !a4 )
  {
LABEL_9:
    v23 = 0;
    goto LABEL_10;
  }
  v7 = a4 - 1;
  if ( !v7 )
  {
    v23 = 1;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v23 = 3;
      v25 = 196608;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v23 = 2;
LABEL_10:
  v25 = 0x10000;
LABEL_11:
  v24 = 4;
  v22 = a3;
  v26 = 0LL;
  sub_180029258(a1, a3, 7);
  v20[0] = a2;
  v20[1] = 0LL;
  sub_180012A94(a1 + 72, &v19);
  v9 = v19;
  v21 = v19;
  v10 = _mm_srli_si128(v19, 8).m128i_u64[0];
  sub_1800BC108(v19.m128i_i64[0], &v19);
  v11 = v19.m128i_i64[0];
  v12 = *(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD *, __int64))(*(_QWORD *)v19.m128i_i64[0] + 24LL);
  sub_18000F938((__int64 *)(a1 + 120));
  v13 = v12(v11, &v22, v20, a1 + 120);
  sub_1800BDDBC(v9.m128i_i64[0], v13);
  if ( v13 >= 0 )
  {
    v14 = (const char *)sub_1800148EC(a5);
    v15 = v14;
    v16 = *(_QWORD *)(a1 + 120);
    if ( v16 )
    {
      v17 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v16 + 40LL);
      if ( v14 )
        LODWORD(v14) = strnlen(v14, 0x7FFFFFFFuLL);
      v17(v16, &unk_1800F9CC8, (unsigned int)v14, v15);
    }
  }
  sub_18000F938(v19.m128i_i64);
  if ( v10 )
    sub_180010EC8(_mm_srli_si128(v9, 8).m128i_i64[0]);
  return v13 == 0;
}
