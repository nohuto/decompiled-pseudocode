/*
 * XREFs of sub_140906F0C @ 0x140906F0C
 * Callers:
 *     sub_140906F68 @ 0x140906F68 (sub_140906F68.c)
 *     sub_140908B00 @ 0x140908B00 (sub_140908B00.c)
 *     sub_1409E0B70 @ 0x1409E0B70 (sub_1409E0B70.c)
 *     sub_1409E1544 @ 0x1409E1544 (sub_1409E1544.c)
 * Callees:
 *     sub_140906B5C @ 0x140906B5C (sub_140906B5C.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 */

__int64 __fastcall sub_140906F0C(unsigned int *a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  unsigned int v8; // r9d

  v8 = a6;
  if ( a6 == -1 )
  {
    sub_140909110((_DWORD)a1, a4, a5, 0, (__int64)&a6);
    v8 = a6;
  }
  return sub_140906B5C(a1, a2, a3, v8);
}
