/*
 * XREFs of sub_1400069C0 @ 0x1400069C0
 * Callers:
 *     sub_140006B50 @ 0x140006B50 (sub_140006B50.c)
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_1400109F0 @ 0x1400109F0 (sub_1400109F0.c)
 *     sub_14001EBFC @ 0x14001EBFC (sub_14001EBFC.c)
 *     sub_14001F398 @ 0x14001F398 (sub_14001F398.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_1400069C0(__int64 a1, unsigned __int8 a2, char a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 result; // rax

  sub_140009580(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  sub_1400042C0(a1, a1 + 1016);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^ a2) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^ (unsigned __int8)(2 * a3)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4144LL) = a4
                                               / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) >> 7) & 0xF) + 12));
  sub_140032980(*(_QWORD *)(a1 + 1656), a5, a6);
  v10 = HIDWORD(*(_QWORD *)(a1 + 1664));
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4148LL) = *(_QWORD *)(a1 + 1664) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4152LL) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4156LL) = a6 >> 4;
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v11) = 1;
  sub_140008130(a1, a1 + 1016, v11);
  result = 0LL;
  if ( *(_BYTE *)(a1 + 1019) != 1 )
    return 3238002689LL;
  return result;
}
