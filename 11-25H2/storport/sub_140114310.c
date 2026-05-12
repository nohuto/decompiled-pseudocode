/*
 * XREFs of sub_140114310 @ 0x140114310
 * Callers:
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int16 __fastcall sub_140114310(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  int v5; // ecx

  memset_0(a2, 0, 0x40uLL);
  *a2 = 127;
  a2[4] = 1;
  *((_WORD *)a2 + 21) = *(_WORD *)(a1 + 136);
  LOWORD(v4) = *(_WORD *)(a1 + 124);
  a2[46] |= 4u;
  LOWORD(v4) = v4 - 1;
  *((_WORD *)a2 + 22) = v4;
  if ( !*(_WORD *)(a1 + 136) )
  {
    v4 = *(_QWORD *)(a1 + 88);
    v5 = *(_DWORD *)(v4 + 1076);
    if ( v5 )
      *((_DWORD *)a2 + 12) = v5;
  }
  return v4;
}
