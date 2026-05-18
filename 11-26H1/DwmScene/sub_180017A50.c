/*
 * XREFs of sub_180017A50 @ 0x180017A50
 * Callers:
 *     sub_1800177F0 @ 0x1800177F0 (sub_1800177F0.c)
 *     sub_18001EA5C @ 0x18001EA5C (sub_18001EA5C.c)
 *     sub_18007D480 @ 0x18007D480 (sub_18007D480.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 */

__int64 __fastcall sub_180017A50(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 4 * a2;
  memmove(a3, Src, 4 * a2);
  return (__int64)a3 + v4;
}
