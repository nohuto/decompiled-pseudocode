/*
 * XREFs of sub_140056F08 @ 0x140056F08
 * Callers:
 *     sub_140056B1C @ 0x140056B1C (sub_140056B1C.c)
 * Callees:
 *     sub_1400589E8 @ 0x1400589E8 (sub_1400589E8.c)
 */

_QWORD *__fastcall sub_140056F08(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // r9d
  int v6; // edx
  int v7; // eax
  unsigned int v8; // eax
  char v9; // dl
  int v10; // ecx

  v3 = 1;
  v4 = sub_1400589E8(55042835LL, 1LL);
  *a2 = 0LL;
  v5 = v4 & 0xFFFFFF3F;
  v6 = (8 * (v4 & 0x80 | (4 * (v4 & 0x40)))) | ((v4 & 3) << 7);
  if ( (v4 & 0xFFFFFF3F) != 0 )
  {
    v7 = 0;
    if ( v5 == 2 )
      v7 = 64;
  }
  else
  {
    v7 = 64;
  }
  v8 = v6 | v7;
  v9 = 0;
  if ( (v8 & 0x400) != 0 && v8 >= 0x800 )
  {
    v10 = v8 & 0x40;
LABEL_9:
    v9 = 1;
    goto LABEL_10;
  }
  v10 = v8 & 0x40;
  if ( (v8 & 0x40) != 0 )
    goto LABEL_9;
LABEL_10:
  if ( !v10 || !v9 )
    v3 = 0;
  *(_DWORD *)a2 = v3 | v8;
  return a2;
}
