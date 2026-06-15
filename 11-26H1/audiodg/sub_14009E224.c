/*
 * XREFs of sub_14009E224 @ 0x14009E224
 * Callers:
 *     sub_14009DAF4 @ 0x14009DAF4 (sub_14009DAF4.c)
 * Callees:
 *     sub_1400589E8 @ 0x1400589E8 (sub_1400589E8.c)
 *     sub_1400A2C04 @ 0x1400A2C04 (sub_1400A2C04.c)
 */

_QWORD *__fastcall sub_14009E224(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  char v9; // si
  char v10; // al

  v3 = sub_1400589E8(60711085LL);
  *a2 = 0LL;
  v4 = v3 & 0xFFFFFF3F;
  v5 = v3 & 0x80 | (4 * (v3 & 0x40u));
  v6 = (8 * (int)v5) | ((unsigned __int8)(v3 & 3) << 7);
  if ( (v3 & 0xFFFFFF3F) != 0 )
  {
    v7 = 0;
    if ( v4 == 2 )
      v7 = 64;
    v6 = v7 | (unsigned int)v6;
  }
  *(_DWORD *)a2 = v6;
  LOBYTE(v5) = 0;
  v8 = 1;
  if ( (v6 & 0xC00) == 0xC00 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( (v6 & 0x40) == 0 )
      goto LABEL_11;
  }
  v10 = sub_1400A2C04(&unk_1400E9898, v6, v5);
  LOBYTE(v5) = v10;
  if ( v9 && !v10 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_11:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !(_BYTE)v5 )
    v8 = 0;
  *(_DWORD *)a2 = v8 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
