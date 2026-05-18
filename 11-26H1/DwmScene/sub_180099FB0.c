/*
 * XREFs of sub_180099FB0 @ 0x180099FB0
 * Callers:
 *     sub_180099FFC @ 0x180099FFC (sub_180099FFC.c)
 * Callees:
 *     sub_18006F8B8 @ 0x18006F8B8 (sub_18006F8B8.c)
 */

__int64 *__fastcall sub_180099FB0(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8

  if ( a1 != a2 )
  {
    sub_18006F8B8(a1);
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    v5 = a1[1];
    a1[1] = a2[1];
    a2[1] = v5;
  }
  return a1;
}
