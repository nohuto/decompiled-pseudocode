/*
 * XREFs of sub_1800C2B14 @ 0x1800C2B14
 * Callers:
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 */

__int64 *__fastcall sub_1800C2B14(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    sub_180012440(&v5);
    v5 = *a1;
    *a1 = v2;
    sub_18000F938(&v5);
  }
  return a1;
}
