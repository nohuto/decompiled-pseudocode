/*
 * XREFs of sub_14009E30C @ 0x14009E30C
 * Callers:
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 * Callees:
 *     sub_1400589E8 @ 0x1400589E8 (sub_1400589E8.c)
 *     sub_1400A2C40 @ 0x1400A2C40 (sub_1400A2C40.c)
 */

_QWORD *__fastcall sub_14009E30C(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // edi
  char v9; // si
  char v10; // al

  v3 = sub_1400589E8(60781999LL);
  *a2 = 0LL;
  v4 = v3 & 0xFFFFFF3F;
  v5 = (8 * (v3 & 0x80 | (4 * (v3 & 0x40)))) | ((v3 & 3) << 7);
  if ( (_DWORD)v4 )
  {
    v6 = 0;
    if ( (_DWORD)v4 == 2 )
      v6 = 64;
  }
  else
  {
    v6 = 64;
  }
  v7 = v6 | v5;
  LOBYTE(v4) = 0;
  *(_DWORD *)a2 = v7;
  v8 = 1;
  if ( (v7 & 0x400) != 0 && v7 >= 0x800 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( (v7 & 0x40) == 0 )
      goto LABEL_12;
  }
  v10 = sub_1400A2C40(&unk_1400E9888, v4);
  LOBYTE(v4) = v10;
  if ( v9 && !v10 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_12:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !(_BYTE)v4 )
    v8 = 0;
  *(_DWORD *)a2 = v8 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
