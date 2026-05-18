/*
 * XREFs of sub_18006F35C @ 0x18006F35C
 * Callers:
 *     sub_18006F320 @ 0x18006F320 (sub_18006F320.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006F35C(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  *a1 = *a2;
  a1[1] = 0LL;
  return result;
}
