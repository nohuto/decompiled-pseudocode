/*
 * XREFs of sub_14000D400 @ 0x14000D400
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

void __fastcall sub_14000D400(__int64 a1, unsigned __int8 a2)
{
  char v4; // si
  char v5; // di
  char v6; // al
  _BYTE *v7; // rcx
  char v8; // al

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v4 = *(_BYTE *)(a1 + 44);
    v5 = *(_BYTE *)(a1 + 45);
    sub_140009580(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v6 = v5;
    v7 = *(_BYTE **)(a1 + 1104);
    if ( !v5 )
      v6 = 0;
    v7[4140] = v6;
    v8 = v4;
    if ( !v4 )
      v8 = 0;
    v7[4096] = 9;
    v7[4141] = v8;
    v7[4136] = 8;
    sub_1400092F0(a1, a1 + 1016);
    sub_140008130(a1, a1 + 1016, a2);
  }
}
