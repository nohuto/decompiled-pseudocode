/*
 * XREFs of sub_14009E050 @ 0x14009E050
 * Callers:
 *     sub_14009D86C @ 0x14009D86C (sub_14009D86C.c)
 * Callees:
 *     sub_1400589E8 @ 0x1400589E8 (sub_1400589E8.c)
 *     sub_1400A255C @ 0x1400A255C (sub_1400A255C.c)
 */

_QWORD *__fastcall sub_14009E050(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // eax
  int v11; // edi
  unsigned int v12; // edx
  char v13; // cl

  v3 = sub_1400589E8(58156969LL);
  *a2 = 0LL;
  v4 = v3 & 0x80;
  v5 = 4 * (v3 & 0x40);
  v6 = v3 & 0xFFFFFF3F;
  v7 = (8 * (v4 | v5)) | ((v6 & 3) << 7);
  if ( v6 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
    v9 = v8;
  }
  else
  {
    v8 = 64;
    v9 = 64;
  }
  v10 = v7;
  v11 = 1;
  v12 = v8 | v7;
  v13 = 0;
  *(_DWORD *)a2 = v9 | v10;
  if ( (v12 & 0x400) != 0 && v12 >= 0x800 || (v12 & 0x40) != 0 )
  {
    sub_1400A255C(&unk_1400E98C8);
    v13 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v13 )
    v11 = 0;
  *(_DWORD *)a2 = v11 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
