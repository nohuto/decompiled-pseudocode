/*
 * XREFs of sub_1800C50F4 @ 0x1800C50F4
 * Callers:
 *     sub_1800C3084 @ 0x1800C3084 (sub_1800C3084.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001874C @ 0x18001874C (sub_18001874C.c)
 *     sub_1800531D0 @ 0x1800531D0 (sub_1800531D0.c)
 *     sub_180053314 @ 0x180053314 (sub_180053314.c)
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 *     sub_1800541A4 @ 0x1800541A4 (sub_1800541A4.c)
 *     sub_180054278 @ 0x180054278 (sub_180054278.c)
 *     sub_180054298 @ 0x180054298 (sub_180054298.c)
 *     sub_1800851FC @ 0x1800851FC (sub_1800851FC.c)
 *     sub_1800C253C @ 0x1800C253C (sub_1800C253C.c)
 *     sub_1800C25BC @ 0x1800C25BC (sub_1800C25BC.c)
 *     sub_1800C26E0 @ 0x1800C26E0 (sub_1800C26E0.c)
 *     sub_1800C403C @ 0x1800C403C (sub_1800C403C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800C50F4(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  char v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  void **v9; // rdx
  int v10; // r9d
  void ***v11; // rax
  int v12; // r8d
  int v13; // r14d
  int v14; // edx
  _QWORD *v15; // rax
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+48h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]

  v2 = 0;
  if ( *(_QWORD *)(a1 + 160) || (v5 = 1, (a2 & 1) == 0) )
    v5 = 0;
  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 )
  {
    v21 = 0LL;
    v22 = 0;
    v19 = 0LL;
    v20 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 80LL))(v6, &v19);
    v11 = (void ***)sub_1800C25BC((__int64)&v18, a2, v12, SDWORD1(v20), &v19);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 176);
  if ( v7 )
  {
    LODWORD(v21) = 0;
    v19 = 0LL;
    v20 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 80LL))(v7, &v19);
    v11 = (void ***)sub_1800C26E0((__int64)&v18, a2, SDWORD2(v19), v10, &v19);
LABEL_10:
    v8 = (_QWORD *)(a1 + 112);
    sub_1800C253C((void ***)(a1 + 112), v11);
    sub_1800531D0(&v18);
    goto LABEL_11;
  }
  v8 = (_QWORD *)(a1 + 112);
  v9 = *(void ***)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v9 )
    sub_180053314(0LL, v9);
LABEL_11:
  if ( v5 )
    sub_1800C403C((_QWORD *)a1);
  v13 = 0;
  if ( *v8 && *(_QWORD *)*v8 )
  {
    v2 = sub_180054278(a1);
    v13 = sub_1800541A4(a1);
    v14 = sub_1800540C4(a1);
  }
  else
  {
    v14 = 0;
  }
  v15 = sub_1800851FC(&v19, v14);
  sub_18001874C(a1 + 120, (__int64)v15);
  sub_1800129D0((__int64)&v19);
  v16 = 0LL;
  v17 = 0LL;
  v16.m128_f32[0] = (float)v2;
  v17.m128_f32[0] = (float)v13;
  sub_180054298(a1, _mm_unpacklo_ps(v16, v17).m128_i64[0]);
}
