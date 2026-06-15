/*
 * XREFs of sub_14009E3F0 @ 0x14009E3F0
 * Callers:
 *     sub_14009DD7C @ 0x14009DD7C (sub_14009DD7C.c)
 * Callees:
 *     sub_1400589E8 @ 0x1400589E8 (sub_1400589E8.c)
 */

_QWORD *__fastcall sub_14009E3F0(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // r10d
  unsigned int v5; // edx
  int v6; // r9d
  int v7; // eax
  int v8; // r9d
  _QWORD *result; // rax

  v3 = sub_1400589E8(58989002LL);
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
