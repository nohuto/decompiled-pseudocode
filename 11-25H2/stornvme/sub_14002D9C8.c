/*
 * XREFs of sub_14002D9C8 @ 0x14002D9C8
 * Callers:
 *     sub_14001FD58 @ 0x14001FD58 (sub_14001FD58.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

__int64 __fastcall sub_14002D9C8(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_140009580(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v4 = *(_QWORD *)(a1 + 1104);
    v5 = *(_DWORD *)(v4 + 4140);
    *(_BYTE *)(v4 + 4096) = 9;
    *(_BYTE *)(v4 + 4136) = 12;
    *(_DWORD *)(v4 + 4140) = v5 ^ ((unsigned __int8)v5 ^ a2) & 1;
    sub_1400092F0(a1, a1 + 1016);
    LOBYTE(v6) = 1;
    return sub_140008130(a1, a1 + 1016, v6);
  }
  return result;
}
