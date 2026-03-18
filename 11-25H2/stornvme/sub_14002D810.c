/*
 * XREFs of sub_14002D810 @ 0x14002D810
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 */

__int64 __fastcall sub_14002D810(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx

  v3 = 1;
  v4 = a2 >> 3;
  if ( (a2 & 8) == 0 )
    v3 = a2 & 7;
  sub_140009580(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v7 = *(_QWORD *)(a1 + 1104);
  v8 = *(_DWORD *)(v7 + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(v7 + 4096) = -124;
  *(_DWORD *)(v7 + 4140) = 0;
  *(_DWORD *)(v7 + 4136) = ((v3 | v8) & 0xFFFFFFF7 ^ (8 * (v4 & 1))) & 0xFFFFFC0F;
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v9) = 1;
  sub_140008130(a1, a1 + 1016, v9);
  if ( *(_BYTE *)(a1 + 1019) != 1 )
  {
    if ( *(_QWORD *)(a1 + 4048) )
    {
      v11 = sub_140005000(*(_QWORD *)(a1 + 4048));
      *(_BYTE *)(v11 + 4225) |= 8u;
      *(_BYTE *)(v12 + 3) = 4;
      sub_14000A8A0(a1, v12, 0);
      *(_QWORD *)(a1 + 4048) = 0LL;
    }
    *(_DWORD *)(a1 + 4056) &= ~1u;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  return StorPortExtendedFunction(31LL, a1, a3, v10);
}
