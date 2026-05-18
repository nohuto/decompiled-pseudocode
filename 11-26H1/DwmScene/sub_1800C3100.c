/*
 * XREFs of sub_1800C3100 @ 0x1800C3100
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001874C @ 0x18001874C (sub_18001874C.c)
 *     sub_1800540E4 @ 0x1800540E4 (sub_1800540E4.c)
 *     sub_1800541A4 @ 0x1800541A4 (sub_1800541A4.c)
 *     sub_180054278 @ 0x180054278 (sub_180054278.c)
 *     sub_180054298 @ 0x180054298 (sub_180054298.c)
 *     sub_1800851FC @ 0x1800851FC (sub_1800851FC.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 */

void __fastcall sub_1800C3100(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  _QWORD *v8; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  _QWORD v11[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( a2[3] == 1 )
  {
    sub_1800C31E8();
  }
  else
  {
    v6 = sub_1800540E4(a2[4]);
    sub_1800C37E0(a1, v6, *a2, a2[1], a2[2], v7, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_1800851FC(v11, a2[4]);
  sub_18001874C(a1 + 120, (__int64)v8);
  sub_1800129D0((__int64)v11);
  v9 = 0LL;
  v9.m128_f32[0] = (float)(int)sub_180054278(a1);
  v10 = 0LL;
  v10.m128_f32[0] = (float)(int)sub_1800541A4(a1);
  sub_180054298(a1, _mm_unpacklo_ps(v9, v10).m128_i64[0]);
}
