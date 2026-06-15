/*
 * XREFs of sub_14009E46C @ 0x14009E46C
 * Callers:
 *     sub_14009DEC0 @ 0x14009DEC0 (sub_14009DEC0.c)
 * Callees:
 *     sub_1400589E8 @ 0x1400589E8 (sub_1400589E8.c)
 */

_QWORD *__fastcall sub_14009E46C(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // r10d
  unsigned int v5; // edx
  int v6; // r9d
  int v7; // eax
  int v8; // r9d
  _QWORD *result; // rax

  v3 = sub_1400589E8(57048237LL);
  v4 = 0;
  *a2 = 0LL;
  v5 = v3 & 0xFFFFFF3F;
  v6 = 64;
  v7 = (8 * (v3 & 0x80 | (4 * (v3 & 0x40)))) | ((v3 & 3) << 7);
  if ( v5 )
  {
    if ( v5 == 2 )
      v4 = 64;
    v6 = v4;
  }
  v8 = v7 | v6;
  result = a2;
  *(_DWORD *)a2 = v8 | 1;
  return result;
}
