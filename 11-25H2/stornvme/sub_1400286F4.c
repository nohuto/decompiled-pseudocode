/*
 * XREFs of sub_1400286F4 @ 0x1400286F4
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_140023AC0 @ 0x140023AC0 (sub_140023AC0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14001942C @ 0x14001942C (sub_14001942C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400286F4(__int64 a1)
{
  int i; // ecx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rbx

  sub_140009580(a1, a1 + 1008);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v3 = *(_QWORD *)(a1 + 1104);
  v4 = *(_QWORD *)(a1 + 1568);
  *(_BYTE *)(v3 + 4096) = 6;
  *(_DWORD *)(v3 + 4100) = 0;
  *(_QWORD *)(v3 + 4120) = v4;
  *(_BYTE *)(v3 + 4136) = 1;
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v5) = 1;
  sub_140008130(a1, a1 + 1016, v5);
  LODWORD(v6) = -1056964607;
  switch ( *(_BYTE *)(a1 + 1019) & 0x3F )
  {
    case 1:
      if ( sub_14001942C(a1) )
      {
        v7 = *(_QWORD *)(a1 + 1560);
        if ( *(_WORD *)v7 != 0x8086 )
        {
          sub_140032C80(v7, v6, 4096LL);
          *(_BYTE *)(v7 + 261) |= 1u;
          *(_QWORD *)(v7 + 24) = 0x326D616874616843LL;
          LODWORD(v6) = 0;
          *(_DWORD *)v7 = 538017926;
          *(_DWORD *)(v7 + 4) = 842084402;
          *(_BYTE *)(v7 + 64) = 48;
          *(_BYTE *)(v7 + 72) = 1;
          *(_WORD *)(v7 + 73) = 1059;
          *(_BYTE *)(v7 + 259) = 3;
          *(_WORD *)(v7 + 512) = 17510;
          *(_DWORD *)(v7 + 516) = 1;
        }
      }
      break;
    case 5:
      LODWORD(v6) = -1056964596;
      break;
    case 8:
      LODWORD(v6) = -1056964599;
      break;
    case 9:
      LODWORD(v6) = -1056964594;
      break;
  }
  return (unsigned int)v6;
}
