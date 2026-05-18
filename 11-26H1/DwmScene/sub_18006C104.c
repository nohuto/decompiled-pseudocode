/*
 * XREFs of sub_18006C104 @ 0x18006C104
 * Callers:
 *     sub_18006BB00 @ 0x18006BB00 (sub_18006BB00.c)
 *     sub_18006BE80 @ 0x18006BE80 (sub_18006BE80.c)
 * Callees:
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 */

__int64 __fastcall sub_18006C104(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    sub_18006B7DC(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
