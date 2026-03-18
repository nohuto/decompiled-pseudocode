/*
 * XREFs of sub_1409EEB98 @ 0x1409EEB98
 * Callers:
 *     sub_14088063C @ 0x14088063C (sub_14088063C.c)
 *     sub_1409ED5D0 @ 0x1409ED5D0 (sub_1409ED5D0.c)
 *     sub_1409EE860 @ 0x1409EE860 (sub_1409EE860.c)
 *     sub_1409EFF2C @ 0x1409EFF2C (sub_1409EFF2C.c)
 * Callees:
 *     sub_1408809DC @ 0x1408809DC (sub_1408809DC.c)
 *     sub_1409EECF0 @ 0x1409EECF0 (sub_1409EECF0.c)
 */

__int64 __fastcall sub_1409EEB98(unsigned int *a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  unsigned int v8; // r9d

  v8 = a6;
  if ( a6 == -1 )
  {
    sub_1409EECF0((_DWORD)a1, a4, a5, 0, (__int64)&a6);
    v8 = a6;
  }
  return sub_1408809DC(a1, a2, a3, v8);
}
