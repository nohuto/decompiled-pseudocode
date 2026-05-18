/*
 * XREFs of sub_1800116C8 @ 0x1800116C8
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_18006E278 @ 0x18006E278 (sub_18006E278.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 *     sub_1800870B0 @ 0x1800870B0 (sub_1800870B0.c)
 *     sub_18008C030 @ 0x18008C030 (sub_18008C030.c)
 *     sub_18008E590 @ 0x18008E590 (sub_18008E590.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 *     sub_1800BFBF0 @ 0x1800BFBF0 (sub_1800BFBF0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180011BE0 @ 0x180011BE0 (sub_180011BE0.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800116C8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180011BE0(a2);
  sub_180029C50(a1 + 808, v9);
  v4 = a1 + 864;
  v8 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  v6 = *(_QWORD *)(a1 + 872);
  if ( v6 == *(_QWORD *)(a1 + 880) )
    sub_1800119CC(v4, v6, &v8);
  else
    sub_1800119A4(v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v8 + 1));
  sub_180011E54(v9);
  sub_180032FE0(a1, *a2, 0LL);
  return a2;
}
