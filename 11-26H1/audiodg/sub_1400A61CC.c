/*
 * XREFs of sub_1400A61CC @ 0x1400A61CC
 * Callers:
 *     sub_1400A63C0 @ 0x1400A63C0 (sub_1400A63C0.c)
 *     sub_1400A67C0 @ 0x1400A67C0 (sub_1400A67C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_1400390D8 @ 0x1400390D8 (sub_1400390D8.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 *     sub_14004615C @ 0x14004615C (sub_14004615C.c)
 *     sub_1400A687C @ 0x1400A687C (sub_1400A687C.c)
 */

void __fastcall sub_1400A61CC(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)a1 = off_1400F5988;
  *(_QWORD *)(a1 + 8) = off_1400F58B0;
  *(_QWORD *)(a1 + 16) = off_1400F5838;
  *(_QWORD *)(a1 + 24) = off_1400F5950;
  v2 = (__int64 *)(a1 + 816);
  sub_1400125D4((__int64 *)(a1 + 816));
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    sub_140039BB8(v5, v3, v4);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  sub_140019444((__int64 *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 1352) )
    sub_1400A687C();
  *(_QWORD *)(a1 + 1352) = 0LL;
  sub_1400390D8((__int64 *)(a1 + 1336), 0LL);
  sub_14004615C((_QWORD *)(a1 + 824));
  sub_1400125D4(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 776));
  v6 = *(_QWORD *)(a1 + 768);
  if ( v6 )
    sub_140007588(v6);
  sub_140003238((__int64 *)(a1 + 88));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
}
