/*
 * XREFs of sub_1401305DC @ 0x1401305DC
 * Callers:
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     sub_1400E91B4 @ 0x1400E91B4 (sub_1400E91B4.c)
 *     sub_1400F1650 @ 0x1400F1650 (sub_1400F1650.c)
 */

char __fastcall sub_1401305DC(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // r9d
  int v4; // r8d
  char v5; // r11
  int v6; // r9d
  int v7; // r9d

  v2 = *(_QWORD *)(a1 + 128);
  v3 = 0;
  v4 = -1073740534;
  if ( a2 != 7 )
    v4 = 0;
  v5 = 56;
  if ( a2 != 7 )
    v5 = 1;
  LOBYTE(v3) = a2 == 7;
  v6 = v3 + 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 400) + 184LL) & 0x40000000) != 0 || *(_BYTE *)(a1 + 1728) == 1 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        LOBYTE(v2) = sub_1400E91B4(a1, v5, v4);
    }
    else
    {
      LOBYTE(v2) = sub_1400F1650(a1);
    }
  }
  return v2;
}
