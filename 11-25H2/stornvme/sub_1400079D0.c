/*
 * XREFs of sub_1400079D0 @ 0x1400079D0
 * Callers:
 *     sub_140007D80 @ 0x140007D80 (sub_140007D80.c)
 *     sub_140021B90 @ 0x140021B90 (sub_140021B90.c)
 *     sub_14002208C @ 0x14002208C (sub_14002208C.c)
 * Callees:
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

bool __fastcall sub_1400079D0(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  sub_140009580(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v4 = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(v4 + 4096) = 4;
  *(_WORD *)(v4 + 4136) = a2;
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v5) = 1;
  sub_140008590(a1, a1 + 1016, v5, 10000000LL);
  return *(_BYTE *)(a1 + 1019) == 1;
}
