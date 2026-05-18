/*
 * XREFs of sub_18006FA14 @ 0x18006FA14
 * Callers:
 *     sub_18006F91C @ 0x18006F91C (sub_18006F91C.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 */

__int64 __fastcall sub_18006FA14(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 8 * a2;
  memmove(a3, Src, 8 * a2);
  return (__int64)a3 + v4;
}
