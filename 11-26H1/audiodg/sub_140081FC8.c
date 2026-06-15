/*
 * XREFs of sub_140081FC8 @ 0x140081FC8
 * Callers:
 *     sub_14008289C @ 0x14008289C (sub_14008289C.c)
 * Callees:
 *     sub_14000F0BC @ 0x14000F0BC (sub_14000F0BC.c)
 */

__int64 *__fastcall sub_140081FC8(__int64 **a1, __int64 *a2)
{
  __int64 *result; // rax
  __int64 **v4; // rcx

  result = sub_14000F0BC((__int64)a1, a2, (__int64)a1[1], 0LL);
  v4 = (__int64 **)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
