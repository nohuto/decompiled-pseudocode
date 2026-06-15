/*
 * XREFs of sub_140051D10 @ 0x140051D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

int sub_140051D10()
{
  int result; // eax
  WINBOOL v1; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v1 = 0;
  result = InitOnceBeginInitialize(&InitOnce, 1u, &v1, &v2);
  if ( result )
  {
    if ( !v1 )
      return sub_1400B6010(v2);
  }
  return result;
}
