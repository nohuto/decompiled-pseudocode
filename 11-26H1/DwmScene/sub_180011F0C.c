/*
 * XREFs of sub_180011F0C @ 0x180011F0C
 * Callers:
 *     sub_180012504 @ 0x180012504 (sub_180012504.c)
 *     sub_18001B560 @ 0x18001B560 (sub_18001B560.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 */

__int64 *__fastcall sub_180011F0C(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    sub_180012440(&v5);
    v5 = *a1;
    *a1 = a2;
    sub_18000F938(&v5);
  }
  return a1;
}
