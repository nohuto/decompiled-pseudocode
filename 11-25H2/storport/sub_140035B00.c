/*
 * XREFs of sub_140035B00 @ 0x140035B00
 * Callers:
 *     sub_140053318 @ 0x140053318 (sub_140053318.c)
 * Callees:
 *     sub_1400727B0 @ 0x1400727B0 (sub_1400727B0.c)
 */

__int64 __fastcall sub_140035B00(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // ecx
  unsigned int v5; // ebx

  v4 = *(_DWORD *)(a1 + 724);
  v5 = -1073741823;
  if ( a2 && a2 <= a3 )
  {
    *(_DWORD *)(a1 + 724) = a2;
  }
  else if ( a2 != v4 )
  {
    return v5;
  }
  v5 = 0;
  *(_DWORD *)(a1 + 928) = a3;
  if ( (byte_1401694F0 & 0x10) != 0 )
    sub_1400727B0(
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      a2,
      a3,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      v4,
      a2,
      a3,
      0);
  return v5;
}
