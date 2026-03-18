/*
 * XREFs of sub_1400285D0 @ 0x1400285D0
 * Callers:
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 * Callees:
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400285D0(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1560);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    if ( *(_BYTE *)(a1 + 1008) )
      *(_DWORD *)(a1 + 4056) |= 0x20000u;
    *(_BYTE *)(a1 + 1019) = 0;
    sub_140032C80(*(_QWORD *)(a1 + 1104), 0LL, 4232LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
    *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(a1 + 1008) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v5 = *(_QWORD *)(a1 + 1104);
    v6 = *(_DWORD *)(a1 + 60) & (*(_DWORD *)(v3 + 92) & 0x8000300 | ((*(_BYTE *)(v3 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 3952) = v6;
    *(_DWORD *)(v5 + 4140) = v6;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_BYTE *)(v5 + 4136) = 11;
    sub_1400092F0(a1, a1 + 1016);
    return sub_140008590(a1, a1 + 1016, a2, 0x989680u);
  }
  return result;
}
