/*
 * XREFs of sub_1400A60D0 @ 0x1400A60D0
 * Callers:
 *     sub_1400A62C8 @ 0x1400A62C8 (sub_1400A62C8.c)
 *     sub_1400A6780 @ 0x1400A6780 (sub_1400A6780.c)
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

void __fastcall sub_1400A60D0(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)a1 = off_1400F58E8;
  *(_QWORD *)(a1 + 8) = off_1400F58B0;
  *(_QWORD *)(a1 + 16) = off_1400F5838;
  *(_QWORD *)(a1 + 24) = off_1400F5800;
  v2 = (__int64 *)(a1 + 784);
  sub_1400125D4((__int64 *)(a1 + 784));
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    sub_140039BB8(v5, v3, v4);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  sub_140019444((__int64 *)(a1 + 88));
  if ( *(_QWORD *)(a1 + 1320) )
    sub_1400A687C();
  *(_QWORD *)(a1 + 1320) = 0LL;
  sub_1400390D8((__int64 *)(a1 + 1304), 0LL);
  sub_14004615C((_QWORD *)(a1 + 792));
  sub_1400125D4(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 744));
  v6 = *(_QWORD *)(a1 + 736);
  if ( v6 )
    sub_140007588(v6);
  sub_140003238((__int64 *)(a1 + 88));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
}
