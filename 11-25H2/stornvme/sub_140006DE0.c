/*
 * XREFs of sub_140006DE0 @ 0x140006DE0
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

__int64 __fastcall sub_140006DE0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1560);
  if ( (*(_BYTE *)(v2 + 525) & 1) != 0
    && (*(_WORD *)(a1 + 186) > 1u || *(_BYTE *)(a1 + 185))
    && (*(_BYTE *)(v2 + 520) & 0x10) != 0 )
  {
    sub_140009580(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~4u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v3 = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(v3 + 4136) = 6;
    v4 = *(_DWORD *)(v3 + 4136);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_DWORD *)(v3 + 4136) = v4 & 0xFFFFF8FF | 0x300;
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = sub_140006200;
    sub_1400092F0(a1, a1 + 1016);
    LOBYTE(v5) = 1;
    result = sub_140008130(a1, a1 + 1016, v5);
    if ( *(_BYTE *)(a1 + 1019) != 1 )
      *(_BYTE *)(a1 + 3956) &= ~4u;
  }
  return result;
}
